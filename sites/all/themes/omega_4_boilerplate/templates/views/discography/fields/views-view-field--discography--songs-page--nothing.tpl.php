<?php
 /**
  * @file views-view-field--discography--songs-page--nothing.tpl.php
  * gets the first performance of the song
  * 
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
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
//get the first performance of the song
$events = views_get_view('discography');
$events->preview('song_performed', array($row->nid));
if(!empty($events->result)) {
  $date = array_pop($events->result);
  $output = l(date("M d, Y", strtotime($date->field_field_date_hour[0]['raw']['value'])), 'node/' . $date->nid, array('html' => true));
}
?>
<?php print $output; ?>