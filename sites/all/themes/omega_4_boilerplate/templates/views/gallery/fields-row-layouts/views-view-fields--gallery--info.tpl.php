<?php
/**
 * @file views-view-fields--gallery--image-info.tpl.php
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
<?php //dsm($row, 'row'); dsm($fields, 'fields');
/**
 * calculate the number of items in the gallery item
 * and the type of content the image is from for display
 * purposes.
 */
switch($fields['type']->raw) {
  case 'event':
    $type = "legacy tour date";
    $count = ($fields['field_images_2']->raw + $fields['field_embed_video']->raw) -1;
    break;
  case 'article':
    $type = "news item";
    $count = ($fields['field_images_1']->raw + $fields['field_embed_video']->raw) -1;
    break;
}
?>
<div class="gallery-info-title title">
  <?php print $fields['title']->content; ?>
</div>
<div class="gallery-info-body">
  <span class="gallery-info-count">
    This image is from a <?php print $type; ?> that also contains <?php print $count; ?> other images/videos.
  </span>
  <span class="gallery-info-link-container">
    <?php print l(t('See more'), drupal_get_path_alias('node/' . $row->nid), array('fragment'=>'gallery')); ?>
  </span>
</div>