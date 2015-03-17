<?php 
/**
 * @file views-view-fields--discography--album-reviews.tpl.php
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
<?php //dsm($fields); dsm($row);?>
<div class="album-review-quote-body">
  <?php if(!empty($row->field_field_textarea)) :?>
    <span class="quote"><?php print $fields['field_textarea']->content; ?></span>
  <?php else: ?>
    <span class="quote"><?php print $fields['body']->content; ?></span>
  <?php endif; ?>
</div>
<div class="album-review-quote-info-container">
  <?php if((!empty($row->field_field_text_1_1)) && (!empty($row->field_field_textarea))) : ?>
    <div class="album-review-quote-author">  
      <?php print $fields['field_text_1_1']->content; ?>
    </div>
  <?php endif; ?>
  <?php if((!empty($row->field_field_links_1)) && (!empty($row->field_field_textarea))) : ?>
    <div class="album-review-quote-source">
      <?php print $fields['field_links_1']->content; ?>
    </div>
  <?php endif; ?>
  <div class="album-review-more-link button">
    <?php print l(t('read more'), 'node/' . $row->nid); ?>
  </div>
</div>
