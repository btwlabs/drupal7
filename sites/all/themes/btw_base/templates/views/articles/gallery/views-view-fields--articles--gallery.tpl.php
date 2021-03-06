<?php
/**
 * @file views-view-fields--articles--gallery.tpl.php
 * Row layout for the article gallery on the article node page
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
  $items = (!empty($row->field_field_article_images)) ? $row->field_field_article_images : array();
foreach($row->field_field_article_video as $video) {
  $items[] = $video;
}
shuffle($items);
?>
<?php foreach($items as $key=>$item) :?>
  <?php $field = (isset($item['raw']['fid'])) ? 'field_article_images' : 'field_article_video'; ?>
  <li class="photo-row <?php print $field; ?> item-<?php print $key; ?> grid-row">
    <?php print render($item['rendered']);?>
  </li>
<?php endforeach; ?>