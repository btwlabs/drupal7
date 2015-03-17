<?php
/**
 * @file node--event--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>

<div class="updates-carousel updates-carousel-event updates-carousel-event-nid-<?php print $node->nid; ?>">
<span></span>
<div class="date-and-venue">
  <div class="date">
    <?php print render($content['event_date']); ?>
  </div>
  <div class="venue-name">
    <?php print render($content['venue_name']); ?>
  </div>
</div>
<?php if (!empty($content['field_images_2'])) : ?>
  <div class="image event-image event-official-image reactive">
    <?php print render($content['field_images_2'][0]); ?>
  </div>
<?php elseif (!empty($content['field_images_1'])) : ?>
  <div class="image event-image event-image-normal reactive">
    <?php print render($content['field_images_1'][0]); ?>
  </div>
<?php endif; ?>
<?php print render($content['more_link']); ?>
</div>