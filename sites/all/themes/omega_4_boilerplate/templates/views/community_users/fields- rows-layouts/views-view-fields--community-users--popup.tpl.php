<?php
/**
 * @file views-view-fields--community-users-popup.tpl.php
 * Popup of user from community users page
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
?><?php //dsm($fields); dsm($row);?>

<?php //Cant have the links linked to login form here, it's inside a vpop and redirects to the vpop url?>
<?php if(user_is_logged_in()) : ?>
  <div class="profile-popup-contact-links-container">
    <?php print theme('fantorrent_user_contact_links', array('uid' => $row->profile_uid, 'destination' => check_plain(variable_get('fantorrent_community_users_page_url', 'community-users')))); ?>
  </div>
<?php endif;?>

<?php print $fields['field_text_4']->wrapper_prefix; ?>
  <?php print $fields['field_text_4']->label_html; ?>
  <?php print $fields['field_text_4']->content; ?>
<?php print $fields['field_text_4']->wrapper_suffix; ?>

<?php print $fields['field_images_1']->wrapper_prefix; ?>
  <?php print $fields['field_images_1']->label_html; ?>
  <?php print $fields['field_images_1']->content; ?>
<?php print $fields['field_images_1']->wrapper_suffix; ?>

<div class="profile-popup-info">
<?php print $fields['field_user_gender']->wrapper_prefix; ?>
  <?php print $fields['field_user_gender']->label_html; ?>
  <?php print $fields['field_user_gender']->content; ?>
<?php print $fields['field_user_gender']->wrapper_suffix; ?>

<?php print $fields['field_address']->wrapper_prefix; ?>
  <?php print $fields['field_address']->label_html; ?>
  <?php print $fields['field_address']->content; ?>
<?php print $fields['field_address']->wrapper_suffix; ?>

<?php print $fields['view_user']->wrapper_prefix; ?>
  <?php print $fields['view_user']->label_html; ?>
  <?php print $fields['view_user']->content; ?>
<?php print $fields['view_user']->wrapper_suffix; ?>
</div>
