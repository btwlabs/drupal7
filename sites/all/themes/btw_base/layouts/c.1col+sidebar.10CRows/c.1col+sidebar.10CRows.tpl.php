<div <?php print $attributes; ?>>

  <div id="site-wrapper">

    <div id="l-inner-wrap" class="l-inner-wrap"><!-- wraps all content for mobile nav push - site canvas-->

      <?php if (!empty($page['mobile_nav'])) : ?>
        <!-- mobile nav that sits outside of main site content -->
        <div id="mobile-fade">
        </div>

        <div class="l-menu-mobile">
          <div class="l-menu-mobile-top">
            <a class="nav-close-btn" id="mobile-nav-close-btn" href="#top">Close Menu</a>
          </div>
          <?php print render($page['mobile_nav']); ?>
        </div>
      <?php endif; ?>


      <?php if (($site_name) || (!empty($page['navigation'])) || ($messages)) : ?>
        <div class="l-top-wrapper">

          <?php if ($site_name): ?>
            <h1 class="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
            </h1>
          <?php endif; ?>

          <?php if (!empty($page['navigation'])) : ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>

          <!-- system messages -->
          <?php if ($messages): ?>
            <div class="l-messages"><!-- 100% width wrapper -->
              <div class="l-constrained"><!-- grid container -->
                <div class="l-messages-inner">
                  <?php print $messages; ?>
                </div>
              </div>
            </div>
          <?php endif; ?>

        </div><!-- close l-top-wrapper -->
      <?php endif; ?>

      <header class="l-header" role="banner">

        <div class="l-constrained"><!-- grid container -->

          <?php if(!empty($page['branding'])) : ?>
            <div class="l-branding">
              <?php print render($page['branding']); ?>
              <?php if ($logo): ?>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
              <?php endif; ?>
            </div><!-- l-branding -->
          <?php endif; ?>

          <?php if (!empty($page['header'])) : ?>
            <?php print render($page['header']); ?>
          <?php endif; ?>

        </div>

      </header>

      <div id="content" class="clearfix"> <!-- content section -->

        <!-- pre content region -->
        <?php if (!empty($page['pre_content'])) : ?>
          <div class="pre-content l-content-wrapper"><!-- 100% width wrapper -->
            <div class="l-constrained"><!-- grid container -->
              <div class="l-content-inner">
                <?php print render($page['pre_content']); ?>
              </div>
            </div>
          </div> <!-- close pre-content -->
        <?php endif; ?>

        <!-- main content region -->
        <div class="l-main l-content-wrapper"><!-- 100% width wrapper -->

          <a id="main-content"></a>

          <div class="l-content-admin" role="main"><!-- grid container -->
            <div class="l-content-admin-inner l-content-wrapper">

              <?php if ($tabs) : ?>
                <?php print render($tabs); ?>
              <?php endif; ?>

              <?php if(!empty($page['help'])) : ?>
                <?php print render($page['help']); ?>
              <?php endif; ?>


              <?php if ($action_links): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
              <?php endif; ?>

            </div>
          </div> <!-- close l-content-admin -->


          <!-- content_1 region -->
          <?php if(!empty($page['content_1'])) : ?>
            <div class="l-content-1" data-slide="1">
              <div class="l-content-1-inner l-content-wrapper">
                <div class="l-constrained">
                  <?php print render($page['content_1']); ?>
                </div>
              </div>
            </div> <!-- close l-content-1 -->
          <?php endif; ?>

          <?php if(!empty($page['content_2'])) : ?>
            <!-- content_2 region -->
            <div class="l-content-2 l-custom slide" data-slide="2">
              <div class="l-content-2-inner l-content-wrapper">
                <div class="l-constrained">
                  <?php print render($page['content_2']); ?>
                </div>
              </div>
            </div><!-- close l-content-2 -->
          <?php endif; ?>

          <?php if(!empty($page['content_3'])) : ?>
            <!-- content_3 region -->
            <div class="l-content-3 l-custom slide" data-slide="3">
              <div class="l-content-3-inner l-content-wrapper">
                <div class="l-constrained">
                  <?php print render($page['content_3']); ?>
                </div>
              </div>
            </div> <!-- close l-content-3 -->
          <?php endif; ?>

          <?php if(!empty($page['content_4'])) : ?>
            <!-- content_4 region -->
            <div class="l-content-4 l-custom slide" data-slide="4">
              <div class="l-content-4-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_4']); ?>
                </div>
              </div>
            </div> <!-- close l-content-4 -->
          <?php endif; ?>

          <?php if(!empty($page['content_5'])) : ?>
            <!-- content_5 region -->
            <div class="l-content-5 l-custom slide" data-slide="5">
              <div class="l-content-5-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_5']); ?>
                </div>
              </div>
            </div> <!-- close l-content-5 -->
          <?php endif; ?>

          <?php if(!empty($page['content_6'])) : ?>
            <!-- content_6 region -->
            <div class="l-content-6 l-custom slide" data-slide="6">
              <div class="l-content-6-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_6']); ?>
                </div>
              </div>
            </div> <!-- close l-content-6 -->
          <?php endif; ?>

          <?php if(!empty($page['content_7'])) : ?>
            <!-- content_7 region -->
            <div class="l-content-7 l-custom slide" data-slide="7">
              <div class="l-content-7-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_7']); ?>
                  <!-- render content here so webform node shows in this region -->
                  <?php print render($page['content']); ?>
                </div>
              </div>
            </div> <!-- close l-content-7 -->
          <?php endif; ?>

          <?php if(!empty($page['content_8'])) : ?>
            <!-- content_8 region -->
            <div class="l-content-8 l-custom slide" data-slide="8">
              <div class="l-content-8-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_8']); ?>
                  <!-- render content here so webform node shows in this region -->
                  <?php print render($page['content']); ?>
                </div>
              </div>
            </div> <!-- close l-content-8 -->
          <?php endif; ?>

          <?php if(!empty($page['content_9'])) : ?>
            <!-- content_9 region -->
            <div class="l-content-9 l-custom slide" data-slide="9">
              <div class="l-content-9-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_9']); ?>
                  <!-- render content here so webform node shows in this region -->
                  <?php print render($page['content']); ?>
                </div>
              </div>
            </div> <!-- close l-content-9 -->
          <?php endif; ?>

          <?php if(!empty($page['content_10'])) : ?>
            <!-- content_10 region -->
            <div class="l-content-10 l-custom slide" data-slide="10">
              <div class="l-content-10-inner l-inner">
                <div class="l-constrained">
                  <?php print render($page['content_10']); ?>
                  <!-- render content here so webform node shows in this region -->
                  <?php print render($page['content']); ?>
                </div>
              </div>
            </div> <!-- close l-content-10 -->
          <?php endif; ?>

        </div> <!-- close l-main -->

      </div><!-- close #content -->

      <?php if (!empty($page['pre_footer'])) : ?>
        <div class="l-pre-footer-wrapper">
          <div class="l-constrained">
            <div class="pre-footer-inner">
              <?php print render($page['pre_footer']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>

      <?php if(!empty($page['footer_1']) || !empty($page['footer_2']) || !empty($page['footer_3'])) : ?>
        <footer class="l-footer-wrapper" role="contentinfo">
          <div class="l-footer-region l-constrained">
            <div class="footer-inner">

              <?php if (!empty($page['footer_1'])) : ?>
                <?php print render($page['footer_1']); ?>
              <? endif; ?>

              <?php if (!empty($page['footer_2'])) : ?>
                <?php print render($page['footer_2']); ?>
              <?php endif; ?>

              <?php if (!empty($page['footer_3'])) : ?>
                <?php print render($page['footer_3']); ?>
              <?php endif; ?>

            </div>
          </div>
        </footer>
      <?php endif; ?>

    </div><!-- close #l-inner-wrap -->

  </div><!-- close #site-wrapper -->


</div>



