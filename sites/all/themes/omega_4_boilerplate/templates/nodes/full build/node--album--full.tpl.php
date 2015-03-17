<?php

/**
 * @file node--album--full.tpl.php
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
 * - $author: The user object of the user that authored the node
 *
 * - $author_profile: The Profile2 object (profile) of the user that authored
 *   the node.
 *
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
 */
?>
<?php //if(module_exists('devel')) {dsm($content);}

?>

<div id="album-node-<?php print $node->nid; ?>" class="album-node-full <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  <div id="album-header-row-container" class="node-row-container clearfix node-header-row-container">
    <h1 <?php print $title_attributes; ?>><?php print $title ?></h1>
    <?php if(isset($content['album_pager'])): ?>
      <div class="node-pager-container">
        <?php print render($content['album_pager']); ?>
      </div><!-- node-pager-container -->
    <?php endif; ?>
    
  </div><!-- album-header-container -->

  <div id="album-middle-row1-container" class="node-row-container clearfix node-middle-row1-container">
    <?php if(isset($content['field_images_1'])): ?>
		<div class="album-info-container">
			<div class="album-art-container">
			  <div class="media-thumb-container reactive album-image-container album-full-image image">
			    <?php print render($content['field_images_1']); ?>
			  </div><!-- album-images -->
			</div><!-- album-info-container-->
			<div class="album-links-container">
				<?php if (isset($content['buy_link'])): ?>
					<div id="album-buy-link-container"class="node-content-container buy-link-container">
					  <div id="album-links-item button" class="node-content container buy-link album-buy-link button">
					    <?php print render($content['buy_link']); ?>
					  </div>
					</div><!-- buy-link-container -->
				<?php endif; ?>
				
				<?php if(isset($content['field_links_1'])): ?>
					<div id="album-offsite-purchase-links" class="button links">
					  <?php print render($content['field_links_1']); ?>
					</div><!-- album-offsite-purchase-links -->
				<?php endif; ?>
			 </div><!-- album-links-container -->
		</div><!-- album-art-container -->
    <?php endif; ?>

    <!-- track listing  --->
    <?php if(isset($content['song_list_view'])): ?>
      <div class="song-list-container node-column-2-container">
        <?php print render($content['song_list_view']); ?>
      </div><!-- song-list-container -->
    <?php endif; ?>



  </div><!-- album-middle-row1-container -->

  <?php if (isset($content['field_product_reference'])): ?>
    <div class="named-anchor-wrapper">
      <a class="named-anchor" name="purchase-options"></a>
    </div>
    <div id="album-middle-row2-container" class="node-row-container clearfix node-middle-row2-container">
      <div id="album-purchase-options" class="node-column-container <?php print render($content['purchase_options_class']); ?>">
        <h2 class="block-title">Purchase Options</h2>
        <?php //dsm($fields); ?>
        <?php print render($content['field_product_reference']);?>
        <div class="add-to-cart-details">
          <?php print render($content['product:field_images_1']);?>
          <?php print render($content['product:title']);?>
          <?php print render($content['product:field_textarea']);?>
        </div>
      </div><!-- album-purchase-options -->
    </div><!-- album-middle-row2-container -->
  <?php endif; ?>

  <div id="album-middle-row3-container" class="node-row-container clearfix node-middle-row3-container">
    <div class="album-details-container node-column-container">
      <h2 class="block-title">Album Details</h2>
      <?php if(isset($content['field_date_hour'])): ?>
        <div class="album-date-container date">
          <span class="field-label">Release Date:</span> <?php print date('F j, Y', strtotime($content['field_date_hour']['#items'][0]['value'])); ?>
        </div><!-- album-release-date -->
      <?php endif; ?>
      <?php if(isset($content['field_text_1'])): ?>
        <div class="album-label-container label">
          <?php print render($content['field_text_1']); ?>
        </div>
      <?php endif; ?>
      <?php if(isset($content['body'])): ?>
        <div class="album-body-container body">
          <?php print render($content['body']); ?>
        </div><!-- album-body-container -->
      <?php endif; ?>
    </div><!-- album-info-container -->
  </div><!-- album-middle-row3-container -->

  <div id="album-middle-row4-container" class="node-row-container clearfix node-middle-row3-container">

    <?php if(isset($content['store_view'])): ?>
      <div id="album-store-view-container" class="node-column-container node-column2-container">
        <?php print render($content['store_view']); ?>
      </div><!-- album-store-view-container -->
    <?php endif; ?>

    <?php if(isset($content['album_reviews_view'])): ?>
      <div class="album-reviews-container">
        <?php print render($content['album_reviews_view']); ?>
      </div><!-- album-reviews-container -->
    <?php endif; ?>

    <?php if (isset($content['album_videos'])) : ?>
      <div id="album-videos-container" class="node-column-container node-column2-container">
        <?php print render($content['album_videos']); ?>
      </div> <!-- album-videos-container -->
    <?php endif; ?>

    <?php if(isset($content['discography_view'])) :?>
      <div id="album-discography-view-container" class="node-column-container node-column1-container">
        <?php print render($content['discography_view']); ?>
      </div><!-- discography-view-container -->
    <?php endif; ?>


  </div><!-- album-middle-row4-container -->
  <div id="album-bottom-row-container" class="node-row-container clearfix node-bottom-row-container">
	  <span class="node-row-container clearfix node-bottom-row-container share-links omega-narrow-up">
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
  </div>
</div> <!-- /album-node -->
