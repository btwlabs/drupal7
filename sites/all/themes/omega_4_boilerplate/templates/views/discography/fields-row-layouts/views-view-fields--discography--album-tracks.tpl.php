<?php
/**
 * @file views-view-fields--discography-album-tracks.tpl.php
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
<?php //dsm($row, 'row'); ?>

<?php $bonus_track = $row->field_field_boolean_1[0]['raw']['value']; ?>

<span class="song-list-item song-list-title<?php if ($bonus_track): ?> bonus-track<?php endif; ?>"><?php print render($fields['title']->content); ?>
        
        <?php if (isset($fields['field_text_3'])): ?>
          <?php print $fields['field_text_3']->content; ?>
        <?php endif; ?></span>
<span class="song-list-item song-popup-link"><?php print l(t('Details'), 'node/' . $row->nid, array('query' => array('fade_id' => 'song-popup-nid-' . $row->field_song_ref_node_nid, 'position' => 'top-right', 'left' => 10, 'top' => -20), 
	'attributes' => array('class' => array('vpop-click-fade', 'ajax')))); ?></span>