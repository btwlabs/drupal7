<?php
/**
 * @file views-view-fields.tpl.php
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
//pick the correct image to show

//if there is an article image, use that
if(!empty($row->field_field_images_1)) {
  $image = $fields['field_images_1'];
}
elseif(!empty($row->field_field_embed_video)) { //else if there's a video, use that
  $image = $fields['field_embed_video'];
}
elseif(!empty($row->field_field_images_1_1)) { //if there's a referenced album image, use that
  $image = $fields['field_images_1_1'];
}
else { //use the author's profile pic
  $image = $fields['field_images_1_2'];
}

?>
<?php if(isset($image)) : ?>
  <div class="image">
    <?php print $image->wrapper_prefix; ?>
    <?php print $image->label_html; ?>
    <?php print $image->content; ?>
    <?php print $image->wrapper_suffix; ?>            
  </div>
<?php endif; ?>
<div class="title">
  <?php print $fields['title']->wrapper_prefix; ?>
    <?php print $fields['title']->label_html; ?>
    <?php print $fields['title']->content; ?>
  <?php print $fields['title']->wrapper_suffix; ?>
</div>
