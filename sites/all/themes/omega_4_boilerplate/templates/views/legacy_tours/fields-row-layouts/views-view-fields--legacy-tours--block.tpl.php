<?php
/**
 * @file views-view-fields--legacy-tours--page.tpl.php
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
<div class="event-group-container clickable
  <?php if($row->field_field_event_grouping_special[0]['raw']['value'] == 1) : print "event-special"; endif;?>">
  <div class="event-group-body event-group-item">
    <div class="event-group-title event-group-item">
      <?php print $fields['name']->content; ?>
    </div><!-- event-group-title -->
    <?php if (!empty ($row->field_field_event_grouping_dates)) :  ?>
        <div class="event-group-date-range event-group-item">
          <?php print date('M Y', strtotime($row->field_field_event_grouping_dates[0]['raw']['value'])) . '&nbsp;&nbsp;-&nbsp;&nbsp;' . 
            date('M Y', strtotime($row->field_field_event_grouping_dates[0]['raw']['value2'])); ?>
        </div><!-- event-group date range -->
    <?php endif; ?>
  </div><!-- event-group-body -->
</div><!-- event group container -->
