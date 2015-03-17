<?php
/**
 * @file views-view-fields--discography--song-albums.tpl.php
 * fields row layout for song media on albums, in the song node page
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
<?php //dsm($fields, 'fields'); dsm($row, 'row'); ?>
<div class="song-album-row">
  <div class="album-art-container song-album-image">
    <?php print $fields['field_images_1']->content; ?>
  </div><!-- album-art-container song-album-image -->
    <span class="<?php if (isset($fields['field_text_3'])): ?> track title<?php endif; ?>">
      <?php if (isset($fields['field_text_3'])): ?>
        <?php print '*' . $fields['field_text_3']->content; ?>
      <?php endif; ?></span>
  <span class="Listen-Label">Listen:</span>
  <div class="ui360 song-album-player">
    <?php print l('', $row->field_field_files[0]['rendered']['#markup'], array('html'=>true, 'attributes'=>array('title'=>'song'))); ?>
  </div><!-- song-player -->
  <?php if (isset($fields['field_track_product_ref'])) : ?>
    <div class="song-buy-link button">
      <?php print l(t('Buy Now'), 'node/' . $row->nid, array('attributes' => array('title' => t('Buy this track now')))); ?>
    </div><!-- song-buy-link -->
  <?php endif; ?>  
</div><!-- song-album-row -->