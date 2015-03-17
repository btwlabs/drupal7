<?php
/**
 * @file views-view-fields--events--upcoming-events-block.tpl.php
 * Row layout for the upcoming events block
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
$timestamp = strtotime($row->field_field_date_hour_1[0]['raw']['value']);
?>
<div class="dateblock">
  <span class="month"><?php print strtoupper(date('M', $timestamp)); ?></span>
  <span class="day"><?php print date('d', $timestamp); ?></span>
  <span class="year"><?php print date('Y', $timestamp); ?></span>
</div>
<div class="titles-container">
  <?php if (isset($fields['field_address']->raw)): ?>
    <?php 
      //load the event location city/state/country as a string
      $event_location = node_load($fields['field_address']->raw);
      $location = $event_location->field_address[LANGUAGE_NONE][0]['locality'] . ', ' . $event_location->field_address[LANGUAGE_NONE][0]['administrative_area'];
    ?>
  	<h3 class="omega-narrow-up"><?php print $location;?></h3>
  <?php endif; ?>
  <h4><?php print $fields['title']->content; ?></h4>
</div>