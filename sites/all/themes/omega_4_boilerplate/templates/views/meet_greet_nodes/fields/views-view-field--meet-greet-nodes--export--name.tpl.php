<?php
 /**
  * @file views-view-field--meet-greet-nodes--export--name.tpl.php
  *  We need to replace the user name with the name given on the meet & greet
  *  request webform submission
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
<?php
if($submission = get_meet_greet_submission($row->users_field_data_field_user_ref_2_uid, $row->nid)) {
  $output = $submission->data[2]['value'][0];
}
?>
<?php print $output; ?>