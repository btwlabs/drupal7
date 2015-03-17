<?php
/**
 * @file views-view-fields--banner.tpl.php
 * Layout for banners. 
 * Wraps entire banner in a link
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
//dsm($fields);
?>

<?php if(!empty($fields['edit_node'])) : ?>
  <?php print $fields['edit_node']->wrapper_prefix; ?>
    <?php print $fields['edit_node']->label_html; ?>
    <?php print $fields['edit_node']->content; ?>
  <?php print $fields['edit_node']->wrapper_suffix; ?>
<?php endif; ?>
<?php if (empty($fields['body'])) : ?>
  <?php if(!empty($fields['field_images_1'])) : ?>
    <?php print $fields['field_images_1']->wrapper_prefix; ?>
      <?php print $fields['field_images_1']->label_html; ?>
      <?php print $fields['field_images_1']->content; ?>
    <?php print $fields['field_images_1']->wrapper_suffix; ?>
  <?php endif; ?>
<?php else : ?>
  <?php if(!empty($fields['field_images_1'])) : ?>
    <?php print $fields['field_images_1']->wrapper_prefix; ?>
      <?php print $fields['field_images_1']->label_html; ?>
      <?php print $fields['field_images_1']->content; ?>
    <?php print $fields['field_images_1']->wrapper_suffix; ?>
  <?php endif; ?>
  <div id="feature-content">
    <h3>
      <?php if(!empty($fields['title'])) : ?>
        <?php print $fields['title']->wrapper_prefix; ?>
          <?php print $fields['title']->label_html; ?>
          <?php print $fields['title']->content; ?>
        <?php print $fields['title']->wrapper_suffix; ?>
      <?php endif; ?>
    </h3>
    <?php if(!empty($fields['body'])) : ?>
      <?php print $fields['body']->wrapper_prefix; ?>
        <?php print $fields['body']->label_html; ?>
        <?php print $fields['body']->content; ?>
      <?php print $fields['body']->wrapper_suffix; ?>
    <?php endif; ?>
    <?php if(!empty($fields['field_links_1'])) : ?>
      <?php print $fields['field_links_1']->wrapper_prefix; ?>
        <?php print $fields['field_links_1']->label_html; ?>
        <?php print $fields['field_links_1']->content; ?>
      <?php print $fields['field_links_1']->wrapper_suffix; ?>
    <?php endif; ?>        
  </div>
<?php endif; ?>
