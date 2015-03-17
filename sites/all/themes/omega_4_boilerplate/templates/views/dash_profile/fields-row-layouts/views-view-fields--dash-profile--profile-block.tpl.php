<?php
/**
 * @file views-view-fields--dash-profile--block.tpl.php
 * Row layout for the dashboard profile block
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
?><?php //dsm($fields);?>
<div id="user-dashboard-profile-image" class="image">
  <?php print $fields['field_images_1']->wrapper_prefix; ?>
    <?php print $fields['field_images_1']->label_html; ?>
    <?php print $fields['field_images_1']->content; ?>
  <?php print $fields['field_images_1']->wrapper_suffix; ?>
</div>
<div id="user-dashboard-profile-stats">
  <?php print $fields['field_text_4']->wrapper_prefix; ?>
    <?php print $fields['field_text_4']->label_html; ?>
    <?php print $fields['field_text_4']->content; ?>
  <?php print $fields['field_text_4']->wrapper_suffix; ?>
  
  <?php print $fields['field_user_gender']->wrapper_prefix; ?>
    <?php print $fields['field_user_gender']->label_html; ?>
    <?php print $fields['field_user_gender']->content; ?>
  <?php print $fields['field_user_gender']->wrapper_suffix; ?>
  
  <?php //print $fields['field_user_points']->wrapper_prefix; ?>
    <?php //print $fields['field_user_points']->label_html; ?>
    <?php //print $fields['field_user_points']->content; ?>
  <?php //print $fields['field_user_points']->wrapper_suffix; ?>
  
  <?php print $fields['created']->wrapper_prefix; ?>
    <?php print $fields['created']->label_html; ?>
    <?php print $fields['created']->content; ?>
  <?php print $fields['created']->wrapper_suffix; ?>
</div>
<div id="user-dashboard-profile-about">
  <?php print $fields['field_textarea']->wrapper_prefix; ?>
    <?php print $fields['field_textarea']->label_html; ?>
    <?php print $fields['field_textarea']->content; ?>
  <?php print $fields['field_textarea']->wrapper_suffix; ?>
</div>