<?php
/**
 * @file views-view-fields--events--popup.tpl.php
 * Default simple view template to all the fields as a row for the event popup view.
 * 
 * DEPRECATED. 3/9/2012
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


        
<?php //dsm($fields, 'fields');dsm($row, 'row');?>
<?php 
//calculate whether to show presale or ticket link
$node = node_load($row->nid);
$node_array = node_view($node, 'full');
//$event_location = node_load($field_date_2_hour->raw);
/*$now = time();
$onsale = strtotime($row->field_field_field_date_2_hour[0]['raw']['value']);
$soldout = ($row->field_field_boolean_1[0]['raw']['value'] == 1);
$presale = ($now > $onsale);
$presale_access = $row->field_field_links_1_1[0]['rendered']['#access'];dsm($presale_access, 'access');
if(!empty($row->field_field_links_1_1) || (!empty($row->field_field_links_2_1))) {
  $link = (!($soldout)) ? (($presale) ? (($presale_access == TRUE) ? $fields['field_links_1_1']->content : null) : $fields['field_links_2_1']->content) : '<span class="sold-out-message">SOLD OUT</span>';
}*/

module_load_include('inc', 'fantorrent_base', '/theme/theme');
$content['related_products'] = array(
    '#theme' => 'fantorrent_view',
    '#view' => 'event_assets',
    '#display' => 'related_prod_popup',
    '#args' => array($node->field_legacy_event_group[LANGUAGE_NONE][0]['taxonomy_term']->name),
);
fantorrent_view_check($content['related_products']);

//calculate node url for share links
$nodeurl = url(drupal_get_path_alias('node/' . $node->nid), array('absolute' => TRUE));

// if the meet greet feature is on, look to see 
// a) it is checked AND
// b) the meet greet is not expired
// otherwise unset the meet greet link
if(module_exists('fantorrent_meet_greet')) {
  if(!empty($row->field_field_boolean_2)) {
    //get the number of meetgreets this event has attached (either 1 or 0)
    $meet_greets = views_get_view('meet_greet_nodes');
    $meet_greets->preview('event_meet_greets', array($row->nid));
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
} //if no meet greet feature, then check to see if a link is defined
elseif(empty($row->field_field_links_3)) {
  unset($fields['field_links_3']);
}
?>

<?php if((isset($fields['field_links_1_1'])) || (isset($fields['field_links_2_1'])) || (isset($fields['field_links_3']))) : ?>
<div class="event-purchase-link-container popup-item">
  <ul>
    <?php if(isset($fields['field_links_1_1'])): ?>
      <li class="button sale-link"><?php print $fields['field_links_1_1']->content; ?></li>
    <?php endif; ?>
    <?php if(isset($fields['field_links_2_1'])): ?>
      <li class="button sale-link"><?php print $fields['field_links_2_1']->content; ?></li>
    <?php endif; ?>
    <?php if(!empty($fields['field_links_3'])) : ?>
      <li class="button meet-greet-link"><?php print $fields['field_links_3']->content; ?></li>
    <?php endif; ?>
  </ul>
</div>
<?php endif; ?>

<fieldset class="popup-item">
  <legend>Event Details</legend>
  <div class="event-time">
    <?php print $fields['field_date_hour']->wrapper_prefix;?>
    <?php print $fields['field_date_hour']->label_html;?>
    <?php print $fields['field_date_hour']->content;?>
    <?php print $fields['field_date_hour']->wrapper_suffix;?>
  </div>
  <div class="event-title tour-title">
    <?php print $fields['field_legacy_event_group']->wrapper_prefix;?>
    <?php print $fields['field_legacy_event_group']->label_html;?>
    <?php print $fields['field_legacy_event_group']->content;?>
    <?php print $fields['field_legacy_event_group']->wrapper_suffix;?>  
  </div>
  <div class="event-location-title">
    <?php print $fields['title_1']->wrapper_prefix;?>
    <?php print $fields['title_1']->label_html;?>
    <?php print $fields['title_1']->content;?>
    <?php print $fields['title_1']->wrapper_suffix;?>  
  </div>
  <div class="event-body">
    <?php print $fields['body']->wrapper_prefix;?>
    <?php print $fields['body']->label_html;?>
    <?php print $fields['body']->content;?>
    <?php print $fields['body']->wrapper_suffix;?>  
  </div>
  <div class="event-location-address">
    <?php print $fields['field_address']->wrapper_prefix;?>
    <?php print $fields['field_address']->label_html;?>
    <?php print $fields['field_address']->content;?>
    <?php print $fields['field_address']->wrapper_suffix;?>  
  </div>
  <div class="event-location-venue-link">
    <?php foreach($row->field_field_links_1_1 as $delta => $row) { if($row->field_field_links_1_1[$delta]['rendered']['#access'] == TRUE) { ?>
    <?php print $fields['field_links_1']->wrapper_prefix;?>
    <?php print $fields['field_links_1']->label_html;?>
    <?php print $fields['field_links_1']->content;?>
    <?php print $fields['field_links_1']->wrapper_suffix;?>
    <?php }};?>
  </div>
  <div class="event-location-map-link">
    <?php foreach($row->field_field_links_2_1 as $delta => $row) { if($row->field_field_links_2_1[$delta]['rendered']['#access'] == TRUE) { ?>
    <?php print $fields['field_links_2']->wrapper_prefix;?>
    <?php print $fields['field_links_2']->label_html;?>
    <?php print $fields['field_links_2']->content;?>
    <?php print $fields['field_links_2']->wrapper_suffix;?>
    <?php }};?>
  </div>
</fieldset>

<fieldset class="popup-item omega-normal-up">
  <!-- <legend>Share</legend> -->
  <?php print theme('share_links', array('nid' => $row->nid, 'direction' => 'horizontal')); ?>
</fieldset>
<?php if(isset($content['related_products'])) : ?>
    <fieldset class="popup-item omega-normal-up">
        <legend>Tour Merchandise</legend>
        <?php print render($content['related_products']); ?>      
    </fieldset>
<?php endif; ?>
<fieldset class="popup-item">
  <legend>Attending</legend>
    <div class="facebook-attending-container">  
      <div class="facebook-attending-item">
    	  <?php print render($node_array['fb_event_title']); ?>
    	  <?php print theme('show_hide', array('element' => render($node_array['fb_event_attending']), 'height' => 100)); ?>
      </div>
    </div>  
</fieldset>

<?php print l(t('more'), 'node/' . $node->nid, 
array('html'=>true, 'attributes'=>array('class'=>array('clickable-select', 'button', 'more-info-link')))); ?>