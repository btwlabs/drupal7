<?php
/**
 * @file node--album--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>

<div class="updates-carousel updates-carousel-album updates-carousel-album-id-<?php print $node->nid; ?>">
<span></span>
<?php if (!empty($content['field_images_1'])) : ?>
  <div class="image album-image reactive">
    <?php print render($content['field_images_1'][0]); ?>
  </div>
<?php endif; ?>
<?php print render($content['more_link']); ?>
</div>