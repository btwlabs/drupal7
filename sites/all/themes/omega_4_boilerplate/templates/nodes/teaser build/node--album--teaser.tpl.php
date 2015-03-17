<?php

/**
 * @file node--album--teaser.tpl.php
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
  <?php //if(module_exists('devel')) {dsm($content);}?>

<div id="album-node-<?php print $node->nid; ?>" class="album-node-teaser <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  <h2 class="title album-title album-teaser-title">
    <?php print $title; ?>
  </h2><!-- album-title -->
  <div class="album-info-container">    
    <div class="album-art-container node-content-container">
      <?php if(isset($content['field_images_1'])) :?>
        <div class="media-thumb-container reactive album-image-container album-teaser-image">
          <?php print render($content['field_images_1'][0]); ?>
        </div><!-- album-images -->
      <?php endif;?>
      
      <div class="album-more-link button">
        <?php print render($content['more_info_link']); ?>
      </div><!-- more link -->
    </div><!-- album-art-container -->
    
    <div class="release-date-and-label-container node-content-container omega-narrow-up">
      <?php if(isset($content['release_date'])): ?>
        <div class="album-date-container">
          <?php print render($content['release_date']); ?>
        </div><!-- album-release-date -->
      <?php endif; ?>
      <?php if(isset($content['field_text_1'])): ?>
        <div class="album-label-container">
          <?php print render($content['field_text_1']); ?>
        </div>
      <?php endif; ?>
    </div><!-- release-date-and-label-container -->
    
    <div class="album-links-container node-content-container omega-narrow-up">
      <?php if (isset($content['buy_link'])): ?>
            <div id="album-buy-link-container"class="node-content-container buy-link-container">
              <?php print render($content['buy_link']); ?>
            </div><!-- buy-link-container -->
      <?php endif; ?>
      
      <?php if(isset($content['field_links_1'])): ?>
        <div class="album-offsite-purchase-links album-links-item button">
          <?php print render($content['field_links_1']); ?>
        </div><!-- album-offsite-purchase-links -->
      <?php endif; ?>
    </div><!-- album-links-container -->
  
  </div><!-- album-info-container -->
  
  <?php if(isset($content['song_list_view'])): ?>
  <div class="song-list-container album-track-list-container node-content-container omega-narrow-up">
    <?php print render($content['song_list_view']);?>
  </div><!-- song-list-container -->
  <?php endif; ?>
 
  <?php 
  /**
   * The popup list view should go here
   * but it must be output outside of the 
   * view display's <li>. So, it is output
   * using views_embed_view in the page view display
   * tpl.
   */
  ?>
</div> <!-- /.album-node -->
