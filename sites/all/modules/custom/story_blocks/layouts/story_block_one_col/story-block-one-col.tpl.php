<?php

/**
 * @file
 * story-block-left-copy.tpl.php
 */
?>
<div class="anchor-tag"><div id="<?php print mb_strtolower(str_replace(' ', '-', preg_replace("/[^a-zA-Z0-9]+/", "", $node->title))); ?>"></div></div>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="story-block <?php print $classes;?> clearfix">
<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<div class="image-overlay"></div>
  <div class="story-block-inner">

    <?php if (!empty($col1)) : ?>
      <<?php print $col1_wrapper ?> class="col col-1-wrapper <?php print $col1_classes;?>">
        <?php print $col1; ?>
      </<?php print $col1_wrapper ?>>
    <?php endif; ?>
  </div>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
