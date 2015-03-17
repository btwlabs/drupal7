<?php

/**
 * @file node--song--full.tpl.php
 *
 * Theme implementation to display a node.
 *
 * Key Variables:
 * - $title: the (sanitized) title of the node.
 * 
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   NOTE: This array will also contain any reference node content as output by
 *   its view mode
 *   
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
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
 * @see template_preprocess()
 * @see template_preprocess_node()
 * 
 * @see ../../preprocess/preprocess-node.inc
 */
?>
  <?php //if(module_exists('devel')) {dsm($content);}

  ?>

<div id="song-node-<?php print $node->nid; ?>" class="song-node-full <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  <div id="song-header-row-container" class="node-header-row-container clearfix">
    <h1 <?php print $title_attributes; ?>><?php print $title ?></h1>
    <?php if(isset($content['song_pager'])): ?>
      <div class="node-pager-container">
        <?php print render($content['song_pager']); ?>   	    
      </div><!-- node-pager-container -->
	<?php endif; ?>
  </div><!-- song-header-container -->
  
  <div id="song-middle-row1-container" class="node-middle-row1-container clearfix">
  	<div id="song-info-container" class="node-column-container node-column1-container">
  	  <?php if(isset($content['field_textarea'])): ?>
  	    <div class="song-description description node-row-container">
  	      <?php print render($content['field_textarea']); ?>
  	    </div>
  	  <?php endif; ?>
  	  <?php if(isset($content['body'])): ?>
  	    <div class="song-lyrics body node-row-container">
	      <h2 class="block-title">Lyrics</h2>
  	      <?php print render($content['body']); ?>
  	    </div>
  	  <?php endif; ?>
	  <?php if(isset($content['song_products'])): ?>
		 <div id="album-store-view-container node-row-container">
		  <?php print render($content['song_products']); ?>
		 </div><!-- album-store-view-container -->
	  <?php endif; ?>
  	</div><!-- song-info-container -->
  	
  	<div id="song-media-container" class="node-column-container node-column2-container">
  	   <?php if(isset($content['song_albums'])): ?>
  	    <div class="song-albums node-row-container">
  	      <?php print render($content['song_albums']); ?>
  	    </div><!-- song-albums -->
  	  <?php endif; ?>
  	  <?php if(isset($content['field_images_1'])): ?>
  	    <div class="song-images node-row-container">
  	      <h2 class="block-title">Single Art</h2>
  	      <?php print render($content['field_images_1']); ?>
  	    </div><!-- song-images (single art) -->
  	  <?php endif; ?>
	  <?php if(isset($content['song_gear'])) : ?>
    	  <div class="song-gear node-row-container">
    	    <?php print render($content['song_gear']); ?>
    	  </div><!-- song-gear -->
  	  <?php endif; ?>
  	  <?php if(isset($content['song_videos'])): ?>
  	    <div class="song-videos node-row-container">
  	      <?php print render($content['song_videos']); ?>
  	    </div><!-- song-videos -->
  	  <?php endif; ?>
  	  <?php if(isset($content['song_performances'])) : ?>
    	  <div class="song-last-performed node-row-container">
    	    <?php print render($content['song_performances']); ?>
    	  </div><!-- song-last-performed -->
  	  <?php endif; ?>

  </div><!-- song-media-container -->
  </div><!-- song-middle-row1-container -->
  <div id="song-bottom-row-container" class="node-bottom-row-container clearfix">
  <span calss="node-row-container clearfix node-bottom-row-container share-links omega-narrow-up">
	    <?php print render($content['share_links_horizontal']); ?>
	  </span>
	  <div class="community-item community-feeds">
      <?php //print render($content['comments']); ?>
      <?php if(isset($content['post_form'])): ?>
          <div class="community-item community-post-form-container">
       <?php print render($content['post_form']); ?>
          </div><!-- post form -->
      <?php endif; ?>
      <?php if (isset($content['node_posts'])): ?>
        <?php print render($content['node_posts']); ?>
      <?php endif; ?>
    </div>
  </div> <!-- song-bottom-container -->
</div> <!-- song-node -->
