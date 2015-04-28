<?php

/**
 * @file node-article-full.tpl.php
 *
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 *
 * @see ../../preprocess/preprocess-node.inc
 * @ingroup themeable
 */
?>

<article id="node-id-<?php print $node->nid; ?>" class="<?php print $classes; ?> <?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>> 
  <div id="article-header-row-container" class="node-row-container clearfix node-header-row-container">
    <h2 <?php print $title_attributes; ?>><?php print $title ?></h2>
    <?php if (isset($content['submitted'])): ?>
      <span class="submitted"><?php print render($content['submitted']); ?></span>
    <?php endif; ?>  

	  <?php if (isset($content['field_tags'])) : ?>
	    <div id="article-tags-container">
	      <?php print render($content['field_tags']); ?>
	    </div>
	  <?php endif; ?>
    <?php if (!empty($content['share_links'])) : ?>
	    <?php print render($content['share_links']); ?>
    <?php endif; ?>
  
  </div><!-- article-header-container -->


  <div id="article-middle-row1-container" class="node-row-container clearfix node-middle-row1-container">		
    <!-- video -->
    <?php if (isset($content['field_article_video'])): ?>
      <?php $content['field_article_video'][0][0]['#style'] = 'wide';?>
      <div class="node-content-container embedded-video-container"><?php print render($content['field_article_video'][0][0]); ?></div>
    <?php elseif(isset($content['field_article_images'])) : ?>
      <div class="node-content-container reactive image">
        <?php print render($content['field_article_images'][0]); ?>
      </div>   
    <?php endif; ?>
    <!-- end video -->
  </div> <!-- article-middle-row1-container -->
  
  
  <div id="article-middle-row2-container" class="node-row-container clearfix node-middle-row2-container">
    <!-- article sidebar images, pullquote, related content --->
    <?php if(isset($content['field_article_quote'])) : ?>
      <div id="article-sidebar1-container" class="node-sidebar-container node-sidebar1-container omega-narrow-up"> 
        <?php if (isset($content['field_article_quote'])): ?>
          <div class="quote-item">
            <span class="quote-start quote">&#8220;</span>
            <div class="quote-body"><?php print render($content['field_article_quote']); ?></div><!-- quote-body -->
            <span class="quote-end quote">&#8221;</span>
            <div class="quote-author"><?php print render($content['field_article_quote_author']); ?></div><!-- quote-author -->
            <span class="quote-url"><?php print render($content['field_article_quote_url']); ?></span>
          </div><!-- article-pullquote -->
        <?php endif; ?>
      </div><!-- node-sidebar-container >=NARROW UP VERSION-->
    <?php endif; ?>
    <div id="article-body-container" class="body">
      <?php print render($content['field_article_body']); ?>
    </div>
  </div><!-- article-middle-row2-container -->
  
  <!-- article photo gallery -->
  <?php if (isset($content['gallery'])) : ?>
    <div id="article-middle-row3-container" class="node-row-container clearfix node-middle-row3-container omega-narrow-up">
      <div id="article-photo-gallery-container" class="photo-gallery-container reactive">
        <?php print render($content['gallery']); ?>
      </div><!-- article-photo-gallery-container -->
    </div><!-- article-middle-row3-container -->
  <?php endif; ?>
  
  
  <!-- article sidebar images, pullquote, related content for mobile only (goes below content) --->
  <div id="article-mobile-middle-row4-container" class="node-row-container clearfix node-middle-row4-container omega-mobile-only region"> 
    <?php if (isset($content['field_textarea'])): ?>
      <div id="article-pullquote" class="quote-item">
        <span class="quote-start quote">&#8220;</span>
        <div class="quote-body"><?php print render($content['field_article_quote']); ?></div><!-- quote-body -->
        <span class="quote-end quote">&#8221;</span>
        <div class="quote-author"><?php print render($content['field_article_quote_author']); ?></div><!-- quote-author -->
        <span class="quote-url"><?php print render($content['field_article_quote_url']); ?></span>
      </div><!-- article-pullquote -->
    <?php endif; ?>
    
    <?php if (isset($content['field_article_images'])): ?>
      <span class="reactive image"><?php print render($content['field_article_images']); ?></span>
    <?php endif; ?>
  </div><!-- node-content-container (sidebar stuff) MOBILE VERSION-->
  

   <div id="article-node-middle-row5-container" class="node-row-container clearfix node-middle-row5-container">
	 <?php if(isset($content['article_pager'])) :?>
          <div class="node-content-container node-pager-container">
            <?php print render($content['article_pager']); ?>
          </div><!-- node pager container -->
        <?php endif; ?>
   </div><!--article-node-middle-row5-container-->

  <!-- node-pager, more, and recent blocks -->
  <div id="article-node-bottom-row-container" class="node-row-container clearfix node-bottom-row-container omega-narrow-up clearfix">
    <div id="article-recent-articles-container" class="node-more-articles node-column-container node-column2-container">
      <?php print render($content['recent_articles']); ?>    
    </div>    
  </div>
</article> <!-- /.article -->