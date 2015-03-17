<?php
/**
 * @file views-view-fields--user-groups--groups.tpl.php
 * Layout of a row in the user groups display on the user profile page
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
<?php 
//number of new updates
$updates_ = views_get_view('dash_nodes');
$data = $updates_->preview('num_updates', array($row->nid));
if($updates_->result) {
  $updates = count($updates_->result);
}


?>
<div class="profile-<?php print $row->node_type; ?>-group clickable">
<?php if($row->node_type == 'event') : ?>
  <div class="image profile-legacy-group-image">
    <?php print $fields['field_images_2']->wrapper_prefix; ?>
      <?php print $fields['field_images_2']->label_html; ?>
      <?php print $fields['field_images_2']->content; ?>
    <?php print $fields['field_images_2']->wrapper_suffix; ?>
  </div>
  <div class="group-info profile-legacy-group-info">  
    <?php print $fields['field_date_hour']->wrapper_prefix; ?>
      <?php print $fields['field_date_hour']->label_html; ?>
      <?php print $fields['field_date_hour']->content; ?>
    <?php print $fields['field_date_hour']->wrapper_suffix; ?>
    
    <?php print $fields['title']->wrapper_prefix; ?>
      <?php print $fields['title']->label_html; ?>
      <?php print $fields['title']->content; ?>
    <?php print $fields['title']->wrapper_suffix; ?>
    
  </div>
  <?php else : ?>
    <div class="image profile-user-group-image">
      <?php print $fields['field_images_1']->wrapper_prefix; ?>
        <?php print $fields['field_images_1']->label_html; ?>
        <?php print $fields['field_images_1']->content; ?>
      <?php print $fields['field_images_1']->wrapper_suffix; ?>
    </div>
    <div class="group-info profile-user-group-info">
      <?php print $fields['title_1']->wrapper_prefix; ?>
        <?php print $fields['title_1']->label_html; ?>
        <?php print $fields['title_1']->content; ?>
      <?php print $fields['title_1']->wrapper_suffix; ?>      
    </div>
  <?php endif; ?>
  <?php if(isset($updates)) : ?>
  <div class="group-updates profile-group-updates">
    <span class="group-updates-number profile-legacy-group-updates-number"><?php print $updates; ?></span>
    <span class="group-updates-label profile-legacy-group-updates-label">&nbsp;New Updates</span>
  </div>
  <?php endif; ?>
  <span></span>
</div><!-- profile-group -->