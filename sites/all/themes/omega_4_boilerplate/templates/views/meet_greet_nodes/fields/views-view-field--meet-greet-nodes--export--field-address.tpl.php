<?php
 /**
  * @file views-view-field--meet-greet-nodes--export--field-address.tpl.php
  *  We only want the city, state of the event location
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>

<?php print $row->field_field_address[0]['raw']['locality']; ?>,&nbsp;<?php print $row->field_field_address[0]['raw']['administrative_area']; ?>