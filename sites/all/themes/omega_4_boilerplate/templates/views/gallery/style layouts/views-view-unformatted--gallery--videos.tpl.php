<?php
/**
 * @file views-view-unformatterd--gallery--page.tpl.php
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
<?php foreach ($rows as $id => $row): ?>
  <?php $type = 'video'; ?> 
  <div class="gallery-item gallery-<?php print $type; ?>-item gallery-<?php print $row['rid']; ?>-<?php print $type; ?>-item omega-narrow-up" name="gallery-<?php print $row['rid']; ?>-image-info">
	<?php $path = array(
	    'video_style' => $row['item']['rendered'][0]['#video_style'],
	    'video_url' => $row['item']['rendered'][0]['#video_url'],
	    'image_style' => $row['item']['rendered'][0]['#image_style'],
	    'image_url' => $row['item']['rendered'][0]['#image_url'],
	  );
	?>
	<?php print theme('fantorrent_gallery_support_video_embed_field_colorbox_code',$path); ?>
    <span></span>
    <div class="gallery-image-info gallery-<?php print $row['rid']; ?>-image-info">
      <?php print views_embed_view('gallery', 'info', $row['rid']); ?>
  	</div><!-- gallery-image-info for narrow up-->
  </div><!-- gallery-image-item -->
<?php endforeach; ?>