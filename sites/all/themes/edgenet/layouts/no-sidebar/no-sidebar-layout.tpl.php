<?php //dsm(get_defined_vars()); ?>
<div <?php print $attributes; ?>>
	
<div id="site-wrapper">

  <div id="l-inner-wrap" class="l-inner-wrap"><!-- wraps all content for mobile nav push - site canvas-->
  	<div id="mobile-fade"></div>
	<!-- mobile nav that sits outside of main site content -->
	<div class="l-menu-mobile">
		<div class="l-menu-mobile-top">
			<a class="nav-close-btn" id="mobile-nav-close-btn" href="#top">Close Menu</a>
		</div>
		<?php print render($page['mobile_nav']); ?>
	</div>
  	
  	<div class="l-top-wrapper">
		<div class="l-userbar"><!-- 100% width wrapper -->
			<div class="l-constrained"><!-- grid container -->
				<div class="l-userbar-inner">
					<a class="nav-open-btn" id="mobile-nav-open-btn" href="#nav">Open Menu</a>
					<?php print render($page['user_bar']); ?>
					
					<?php if ($site_name): ?>
						<h1 class="site-name">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
						</h1>
					<?php endif; ?>
				</div>
			</div>
		</div>
		
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

  	</div><!-- l-top-wrapper -->
  	
  	<!-- pre-header menu -->
	<?php if ($page['pre_header']): ?>
	<div class="l-pre-header"><!-- 100% width wrapper -->
		<div class="l-constrained"><!-- grid container -->
			<div class="l-pre-header-inner">
				<?php print render($page['pre_header']); ?>
			</div>
		</div>
	</div>
	<?php endif; ?>
		
	<header class="l-header" role="banner">
		<div class="l-constrained"><!-- grid container -->
			
			<div class="l-branding">
				<?php print render($page['branding']); ?>
				<?php if ($logo): ?>
					<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
				<?php endif; ?>
			</div><!-- close l-branding -->
			
			<?php print render($page['header']); ?>
		</div>
	</header>	
	
	<div id="content" class="clearfix"> <!-- content section -->
	
		<!--<?php if ($title): ?>
			<div class="title-wrapper">
				<div class="l-constrained">
					<h1><?php print $title; ?></h1>
				</div>
			</div>
		<?php endif; ?>-->
	
		<!-- pre content region -->	
		<?php if ($page['pre_content']): ?>
		<div class="pre-content l-content-wrapper"><!-- 100% width wrapper -->
			<div class="l-constrained"><!-- grid container -->
				<div class="l-content-inner">
					<?php print render($page['pre_content']); ?>
				</div>
			</div>
		</div>
		<?php endif; ?>
		
		<!-- content region -->
		<div class="l-main l-content-wrapper"><!-- 100% width wrapper -->
			<div class="l-constrained"><!-- grid container -->
				<div class="l-region-inner">
					<div class="l-content" role="main"><!-- grid container -->
						<div class="l-content-inner">
							<?php print render($page['highlighted']); ?>
							<a id="main-content"></a>
							<?php print render($title_prefix); ?>
							<?php print render($title_suffix); ?>
							<?php print render($tabs); ?>
							<?php print render($page['help']); ?>
							<?php if ($action_links): ?>
								<ul class="action-links"><?php print render($action_links); ?></ul>
							<?php endif; ?>
							<?php print render($page['content']); ?>
							<?php print $feed_icons; ?>
						</div><!-- close l-content-inner -->
					</div>			
				</div>
			</div>
		</div>
		
	</div><!-- close #content -->
	
	<div class="l-pre-footer-wrapper">
		<div class="l-constrained">
			<div class="pre-footer-inner">
				<?php print render($page['pre_footer']); ?>
			</div>
		</div>	
	</div>
	<footer class="l-footer-wrapper" role="contentinfo">
		<div class="l-footer-region l-constrained">
			<div class="footer-inner">
				<?php print render($page['footer']); ?>
				<?php print render($page['footer_1']); ?>
				<?php print render($page['footer_2']); ?>
			</div>
		</div>
	</footer>
  </div><!-- close #l-inner-wrap -->
  </div><!-- close #site-wrapper -->
</div>