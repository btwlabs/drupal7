<?php
 /**
  * @file views-view-field--discography--songs-page--nothing-2.tpl.php
  * gets the song's albums
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
$view = views_get_view('discography');
$view->preview('song_albums', array($row->nid));
$output = '';
$album = array();
if(!empty($view->result)) {//dsm($view->result);
   foreach($view->result as $result) {
      $album[] = $result->node_field_data_field_albums_ref_nid;   
    }
    $album = array_unique($album, $sort_flags=SORT_STRING);
    foreach ($album as $album_nid) {
     $obj = (node_load($album_nid));
     $output .= '<div class="song-page-album">' . l($obj->title, 'node/' . $obj->nid) . '</div>';
     }
  }
?>
<?php print $output; ?>