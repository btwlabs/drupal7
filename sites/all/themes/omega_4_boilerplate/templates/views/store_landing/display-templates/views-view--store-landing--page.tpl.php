<?php
/**
 * @file views-view--store-landing--page.tpl.php
 * Main view template for the store landing page
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<?php 
//load page resizer js
drupal_add_js(drupal_get_path('theme', 'omega_boilerplate') . '/js/pageResizer.js');
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <?php 
      $get = $_GET;
      unset($get['q']);
    ?>  
    <div class="view-header omega-narrow-up">  
      <?php print (empty($get)) ? $header : theme('show_hide', array('element' => $header, 'height' => 0,
        'link_text' => t('Show Promotions'), 'more_text' => t('Show Promotions'), 'less_text' => t('Hide Promotions'))); ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>
  
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>
  
  <?php if($view->result) : ?>
    <div id="store-item-popup-container" style="position:relative;">
      <div id="views-popup-wrapper" class="display-override store-page-popup">
        <?php print views_embed_view('store_landing', 'popup', $view->result[0]->nid); ?>
      </div>
    </div><!-- store-item-popup-container -->
  <?php endif; ?>
  
  <?php if ($rows): ?>
    <div class="<?php print $view->current_display; ?>-main-content">  
      <div class="view-content">
        <?php print $rows; ?>
      </div>
    </div>  
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>