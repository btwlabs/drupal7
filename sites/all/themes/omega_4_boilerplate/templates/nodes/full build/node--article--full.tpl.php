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
<?php //if(module_exists('devel')) {dpm($article_type_name); dpm($article_type_tid);}?>

<article id="node-id-<?php print $node->nid; ?>" class="<?php print $classes; ?> <?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>> 
  <div id="article-header-row-container" class="node-row-container clearfix node-header-row-container">
    <?php print render($content['subnav']); ?>
    <h2 <?php print $title_attributes; ?>><?php print $title ?></h2>
    <?php if ($content['submitted']): ?>
      <span class="submitted"><?php print render($content['submitted']); ?></span>
    <?php endif; ?>  

	  <?php if (isset($content['field_tags'])) : ?>
	    <div id="article-tags-container">
	      <?php print render($content['field_tags']); ?>
	    </div>
	  <?php endif; ?>
	  <?php print render($content['share_links_horizontal']); ?>
  
  </div><!-- article-header-container -->


  <div id="article-middle-row1-container" class="node-row-container clearfix node-middle-row1-container">		
    <!-- video -->
    <?php if (isset($content['field_embed_video'])): ?>
      <?php $content['field_embed_video'][0][0]['#style'] = 'wide';?>
      <div class="node-content-container embedded-video-container"><?php print render($content['field_embed_video'][0][0]); ?></div>
    <?php elseif(isset($content['field_images_1'])) : ?>
      <div class="node-content-container reactive image">
        <?php print render($content['field_images_1'][0]); ?>
      </div>   
    <?php endif; ?>
    <!-- end video -->
	<?php if (isset($content['article_songs'])) : ?>
	  <div id="article-songs-container">
	    <?php print render($content['article_songs']); ?>
	  </div> <!-- article-songs-container -->
	<?php endif; ?>	
  </div> <!-- article-middle-row1-container -->
  
  
  <div id="article-middle-row2-container" class="node-row-container clearfix node-middle-row2-container">
    <!-- article sidebar images, pullquote, related content --->
    <?php if(isset($content['field_textarea'])) : ?>
      <div id="article-sidebar1-container" class="node-sidebar-container node-sidebar1-container omega-narrow-up"> 
        <?php if (isset($content['field_textarea'])): ?>
          <div class="quote-item">
            <span class="quote-start quote">&#8220;</span>
            <div class="quote-body"><?php print render($content['field_textarea']); ?></div><!-- quote-body -->
            <span class="quote-end quote">&#8221;</span>
            <div class="quote-author"><?php print render($content['field_text_1']); ?></div><!-- quote-author -->
            <span class="quote-url"><?php print render($content['field_links_1']); ?></span>
          </div><!-- article-pullquote -->
        <?php endif; ?>
      </div><!-- node-sidebar-container >=NARROW UP VERSION-->
    <?php endif; ?>
    <div id="article-body-container" class="body">
      <?php print render($content['body']); ?>
    </div>
  </div><!-- article-middle-row2-container -->
  
  
  <?php if (isset($content['gallery'])) : ?>
    <?php print l('', '', array('attributes'=> array('name'=>'gallery'))); ?>
  <?php endif; ?>
  
  <!-- in this article (related content) and article photo gallery -->
  <?php if (isset($content['gallery']) || isset($content['related_nodes'])) : ?>
    <div id="article-middle-row3-container" class="node-row-container clearfix node-middle-row3-container omega-narrow-up">
      <?php if (isset($content['related_nodes'])) : ?>
        <div id="article-nodes-container">
        <h2 class="block-title">In this Article</h2>
          <?php print render($content['related_nodes']); ?>
        </div><!-- article-nodes-container -->
      <?php endif; ?>
      <?php if (isset($content['gallery'])) : ?>
        <div id="article-photo-gallery-container" class="photo-gallery-container reactive">
          <?php print render($content['gallery']); ?>
        </div><!-- article-photo-gallery-container -->
      <?php endif; ?>
    </div><!-- article-middle-row3-container -->
  <?php endif; ?>
  
  
  <!-- article sidebar images, pullquote, related content for mobile only (goes below content) --->
  <div id="article-mobile-middle-row4-container" class="node-row-container clearfix node-middle-row4-container omega-mobile-only region"> 
    <?php if (isset($content['field_textarea'])): ?>
      <div id="article-pullquote" class="quote-item">
        <span class="quote-start quote">&#8220;</span>
        <div class="quote-body"><?php print render($content['field_textarea']); ?></div><!-- quote-body -->
        <span class="quote-end quote">&#8221;</span>
        <div class="quote-author"><?php print render($content['field_text_1']); ?></div><!-- quote-author -->
        <span class="quote-url"><?php print render($content['field_links_1']); ?></span>
      </div><!-- article-pullquote -->
    <?php endif; ?>
    
    <!-- article-sidebar: print related content here as applicable -album reviewed, etc -->
    <?php if(isset($album)): ?>
    <h2 class="block-title">In this Article</h2>
      <div class="album-item">
      	<?php if (isset($album['field_images_1'])): ?>
      	  <div class="album-teaser-image image">
      	    <?php print render($album['field_images_1']); ?>
      	  </div>
      	<?php endif; ?>
      	<div class="album-teaser-title title">
      	  <?php print render(check_plain($album['#node']->title)); ?>
      	</div>
      	<?php if (isset($album['field_date_hour'])): ?>
      	  <div class="album-teaser-release-date date">
      	    <?php print render($album['field_date_hour']); ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    
    <?php if (isset($content['field_images_1'])): ?>
      <span class="reactive image"><?php print render($content['field_images_1']); ?></span>
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
    <?php if(isset($content['article_type_tid'])):?>
      <div id="article-more-articles-container" class="node-more-articles node-column-container node-column1-container">
        <?php if($content['article_type_name']['#value'] == 'Blog'): ?>
            <?php print render($content['recent_blogs']); ?>
        <?php else: ?>
            <?php print render($content['articles_by_type']); ?>
        <?php endif; ?>
    </div>
    <?php endif; ?>
    <div id="article-recent-articles-container" class="node-more-articles node-column-container node-column2-container">
      <?php print render($content['recent_articles']); ?>    
    </div>    
  </div>

  <div class="node-comments-container node-row-container clearfix">
    <?php //print render($content['comments']); ?>
    <?php if(isset($content['post_form'])): ?>
        <div class="community-item community-post-form-container">
           <?php print render($content['post_form']); ?>
        </div><!-- post form -->
    <?php endif; ?>
    <?php if (isset($content['node_posts'])): ?>
      <!-- <h2 class="block-title">From the Community</h2> -->
      <?php print render($content['node_posts']); ?>
    <?php endif; ?>
  </div>
</article> <!-- /.article -->