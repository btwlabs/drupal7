<?php
/**
 * @file views-view-fields--dashboard-messages--block.tpl.php
 * fields row layout for a privatemsg message in the dashboard
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
<?php //dsm($fields['thread_id']);?>
<div class="privatemsg-message dashboard-privatemsg-message clickable">
  <div class="image privatemsg-image">  
    <?php print $fields['field_images_1']->wrapper_prefix; ?>
      <?php print $fields['field_images_1']->label_html; ?>
      <?php print $fields['field_images_1']->content; ?>
    <?php print $fields['field_images_1']->wrapper_suffix; ?>
  </div>
  
  <div class="privatemsg-info">  
    <?php print $fields['field_text_4']->wrapper_prefix; ?>
      <?php print $fields['field_text_4']->label_html; ?>
      <?php print $fields['field_text_4']->content; ?>
    <?php print $fields['field_text_4']->wrapper_suffix; ?>
    
    <?php print $fields['privatemsg_senddate']->wrapper_prefix; ?>
      <?php print $fields['privatemsg_senddate']->label_html; ?>
      <?php print $fields['privatemsg_senddate']->content; ?>
    <?php print $fields['privatemsg_senddate']->wrapper_suffix; ?>
    
    <?php print $fields['privatemsg_subject']->wrapper_prefix; ?>
      <?php print $fields['privatemsg_subject']->label_html; ?>
      <?php print $fields['privatemsg_subject']->content; ?>
    <?php print $fields['privatemsg_subject']->wrapper_suffix; ?>
      
    <?php print $fields['privatemsg_body']->wrapper_prefix; ?>
      <?php print $fields['privatemsg_body']->label_html; ?>
      <?php print $fields['privatemsg_body']->content; ?>
    <?php print $fields['privatemsg_body']->wrapper_suffix; ?>
    
    <?php print $fields['thread_id']->wrapper_prefix; ?>
      <?php print $fields['thread_id']->label_html; ?>
      <?php print l(t('View/Reply'), 'messages/view/' . $fields['thread_id']->raw, array('attributes' => array('class' => array('clickable-select')))); ?>
    <?php print $fields['thread_id']->wrapper_suffix; ?>
  </div>  
</div>