<?php
/**
 * @file views-view-fields--tfp-custom-nodes--latest-neil.tpl.php
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

<div class="band-post-bubble">
  <div class="band-post-top">
    <div class="band-post-user">
      <div class="band-post-user-name">
        <?php print $fields['field_text_4']->wrapper_prefix;?>
        <?php print $fields['field_text_4']->content;?>
        <?php print $fields['field_text_4']->wrapper_suffix;?>
      </div><!-- band-post-user-name -->
      <div class="band-post-user-follow">
      <?php if (user_is_logged_in() && (!(_fantorrent_join_user_is_limited()))) : ?>
        <?php print $fields['ops']->wrapper_prefix;?>
        <?php print $fields['ops']->content;?>
        <?php print $fields['ops']->wrapper_suffix;?>
      <?php else : ?>
        <?php print theme('ft_anon_login_link', array('link_text' => 'Follow')) ?>
      <?php endif; ?>      
      </div><!-- band-post-user-follow -->
    </div><!-- band-post-user -->
    <div class="band-post-posted-date">
    	<?php print $fields['created']->wrapper_prefix;?>
      <?php print $fields['created']->content;?>
      <?php print $fields['created']->wrapper_suffix;?>
    </div><!-- band-post-posted-date -->
  </div><!-- band-post-top -->
  <div class="band-post-callout"></div><!-- band-post-callout -->


  <div class="band-post-content">
    <?php if (!empty($row->field_body)) : ?>
      <div class="band-post-body">
        <?php print $fields['body']->wrapper_prefix;?>
        <?php print $fields['body']->content;?>
        <?php print $fields['body']->wrapper_suffix;?>
      </div><!-- band-post-body -->
    <?php endif; ?>
    
    <?php if (!empty($row->field_field_images_1)) : ?>
      <div class="band-post-images">
        <?php print $fields['field_images_1']->wrapper_prefix;?>
        <?php print $fields['field_images_1']->content;?>
        <?php print $fields['field_images_1']->wrapper_suffix;?>  
      </div><!-- band-post-images -->
    <?php endif; ?>
    
    <?php if (!empty($row->field_field_embed_video)) : ?>
      <div class="band-post-videos">
        <?php print $fields['field_embed_video']->wrapper_prefix;?>
        <?php print $fields['field_embed_video']->content;?>
        <?php print $fields['field_embed_video']->wrapper_suffix;?>    
      </div><!-- band-post-videos -->
    <?php endif; ?>
    
  </div> <!-- band-post-content -->
</div> <!-- band-post-bubble -->

<div class="band-post-author-image user-uid-<?php print $row->users_node_uid; ?>"></div>