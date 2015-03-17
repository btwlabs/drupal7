
<?php
/**
 * @file views-view-fields--event-assets--concert-photo.tpl.php
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
<?php
//get fid
$fid = (isset($_GET['fb_preview_fid'])) ? $_GET['fb_preview_fid'] : 'all';
$valid_fid = false;
if(!($fid == 'all')) {
  $mg_view = views_get_view('event_assets_files');
  $data = $mg_view->preview('block', array($fid));
  $valid_fid = (!empty($mg_view->result));
}
?>
<?php if(!$valid_fid): ?>
    <?php print $fields['field_images_2']->wrapper_prefix; ?>
      <?php print $fields['field_images_2']->label_html; ?>
      <?php print render($row->field_field_images_2[0]['rendered']);?>
    <?php print $fields['field_images_2']->wrapper_suffix; ?>

<?php else: ?>
  <?php
    // load the m&g concert photo from the view loaded above
    $img = array(
      '#theme' => 'image_style',
      '#style_name' => 'legacy_concert_photo',
      '#path' => $mg_view->result[0]->file_managed_uri,
    );
  ?>

  <?php print $fields['field_images_2']->wrapper_prefix;?>
    <?php print $fields['field_images_2']->label_html; ?>
    <?php print  render($img); ?>
  <?php print $fields['field_images_2']->wrapper_suffix; ?>
<?php endif; ?>