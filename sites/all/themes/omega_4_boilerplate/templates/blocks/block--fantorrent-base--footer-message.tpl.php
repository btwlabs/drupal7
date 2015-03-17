<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
<div class="block-inner clearfix">
  <?php print render($title_prefix); ?>
  <?php if ($block->subject): ?>
    <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div<?php print $content_attributes; ?>>
    <div class="privacy-footer">
      <a href="/legal#privacy-policy">Privacy</a>
      <a href="/legal">Terms of Use</a>
      <a href="/faq-page">FAQ</a>
      <a href="/contact">Contact</a>
    </div>
    <div class="copyright">Copyright <?php echo date('Y');?> ARTIST NAME, All Rights Reserved.</div>
    <div class="footer-logos">
      <?php print l(t('IdeaDen LLC'), 'http://ideaden.com', array('attributes'  => array('title' => t('Powered by Idea Den'), 'class' => array('ideaden-logo')))); ?>
    </div>
  </div>
</div>
</<?php print $tag; ?>>