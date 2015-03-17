<?php
/**
 * @file views-view-fields--discography--popup.tpl.php
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
<?php //dsm($fields); ?>
  <?php print l(t('close'), current_path(), array('attributes'=>array('class'=>array('views-popup-close'))));?>
  <div class="song-popup-title-and-player-container">
    <span class="listen-label">Listen:</span>
    <div class="ui360 song-popup-player popup-item">
      <?php print l('', $row->field_field_files[0]['rendered']['#markup'], array('html'=>true, 'attributes'=>array('title'=>'song'))); ?>
    </div><!-- song-popup-player -->
    <?php if (isset($fields['field_track_product_ref'])) : ?>
      <div class="song-buy-link button">
        <?php print l(t('Buy Now'), 'node/' . $row->nid, array('query' => array('type' => 'node', 'node' => $row->nid, 'view_mode' => 'full'), 'attributes' => array('class' => array('colorbox-content'), 'title' => t('Buy this track now')))); ?>
      </div><!-- song-buy-link -->
    <?php endif; ?>

    <div class="song-popup-title song-title popup-item<?php if (isset($fields['field_boolean_1'])): ?> bonus-track<?php endif; ?>">
      <h6><?php print $fields['title']->content; ?>
            <?php if (isset($fields['field_text_3'])): ?>
              <?php print $fields['field_text_3']->content; ?>
            <?php endif; ?>
      </h6>
    </div><!-- song-popup-title -->
  </div><!-- song-popup-title-and-player-contaner -->
  <div class="song-popup-lyrics song-lyrics popup-item">
    <?php print theme('show_hide', array('element' => $fields['body']->content, 'height' => 200, 'more_text' => 'Show More Lyrics', 'less_text' => 'Show Less Lyrics')); ?>
  </div><!-- song-popup-lyrics -->
  <div class="song-popup-more-link button popup-item">
    <?php print l(t('view track info'), 'node/' . $fields['nid']->raw); ?>
  </div><!-- song-popup-more-link -->