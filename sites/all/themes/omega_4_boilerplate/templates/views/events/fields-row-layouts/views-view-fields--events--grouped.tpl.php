<?php
/**
 * @file views-view-fields--events--grouped.tpl.php
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
<?php //dsm($row);?>

<?php if(user_access('switch event to legacy')) : ?>
	<div class="event-legacy-on-switch">
	  <?php print render($fields['field_event_legacy_on']->wrapper_prefix); ?>
	  <?php print render($fields['field_event_legacy_on']->label_html); ?>
	  <?php print render($fields['field_event_legacy_on']->content); ?>
	  <?php print render($fields['field_event_legacy_on']->wrapper_suffix); ?>
	</div>
<?php endif; ?>
<div class="clickable">
  <div class="legacy-item omega-narrow-up">
	<?php print render($fields['field_images_2']->wrapper_prefix); ?>
	<?php print render($fields['field_images_2']->label_html); ?>
	<?php print render($fields['field_images_2']->content); ?>
	<?php print render($fields['field_images_2']->wrapper_suffix); ?>
  </div>
  <div class="titles-container">
    <?php if (isset($fields['field_address']->raw)): ?>
      <?php 
        //load the event location city/state/country as a string
        $event_location = node_load($fields['field_address']->raw);
        $location = ($row->field_field_address[0]['raw']['country'] == 'US') ? $row->field_field_address[0]['raw']['locality'] . ', ' . $row->field_field_address[0]['raw']['administrative_area'] :
           $row->field_field_address[0]['raw']['locality'] . ', ' .  $row->field_field_address[0]['raw']['administrative_area'] . ' ' . $row->field_field_address[0]['raw']['country'];
      ?>
      <h5 class="legacy-item legacy-event-location"><?php print $location; ?></h5>
    <?php endif; ?>
    <div class='legacy-item legacy-event-date'>
      <?php print l(date('M d, Y', strtotime($row->field_field_date_hour[0]['raw']['value'])), 'node/' . $row->nid, 
        array('html' => true, 'attributes' => array('class' => array('clickable-select')))); ?>
    </div>
  </div>
</div>