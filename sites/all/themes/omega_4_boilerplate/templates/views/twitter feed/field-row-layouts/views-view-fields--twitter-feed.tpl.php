<?php
/**
 * @file views-view-fields--twitter-feed.tpl.php
 * Fields layout template for the twitter feed displays.
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
<?php //dsm($fields);?>
<div class="tweet-item-field float-left">
<?php print $fields['field_images_1']->wrapper_prefix;?>
<?php print $fields['field_images_1']->content;?>
<?php print $fields['field_images_1']->wrapper_suffix;?>
</div>

<div class="tweet-author-container">
<span class="tweet-author-id">
<?php print $fields['field_tweet_author']->content;?>
</span>
<span class="tweet-author-name">
<?php print $fields['field_tweet_author_name']->content;?>
</span>
</div>

<div class="tweet-body-container">
<span class="tweet-body-text">
<?php print $fields['body']->wrapper_prefix;?>
<?php print $fields['body']->content;?>
<?php print $fields['body']->wrapper_suffix;?>
</span>
<span class="tweet-body-date">
<?php print $fields['field_date_minute']->wrapper_prefix;?>
<?php print $fields['field_date_minute']->content;?>
<?php print $fields['field_date_minute']->wrapper_suffix;?>
</span>
</div>