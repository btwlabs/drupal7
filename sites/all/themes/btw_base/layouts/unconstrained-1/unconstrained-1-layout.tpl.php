<div <?php print $attributes; ?>>

<div id="site-wrapper">

	<div id="l-inner-wrap" class="l-inner-wrap"><!-- wraps all content for mobile nav push - site canvas-->
	
		<?php if (!empty($page['mobile_nav'])) : ?>
			
			<div id="mobile-fade"></div>
			
			<!-- mobile nav that sits outside of main site content -->
			<div class="l-menu-mobile">
				<div class="l-menu-mobile-top">
					<a class="nav-close-btn" id="mobile-nav-close-btn" href="#top">Close Menu</a>
				</div>
				<?php print render($page['mobile_nav']); ?>
			</div>
		<?php endif; ?>
	
		<!-- mobile header -->
		<?php if (($site_name) || (!empty($page['navigation']))) : ?>
	    	<div class="l-mobile-header">
				
					<!-- nav open button -->
					<a class="nav-open-btn" id="mobile-nav-open-btn" href="#nav">Open Menu</a>
					
					<?php if ($site_name): ?>
						<h1 class="site-name">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
						</h1>
					<?php endif; ?>
		
					<?php if (!empty($page['navigation'])) : ?>
						<?php print render($page['navigation']); ?>
					<?php endif; ?>
							
	    	</div><!-- close l-mobile-header -->
		<?php endif; ?>

		<!-- system messages -->
		<?php if (!empty($messages)) : ?>
	    	<div class="l-messages">
				<div class="l-constrained">
						
					<!-- system messages -->
					<?php if ($messages): ?>
						<div class="l-messages"><!-- 100% width wrapper -->
							<div class="l-messages-inner">
								<?php print $messages; ?>
							</div>
						</div>
					<?php endif; ?>
					
				</div><!-- close l-constrained -->
	    	</div><!-- close l-messages -->
		<?php endif; ?>
	
		<header class="l-header" role="banner">
			<div class="l-constrained">
	
		    	<?php if (!empty($page['header'])) : ?>
		        	<?php print render($page['header']); ?>
				<?php endif; ?>
		    	
		    	<?php if(!empty($page['branding'])) : ?>
		        	<div class="l-branding">
						<?php print render($page['branding']); ?>
						<?php if ($logo): ?>
				            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
						<?php endif; ?>
		        	</div><!-- l-branding -->
				<?php endif; ?>
						
			</div><!-- close l-constrained -->
		</header>
	
		<div id="content" class="clearfix"> <!-- content section -->
	
		    <!-- pre content region -->
		    <?php if (!empty($page['pre_content'])) : ?>
		      <div class="pre-content l-content-wrapper"><!-- 100% width wrapper -->
		          <div class="l-content-inner">
		            <?php print render($page['pre_content']); ?>
		          </div>
		      </div> <!-- close pre-content -->
		    <?php endif; ?>
	
		    <!-- main content region -->
		    <div class="l-main l-content-wrapper"><!-- 100% width wrapper -->
	
		    	<a id="main-content"></a>
		
				<div class="l-content-admin"><!-- grid container -->
			        <div class="l-content-admin-inner l-inner">
			
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
	
				
				<?php if(!empty($page['content_1'])) : ?>
				<!-- content_1 region -->
					<div class="l-content-1 l-content slide" data-slide="1" role="main">
						<div class="l-content-1-inner l-inner">
					    	<?php print render($page['content_1']); ?>
						</div>
					</div> <!-- close l-content-1 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_2'])) : ?>
				<!-- content_2 region -->
					<div class="l-content-2 l-content slide" data-slide="2">
						<div class="l-content-2-inner l-inner">
					    	<?php print render($page['content_2']); ?>
						</div>
					</div><!-- close l-content-2 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_3'])) : ?>
				<!-- content_3 region -->
					<div class="l-content-3 l-content slide" data-slide="3">
						<div class="l-content-3-inner l-inner">
					    	<?php print render($page['content_3']); ?>
						</div>
					</div> <!-- close l-content-3 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_4'])) : ?>
				<!-- content_4 region -->
					<div class="l-content-4 l-content slide" data-slide="4">
						<div class="l-content-4-inner l-inner">
					    	<?php print render($page['content_4']); ?>
						</div>
					</div> <!-- close l-content-4 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_5'])) : ?>
				<!-- content_5 region -->
					<div class="l-content-5 l-content slide" data-slide="5">
						<div class="l-content-5-inner l-inner">
					    	<?php print render($page['content_5']); ?>
						</div>
					</div> <!-- close l-content-5 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_6'])) : ?>
				<!-- content_6 region -->
					<div class="l-content-6 l-content slide" data-slide="6">
						<div class="l-content-6-inner l-inner">
					    	<?php print render($page['content_6']); ?>
						</div>
					</div> <!-- close l-content-6 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_7'])) : ?>
				<!-- content_7 region -->
					<div class="l-content-7 l-content slide" data-slide="7">
						<div class="l-content-7-inner l-inner">
					    	<?php print render($page['content_7']); ?>
						</div>
					</div> <!-- close l-content-7 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_8'])) : ?>
				<!-- content_8 region -->
					<div class="l-content-8 l-content slide" data-slide="8">
						<div class="l-content-8-inner l-inner">
					    	<?php print render($page['content_8']); ?>
						</div>
					</div> <!-- close l-content-8 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_9'])) : ?>
				<!-- content_9 region -->
					<div class="l-content-9 l-content slide" data-slide="9">
						<div class="l-content-9-inner l-inner">
					    	<?php print render($page['content_9']); ?>
						</div>
					</div> <!-- close l-content-9 -->
				<?php endif; ?>
				
				<?php if(!empty($page['content_10'])) : ?>
				<!-- content_10 region -->
					<div class="l-content-10 l-content slide" data-slide="10">
						<div class="l-content-10-inner l-inner">
					    	<?php print render($page['content_10']); ?>
						</div>
					</div> <!-- close l-content-10 -->
				<?php endif; ?>
	
	    	</div> <!-- close l-main -->
	
		</div><!-- close #content -->
	
		<?php if (!empty($page['pre_footer'])) : ?>
		    <div class="l-pre-footer-wrapper">
		    	<div class="pre-footer-inner l-constrained">
		        	<?php print render($page['pre_footer']); ?>
		    	</div>
		    </div>
		<?php endif; ?>
	
		<?php if(!empty($page['footer_1']) || !empty($page['footer_2']) || !empty($page['footer_3'])) : ?>
		    <footer class="l-footer-wrapper" role="contentinfo">
		    	<div class="l-footer-region">
		        	<div class="footer-inner l-constrained">
						<?php if (!empty($page['footer_1'])) : ?>
							<?php print render($page['footer_1']); ?>
						<?php endif; ?>
		
						<?php if (!empty($page['footer_2'])) : ?>
							<?php print render($page['footer_2']); ?>
						<?php endif; ?>
		        	</div>
		      	</div>
		    </footer>
		<?php endif; ?>
	
	</div><!-- close #l-inner-wrap -->

</div><!-- close #site-wrapper -->

</div>