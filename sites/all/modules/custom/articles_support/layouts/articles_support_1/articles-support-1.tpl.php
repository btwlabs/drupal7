<?php

/**
 * @file
 * articles support v1 full node layout template.
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="articles-support-1 clearfix <?php print $classes;?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <?php if ((!empty($title)) || (!empty($header))) : ?>
      <div class="outer-wrapper header-outer-wrapper">
        <<?php print $header_wrapper ?> class="header header-wrapper clearfix <?php print $header_classes;?>">
          <h2 class="title"><?php print $title ?></h2>
          <?php print $header; ?>
        </<?php print $header_wrapper ?>>
      </div>
  <?php endif; ?>

  <?php if ((!empty($row1))) : ?>
    <div class="outer-wrapper row1-outer-wrapper">
      <<?php print $row1_wrapper ?> class="row row-1-wrapper clearfix <?php print $row1_classes;?>">
        <?php print $row1; ?>
      </<?php print $row1_wrapper ?>>
    </div>
  <?php endif; ?>

  <?php if ((!empty($row2)) || (!empty($row2_col1)) || (!empty($row2_col2))) : ?>
    <div class="outer-wrapper row2-outer-wrapper <?php if (!empty($row2_col2)) : print 'has-sidebar'; endif;?>">
      <<?php print $row2_wrapper ?> class="row row-2-wrapper clearfix <?php print $row2_classes;?>">

        <?php if (!empty($row2_col1)) : ?>
          <<?php print $row2_col1_wrapper ?> class="col col-1-wrapper <?php print $row2_col1_classes;?>">
           <?php print $row2_col1; ?>
          </<?php print $row2_col1_wrapper ?>
        <?php endif; ?>

        <?php if (!empty($row2_col2)) : ?>
          <<?php print $row2_col2_wrapper ?> class="col col-2-wrapper <?php print $row2_col2_classes;?>">
            <?php print $row2_col2; ?>
          </<?php print $row2_col2_wrapper ?>>
        <?php endif; ?>

        <?php if(!empty($row2)) : ?>
          <?php print $row2; ?>
        <?php endif; ?>

      </<?php print $row2_wrapper ?>>
    </div>
  <?php endif; ?>

  <?php if ((!empty($row3))) : ?>
    <div class="outer-wrapper row3-outer-wrapper">
      <<?php print $row3_wrapper ?> class="row row-3-wrapper clearfix <?php print $row3_classes;?>">
        <?php print $row3; ?>
      </<?php print $row3_wrapper ?>>
    </div>
  <?php endif; ?>

  <?php if ((!empty($row_mobile))) : ?>
    <div class="outer-wrapper row-mobile-outer-wrapper">
      <<?php print $row_mobile_wrapper ?> class="row row-mobile-wrapper clearfix <?php print $row_mobile_classes;?>">
        <?php print $row_mobile; ?>
      </<?php print $row_mobile_wrapper ?>>
    </div>
  <?php endif; ?>

  <div class="outer-wrapper row4-outer-wrapper">
    <<?php print $row4_wrapper ?> class="row row-4-wrapper clearfix <?php print $row4_classes;?>">
      <?php print $row4; ?>
    </<?php print $row4_wrapper ?>>
  </div>

  <div class="outer-wrapper row-bottom-outer-wrapper">
    <<?php print $row_bottom_wrapper ?> class="row row-bottom-wrapper clearfix <?php print $row_bottom_classes;?>">
      <?php print $row_bottom; ?>
    </<?php print $row_bottom_wrapper ?>>
    </div>
</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
