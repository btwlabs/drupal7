<?php
/**
 * @file views-view-unformatted--gallery--page.tpl.php
 * lays out images from events and articles into a pinterest-style
 * gallery linked to colorbox popups.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php
/**
 * have to make a collection of all images
 * and videos in the view result, then iterate
 * through them as seperate views 'rows'
 */
//dsm(file_uri_target($row['item']['rendered']['#item']['uri']));
$all_items = array();
$items = array();
$rows = array();
foreach($view->result as $rid=>$row) {
  $items[$row->nid] = array();
  $items[$row->nid] = (!empty($row->field_field_images_2)) ? $row->field_field_images_2 : array();
  $items[$row->nid] += (!empty($row->field_field_images_1)) ? $row->field_field_images_1 : array();
  if(!empty($row->field_field_embed_video)) {
    foreach($row->field_field_embed_video as $video) {
      $items[$row->nid][] = $video;
    }
  }
  shuffle($items[$row->nid]);
  $items[$row->nid]['type'] = $row->node_type;
  $all_items += $items;
  $nids[] = $row->nid;
}
foreach($all_items as $rid => $sub_items) {
  $id = 0;
  //Define constant to restrict items from nodes to 5
  while((isset($sub_items[$id])) && ($id < 5)) {
    $rows[] = array('rid'=>$rid, 'type' => $sub_items['type'], 'item'=>$sub_items[$id++]);
  }
}
$nids = implode(',', $nids);
shuffle($rows);
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="omega-narrow-up">
<?php foreach ($rows as $id => $row): ?>
  <?php $type = (isset($row['item']['rendered']['#image_style'])) ? 'image' : 'video'; ?>
  <div class="gallery-item gallery-<?php print $type; ?>-item gallery-<?php print $row['rid']; ?>-<?php print $type; ?>-item omega-narrow-up" name="gallery-<?php print $row['rid']; ?>-image-info">
  <?php $path = ($type == 'image') ?
    image_style_url('gallery_cbox', $row['item']['rendered']['#item']['uri']) :
    array(
      'video_style' => $row['item']['rendered'][0]['#video_style'],
      'video_url' => $row['item']['rendered'][0]['#video_url'],
      'image_style' => $row['item']['rendered'][0]['#image_style'],
      'image_url' => $row['item']['rendered'][0]['#image_url'],
    );
  ?>
  <?php if($type == 'image'): ?>
      <?php print l(render($row['item']['rendered']), $path, array('absolute'=>true, 'html'=>true, 'attributes'=>array('class'=>array('gallery-image-colorbox-link')))); ?>
  <?php else: ?>
    <?php print theme('fantorrent_gallery_support_video_embed_field_colorbox_code',$path); ?>
  <?php endif; ?>
  <div class="gallery-image-info-inline">
      <?php
        $info = views_get_view('gallery');
        $data = ($row['type'] == 'article') ?
          $info->preview('articleimage_infox', array($row['rid'])) :
          $info->preview('eventimage_infox', array($row['rid']));
        /**
         * calculate the number of items in the gallery item
         * and the type of content the image is from for display
         * purposes.
         */
        $result = $info->result[0];
        unset($event_date, $event_address);
        switch($result->node_type) {
          case 'event':
            $image_count = ($result->field_data_field_images_2_field_images_2_fid +
            $result->field_data_field_embed_video_field_embed_video_video_url);
            $comment_count = fantorrent_community_count_legacy_posts($result->nid);
            $event_date = $result->field_field_date_hour;
            break;
          case 'article':
            $image_count = ($result->field_data_field_images_1_field_images_1_fid +
              $result->field_data_field_embed_video_field_embed_video_video_url);
            $comment_count = $result->node_comment_statistics_comment_count;
            break;
        }
      ?>
      <div class="gallery-info-title title">
        <?php print l(($result->node_title), drupal_get_path_alias('node/' . $result->nid)); ?>
        <?php
        if (isset($event_date)) :
          print $event_date[0]['rendered']['#markup'];
        endif; ?>
         <?php if (isset($event_address)) : ?>
          <span class="gallery-info-event-date">
            <?php print $event_address[0]['raw']['locality'] .', ' . $event_address[0]['raw']['administrative_area']; ?>
          </span>
        <?php endif; ?>
      </div>
      <div class="gallery-info-body">
        <?php render($event_address);?>
          <div class="gallery-info-comment-count">
            <?php print $comment_count; ?> comments.
          </div>
          <div class="gallery-info-photos-count">
            <?php print $image_count; ?> images/videos.
          </div>
      </div>
    </div><!-- gallery-image-info-inline -->
    <span></span>
    <div class="gallery-image-info gallery-<?php print $row['rid']; ?>-image-info">
      <?php print views_embed_view('gallery', 'info', $row['rid']); ?>
    </div><!-- gallery-image-info for narrow up-->
  </div><!-- gallery-video-item -->
<?php endforeach; ?>
</div><!-- gallery-containaer (masonry) -->
