<?php
/**
 * @file node--post--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>
<?php //dsm($content['body']);?>
<div class="updates-carousel updates-carousel-post updates-carousel-post-id-<?php print $node->nid; ?>">
<span></span>
<div class="homepage-updates-post-info">
  <div class="homepage-updates-post-info-author-image">
    <?php print render($content['author_image']); ?>
  </div>
  <div class="homepage-updates-post-info-body">
    <div class="homepage-updates-post-info-author-name">
   	 <?php print render($author_profile_array['field_text_4']); ?>
   	</div>
   	<div class="homepage-updates-post-info-created">
      <?php print render($content['posted_date_ago']); ?>
    </div>
  </div>
</div>
<div class="homepage-updates-post-body">
  <?php if ($content['body']['#items'][0]['value'] == 'share your thoughts...') : ?>
    <?php if (!empty($content['field_images_1'])) : ?>
      <div class="image post-image reactive">
        <?php print render($content['field_images_1'][0]); ?>
      </div>
    <?php elseif (!empty($content['field_embed_video'])) : ?>
      <div class="image video-image post-video-image reactive">
        <?php print render($content['field_embed_video'][0]); ?>
      </div>
    <?php endif; ?>
  <?php else : ?>
    <?php print render($content['body']); ?>
  <?php endif; ?>
</div>
<?php print render($content['more_link']); ?>
</div>