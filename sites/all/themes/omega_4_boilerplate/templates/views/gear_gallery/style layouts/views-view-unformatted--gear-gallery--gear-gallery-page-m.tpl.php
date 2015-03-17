<?php
/**
 * @file views-view-unformatted--gear-gallery--gear-gallery-page-m.tpl.php
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
//dsm($view);
$all_items = array();
$items = array();
$rows = array();
foreach($view->result as $rid=>$row) {//dsm($row);
  $items[$row->nid] = array();
  $items[$row->nid] = (!empty($row->field_field_images_2)) ? $row->field_field_images_2 : array();
  $items[$row->nid] += (!empty($row->field_field_images_1)) ? $row->field_field_images_1 : array();
  if(!empty($row->field_field_embed_video)) {
    foreach($row->field_field_embed_video as $video) {
      $items[$row->nid][] = $video;
    }
  }//dsm($items, 'items');
  shuffle($items[$row->nid]);
  $all_items += $items;
  $nids[] = $row->nid;
}
foreach($all_items as $rid => $items) {
  $id = 0;
  while((isset($items[$id])) && ($id < 4)) { //for($id = 0; $id < 4; $id++) {
    $rows[] = array('rid'=>$rid, 'item'=>$items[$id++]);
  }
}
$nids = implode(',', $nids);
shuffle($rows);
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="gallery-container-mobile omega-mobile-only">
<?php foreach ($rows as $id => $row): ?>
  <?php $type = (isset($row['item']['rendered']['#image_style'])) ? 'image' : 'video'; ?>  
    <div class="gallery-<?php print $type; ?>-item-mobile gallery-<?php print $row['rid']; ?>-<?php print $type; ?>-item omega-mobile-only" name="gallery-<?php print $row['rid']; ?>-image-info">
      <?php print render($row['item']['rendered']); ?>
    <div class="gallery-image-info-inline">
      <?php 
        $info = views_get_view('gear_gallery');
        $info->preview('gear_image_info', array($row['rid']));
        /**
         * calculate the number of items in the gallery item
         * and the type of content the image is from for display
         * purposes.
         */
        $result = $info->result[0];
    
	$image_count = ($result->field_data_field_images_1_field_images_1_fid + $result->field_data_field_embed_video_field_embed_video_video_url) -1;
	$comment_count = $result->node_comment_statistics_comment_count;
      ?>
      <div class="gallery-info-title title">
        <?php print $result->node_title; ?>
	  </div>
      <div class="gallery-info-body">
        <div class="gallery-info-comment-count">
          <?php print $comment_count; ?> comments.
        </div>
        <div class="gallery-info-photos-count">
          <?php print $image_count; ?> images/videos.
        </div>
      </div>
    </div><!-- gallery-image-info-inline -->
    
    </div><!-- gallery-image/video-item for mobile only -->
  <?php endforeach; ?>
</div><!-- gallery-container-mobile (no masonry) -->