<?php
/**
 * @file node--article--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>

<div class="updates-carousel updates-carousel-article updates-carousel-article-id-<?php print $node->nid; ?>">
<span></span>
<?php if (!empty($content['field_images_1'])) : ?>
  <div class="image article-image reactive">
    <?php print render($content['field_images_1'][0]); ?>
  </div>
<?php elseif (!empty($content['field_embed_video'])) : ?>
  <div class="image video-image article-video-image reactive">
	<?php print render($content['field_embed_video'][0]); ?>
  </div>
<?php endif; ?>
<div class="title homepage-updates-title homepage-updates-article-title"><?php print $title; ?></div>
<?php print render($content['more_link']); ?>
</div>