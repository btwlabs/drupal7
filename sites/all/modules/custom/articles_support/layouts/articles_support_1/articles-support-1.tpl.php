<?php

/**
 * @file
 * articles support v1 full node layout template.
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="articles-support-1 <?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="outer-wrapper header-outer-wrapper">
    <<?php print $header_wrapper ?> class="header-wrapper <?php print $header_classes;?>">
      <h2 class="title"><?php print $title ?></h2>
      <?php print $header; ?>
    </<?php print $header_wrapper ?>>
  </div>

  <div class="outer-wrapper row1-outer-wrapper">
    <<?php print $row1_wrapper ?> class="row-1-wrapper <?php print $row1_classes;?>">
      <?php print $row1; ?>
    </<?php print $row1_wrapper ?>>
  </div>

  <div class="outer-wrapper row2-outer-wrapper">
    <<?php print $row2_wrapper ?> class="row-2-wrapper <?php print $row2_classes;?>">
      <div class="outer-wrapper row2-col1-outer-wrapper">
        <<?php print $row2_col1_wrapper ?> class="row2-col1-wrapper <?php print $row2_col1_classes;?>">
         <?php print $row2_col1; ?>
        </<?php print $row2_col1_wrapper ?>>
      </div>
      <div class="outer-wrapper row2-col2-outer-wrapper">
        <<?php print $row2_col2_wrapper ?> class="row2-col2-wrapper <?php print $row2_col2_classes;?>">
          <?php print $row2_col2; ?>
        </<?php print $row2_col2_wrapper ?>>
      </div>
      <?php print $row2; ?>
    </<?php print $row2_wrapper ?>>
  </div>

  <div class="outer-wrapper row3-outer-wrapper">
    <<?php print $row3_wrapper ?> class="row3-wrapper <?php print $row3_classes;?>">
      <?php print $row3; ?>
    </<?php print $row3_wrapper ?>>
  </div>

  <div class="outer-wrapper row-mobile-outer-wrapper">
    <<?php print $row_mobile_wrapper ?> class="row-mobile-wrapper <?php print $row_mobile_classes;?>">
      <div class="outer-wrapper row-mobile-col1-outer-wrapper">
        <<?php print $row_mobile_col1_wrapper ?> class="row-mobile-col1-wrapper <?php print $row_mobile_col1_classes;?>">
          <?php print $row_mobile_col1; ?>
        </<?php print $row_mobile_col1_wrapper ?>>
      </div>
      <div class="outer-wrapper row-mobile-col2-outer-wrapper">
        <<?php print $row_mobile_col2_wrapper ?> class="row-mobile-col2-wrapper <?php print $row_mobile_col2_classes;?>">
          <?php print $row_mobile_col2; ?>
        </<?php print $row_mobile_col2_wrapper ?>>
      </div>
      <?php print $row_mobile; ?>
    </<?php print $row_mobile_wrapper ?>>
  </div>

  <div class="outer-wrapper row5-outer-wrapper">
    <<?php print $row5_wrapper ?> class="row5-wrapper <?php print $row5_classes;?>">
      <?php print $row5; ?>
    </<?php print $row5_wrapper ?>>
  </div>

  <div class="outer-wrapper row-bottom-outer-wrapper">
    <<?php print $row_bottom_wrapper ?> class="row-bottom-wrapper <?php print $row_bottom_classes;?>">
      <?php print $row_bottom; ?>
    </<?php print $row_bottom_wrapper ?>>
    </div>
</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
