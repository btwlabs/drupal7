<?php
/**
 * @file node--product--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>

<div class="updates-carousel updates-carousel-product updates-carousel-product-id-<?php print $node->nid; ?>">
<span></span>
<?php if (!empty($content['field_images_1'])) : ?>
  <div class="image product-image reactive">
    <?php print render($content['field_images_1'][0]); ?>
  </div>
<?php endif; ?>  
<?php print render($content['product:commerce_price']); ?>
<?php print render($content['more_link']); ?>
</div>