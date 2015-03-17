<?php
/**
 * @file views-view-fields--store-landing--dl-shows.tpl.php
 * Row layout for the top downloaded shows display on the store landing page
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
<div class="top-downloads-list-item clickable">
  <?php if(isset($fields['field_date_hour'])) : ?>
    <div class="legacy-event-date-top"><?php print date('M d', strtotime($row->field_field_date_hour[0]['raw']['value'])); ?></div>
    <div class="legacy-event-date-bottom"><?php print date('Y', strtotime($row->field_field_date_hour[0]['raw']['value'])); ?></div>
  <?php endif; ?>
  <?php if (isset($fields['field_address']->raw)): ?>
    <?php 
      //load the event location city/state/country as a string
      $event_location = node_load($fields['field_address']->raw);
      $location = check_plain($event_location->field_address[LANGUAGE_NONE][0]['locality'] . ', ' . $event_location->field_address[LANGUAGE_NONE][0]['administrative_area']);
    ?>
  	<div class="legacy-event-location"><?php print $location;?></div>
  	<div class="legacy-event-venue"><?php print l(t($event_location->title), drupal_get_path_alias('node/' . $row->nid), array('html'=>true,
  	  'attributes'=>array('class'=>array('clickable-select')))); ?></div>
  <?php endif; ?>
   
</div><!-- top-downloads-list-item -->