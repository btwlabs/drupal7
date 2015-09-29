<?php

/**
 * @file
 * Banner support layout v1. Includes large and
 * small formats.
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="banner-with-body-1 <?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if (!empty($large_format)) : ?>
    <div class="outer-wrapper large-format-outer-wrapper">
      <<?php print $large_format_wrapper ?> class="large-format-wrapper <?php print $large_format_classes;?>">
        <?php print $large_format; ?>
      </<?php print $large_format_wrapper ?>>
    </div>
  <?php endif; ?>

  <?php if (!empty($small_format)) : ?>
    <div class="outer-wrapper small-format-outer-wrapper">
      <<?php print $small_format_wrapper ?> class="small-format-wrapper <?php print $small_format_classes;?>">
         <?php print $small_format; ?>
      </<?php print $small_format_wrapper ?>>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
