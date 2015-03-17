<?php
/**
 * @file views-view-fields--events--page.tpl.php
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
<?php 
// if the meet greet feature is on, look to see 
// a) it is checked AND
// b) the meet greet is not expired
// otherwise unset the meet greet link
if(module_exists('fantorrent_meet_greet')) {
  if(!empty($row->field_field_boolean_2)) {
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
} //if no meet greet feature, then check to see if a link is defined
elseif(empty($row->field_field_links_3)) {
  unset($fields['field_links_3']);
}
?>
<?php if(user_access('switch event to legacy')) : ?>
	<div class="inline-admin-link event-legacy-on-switch">
	  <?php print render($fields['field_event_legacy_on']->wrapper_prefix); ?>
	  <?php print render($fields['field_event_legacy_on']->label_html); ?>
	  <?php print render($fields['field_event_legacy_on']->content); ?>
	  <?php print render($fields['field_event_legacy_on']->wrapper_suffix); ?>
	</div>
<?php endif; ?>
<?php if(user_access('switch event to sold out')) : ?>
	<div class="inline-admin-link event-sold-out-switch">
	  <?php print render($fields['field_boolean_1']->wrapper_prefix); ?>
	  <?php print render($fields['field_boolean_1']->label_html); ?>
	  <?php print render($fields['field_boolean_1']->content); ?>
	  <?php print render($fields['field_boolean_1']->wrapper_suffix); ?>
	</div>
<?php endif; ?>
<?php if(node_access('update', node_load($fields['nid']->raw))) : ?>
	<div class="inline-admin-link event-edit">
	  <?php print render($fields['edit_node']->wrapper_prefix); ?>
	  <?php print render($fields['edit_node']->label_html); ?>
	  <?php print render($fields['edit_node']->content); ?>
	  <?php print render($fields['edit_node']->wrapper_suffix); ?>
	</div>
<?php endif; ?>
<div class="clickable">
  <?php print l(t('View Details'), 'node/' . $fields['nid']->raw, 
  array('query'=>array('vid'=>'events','did'=>'popup','nid'=>$fields['nid']->raw, 'position'=>'top-right', 'top'=>-20, 'dom' => 'none'), 
  'html'=>true, 'attributes'=>array('class'=>array('vpop-click-ajax', 'ajax', 'omega-narrow-up', 'float-right', 'popup-link-item')))); ?>
    <div class='dateblock float-left'>
    <span class='month'><?php print render ($fields['field_date_hour']->content);?></span>
    <span class='day'><?php print render ($fields['field_date_hour_1']->content);?></span>
  </div>
  
  <div class="titles-container">
    <?php if (isset($fields['field_address']->raw)): ?>
    	<h5 class="omega-narrow-up"><?php print $fields['field_address']->content;?></h5>
    	<h5 class="omega-mobile-only"><?php print l($fields['field_address']->content, 'node/' . $fields['nid']->raw, 
          array('html'=>true, 'attributes'=>array('class'=>array('clickable-select omega-mobile-only')))); ?></h5>
    <?php endif; ?>
    <h6><?php print $fields['title_1']->content; ?></h6>
    <?php if((isset($fields['field_links_1']) || (isset($fields['field_links_2']))) || (isset($fields['field_links_3']))) :?>
      <div class="ticket-and-meetgreet-link-wrapper">
      <?php if((isset($fields['field_links_1']) || (isset($fields['field_links_2'])))) : ?>
        <span class="tickets-text">Tickets</span>
      <?php endif; ?>
      <?php if(isset($fields['field_links_3'])) : ?>
        <span class="meet-greet-text">Meet & Greet</span>
      <?php endif; ?>
      </div><!-- ticket-and-meetgreet-link-wrapper -->
    <?php endif; ?>
  </div>
</div>

