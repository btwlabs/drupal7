<?php
/**
 * @file views-view-fields--discography--album-tracks-media.tpl.php
 * fields row layout for track list on a full album node
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
<?php //dsm($row, 'row'); ?>

<?php $bonus_track = $row->field_field_boolean_1[0]['raw']['value']; ?>

<div class="song-title<?php if ($bonus_track): ?> bonus-track<?php endif; ?>">
  <h6><?php print $fields['title']->content; ?>
    <?php if (isset($fields['field_text_3'])): ?>
      <?php print $fields['field_text_3']->content; ?>
    <?php endif; ?></h6>
</div><!-- song-title -->
<?php if (isset($fields['field_track_product_ref'])) : ?>
  <div class="song-buy-link button">
    <?php if (isset($row->field_song_ref_node_nid)) : ?>
      <?php print l(t('Buy'), 'node/' . $row->field_song_ref_node_nid, array('query' => array('type' => 'node', 'node' => $row->field_song_ref_node_nid, 'view_mode' => 'full'),
        'attributes' => array('class' => array('colorbox-content'), 'title' => t('Buy this track now')))); ?>
    <?php endif; ?>
  </div><!-- song-buy-link -->
  <?php else : ?>
  <div class="song-more-link">
    <?php print l(t('more'), 'node/' . $fields['nid']->raw); ?>
  </div><!-- song-more-link -->
<?php endif; ?>

<div class="ui360 song-player">
  <?php print l('', $row->field_field_files[0]['rendered']['#markup'], array('html'=>true, 'attributes'=>array('title'=>'song'))); ?>
</div><!-- song-player -->
