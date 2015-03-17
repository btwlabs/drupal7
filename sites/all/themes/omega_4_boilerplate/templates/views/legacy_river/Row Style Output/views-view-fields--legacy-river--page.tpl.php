<?php
/**
 * @file views-view-fields--legacy-river--page.tpl.php
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
?><?php //dsm($row, 'row'); //dsm($fields, 'fields');?>
<div class="<?php print ((!empty($row->field_field_legacy_traits_reference)) ? 'legacy-row-content' : 'legacy-row-empty');?>">
  <div class="legacy-list-edit-links">
  <?php if(user_access('switch event to legacy')) : ?>
  	<div class="inline-admin-link event-legacy-on-switch">
  	  <?php print render($fields['field_event_legacy_on']->wrapper_prefix); ?>
  	  <?php print render($fields['field_event_legacy_on']->label_html); ?>
  	  <?php print render($fields['field_event_legacy_on']->content); ?>
  	  <?php print render($fields['field_event_legacy_on']->wrapper_suffix); ?>
  	</div><!-- Legacy On Switch -->
  <?php endif; ?>
  
  <?php if(node_access('update', node_load($fields['nid']->raw))) : ?>
  	<div class="inline-admin-link event-edit">
  	  <?php print render($fields['edit_node']->wrapper_prefix); ?>
  	  <?php print render($fields['edit_node']->label_html); ?>
  	  <?php print render($fields['edit_node']->content); ?>
  	  <?php print render($fields['edit_node']->wrapper_suffix); ?>
  	</div> <!-- Edit Node Button -->
  <?php endif; ?>
  </div>
   <div class='dateblock float-left'>
      <span class='month'><?php print date('M', strtotime($row->field_field_date_hour[0]['raw']['value']));?></span>
      <span class='day'><?php print date('d', strtotime($row->field_field_date_hour[0]['raw']['value']));?></span>
      <span class='year'><?php print date('Y', strtotime($row->field_field_date_hour[0]['raw']['value']));?></span>
    </div><!-- date block -->
    
  <span class="location-venue-wrapper">
  <?php //dsm($fields);?>
    <?php $address=$fields['field_address']->wrapper_prefix . $fields['field_address']->label_html . $fields['field_address']->content .  $fields['field_address']->wrapper_suffix;?>
    <?php if(!empty($row->field_field_legacy_traits_reference)): ?>
    <?php print l($address, 'node/' . $row->nid, array('html'=> TRUE) ); ?> 
    <?php else : ?>
    <?php print $address; ?>
    <?php endif;?>
    <!-- City, ST -->
    
    <?php print $fields['title']->wrapper_prefix; ?>
    <?php print $fields['title']->label_html; ?>
    <?php print $fields['title']->content; ?>
    <?php print $fields['title']->wrapper_suffix; ?>
     <!-- Venue Name -->
  
    <span class="event-group tour-name">
      <?php if($fields['name']->content) : print ($fields['name']->content); endif;?>
    </span>
  </span>
    <!-- Tour Name -->
  
  <?php // create links for legacy trait terms ?>
  <?php 
    $links = '';
    $names = array();
    foreach($row->field_field_legacy_traits_reference as $item) {
      $name = $item['raw']['taxonomy_term']->name;
      if (!in_array($name, $names)) {
        $links .= l($name, 'node/' . $row->nid, array('fragment' => $name, 'attributes' => array('title' => t('Go to ' . $name), 'class' => array('legacy-trait-' . str_replace(' ', '-', $name)))));
        $names[] = $name;
      }
    }
  ?>
  <?php if ($links) :?>
    <span class="legacy-trait-links">
    <span class="legacy-trait-links-label">Available content:</span>
      <?php print $links; ?>
    </span>
  <?php endif; ?>
</div>  
 