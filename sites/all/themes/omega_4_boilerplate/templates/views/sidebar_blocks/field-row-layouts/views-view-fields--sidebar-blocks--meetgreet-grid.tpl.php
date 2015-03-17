<?php
/**
 * @file views-view-fields--tfp-custom-nodes--mg-photos.tpl.php
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
<?php //dsm($row); ?>
<?php print $fields['field_images_3']->wrapper_prefix; ?>
  <?php print $fields['field_images_3']->label_html; ?>
  <?php print $fields['field_images_3']->content; ?>
<?php print $fields['field_images_3']->wrapper_suffix; ?>

<div class="location-and-date">
<?php print $fields['field_address']->wrapper_prefix; ?>
  <?php print $fields['field_address']->label_html; ?>
  <?php print $row->field_field_address[0]['raw']['locality'] . ',&nbsp;' . $row->field_field_address[0]['raw']['administrative_area']; ?>
<?php print $fields['field_address']->wrapper_suffix; ?>

<?php print $fields['field_date_hour']->wrapper_prefix; ?>
  <?php print $fields['field_date_hour']->label_html; ?>
  <?php print date('M d, Y', strtotime($row->field_field_date_hour[0]['raw']['value'])); ?>
<?php print $fields['field_date_hour']->wrapper_suffix; ?>
</div><!-- location-and-date -->