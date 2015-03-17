<?php
/**
 * @file views-view-fields--event-assets--official.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php 
//jumble photos & videos

$items = (!empty($row->field_field_images_2)) ? $row->field_field_images_2 : array();
foreach($row->field_field_embed_video as $video) {
  $items[] = $video;
}
//grab photos from official user posts
$posts = views_get_view('event_assets');
$posts->preview('official_posts', array($row->nid));
$post_rows = $posts->result;
foreach($post_rows as $post_row) {
  foreach($post_row->field_field_images_1 as $post_image)
  $items[] = $post_image;
}
shuffle($items);
?>
<!--<div class="feature-photo">
   <?php print render($items[0]['rendered']); ?>
</div>-->
<?php //unset($items[0]); ?>
<ul class="teaser-grid">
  <?php foreach($items as $key=>$item) :?>
    <?php $field = (isset($item['raw']['fid'])) ? 'field_images_2' : 'field_embed_video'; ?>
    <li class="photo-row <?php print $field; ?> item-<?php print $key; ?>">  
      <?php print render($item['rendered']);?>
    </li>
  <?php endforeach; ?>
</ul>

