<?php
 /**
  * @file views-view-field--meet-greet-nodes--admin--nothing.tpl.php
  * outputs the cumulative number of meet & greets that the current user has been awarded
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
  $nodes = views_get_view('meet_greet_nodes');
  $nodes->preview('awarded', array($row->users_field_data_field_user_ref_uid));
  $num_awards = count($nodes->result);
?>

<?php print $num_awards; ?>