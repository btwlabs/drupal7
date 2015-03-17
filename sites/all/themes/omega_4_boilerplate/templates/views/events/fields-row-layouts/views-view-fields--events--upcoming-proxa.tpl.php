<?php
/**
 * @file views-view-fields--events--upcoming-proxa.tpl.php
 * fields layout for the upcoming events proximity view on the tour page
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
<?php //dsm($fields); dsm($row);?>
<?php 
$event_date = date('M d', strtotime($row->field_field_date_hour[0]['raw']['value']));
$now = time();
$onsale = strtotime($row->field_field_field_date_2_hour[0]['raw']['value']);
$soldout = ($row->field_field_boolean_1[0]['raw']['value'] == 1);
$presale = ($now < $onsale);
$link = (!($soldout)) ? (($presale) ? $fields['field_links_2']->content : $fields['field_links_1']->content) : '<span class="sold-out-message">SOLD OUT</span>';

//if event node has a meet greet field, look to see 
// a) it is checked AND
// b) the meet greet is not expired
// otherwise unset the meet greet link
if(module_exists('fantorrent_meet_greet')) {
  if(isset($fields['field_boolean_2'])) {
    //get the number of meetgreets this event has attached (either 1 or 0)
    $meet_greets = views_get_view('meet_greet_nodes');
    $meet_greets->preview('event_meet_greets', array($row->field_location_ref_node_nid));
    $num_meetgreets = count($meet_greets->result);
    if($num_meetgreets > 0) {
      $mg = node_load($meet_greets->result[0]->nid);
      if(($mg->field_boolean_1[LANGUAGE_NONE][0]['value'] == 1) || ($row->field_field_boolean_2[0]['raw']['value'] == 0)) {
        unset($fields['field_links_3']);
      }
    }
    else {
      unset($fields['field_links_3']);
    }
  }
}   

?>
<span class="event-date"><?php print $event_date; ?></span>
<?php if (isset($fields['field_address']->raw)): ?>
  <?php 
    //load the event location city/state/country as a string
    $event_location = node_load($fields['field_address']->raw);
    $location = $event_location->field_address[LANGUAGE_NONE][0]['locality'] . ', ' . $event_location->field_address[LANGUAGE_NONE][0]['administrative_area'];
  ?>
  <span class="event-location"><?php print $location;?></span>
<?php endif; ?>
<span class="event-venue"><?php print render(check_plain($event_location->title)); ?></span>
<?php if(!empty($link)) : ?><span class="buy-tickets-link button"><?php print $link; ?></span><?php endif; ?>
<?php if(isset($fields['field_links_3'])) : ?><span class="meet-greet-link button"><?php print $fields['field_links_3']->content; ?></span><?php endif; ?>

