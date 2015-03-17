<?php

/**
 * @file node--product--full.tpl.php
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
  <?php //if(module_exists('devel')) {dsm($product_status); }?>

<div id="product-node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  
  <div id="product-header-row-container" class="node-row-container node-header-row-container clearfix">
    <?php if(isset($content['product_pager'])) : ?>
      <div id="product-node-pager-container" class="node-pager-container">
        <?php print render($content['product_pager']); ?>
      </div><!-- node-pager-container -->
    <?php endif; ?>
    <?php if(isset($content['departments'])) : ?>
      <div id="store-departments-links-container" class="subnav-container">
        <?php print render($content['departments']); ?>
      </div>
    <?php endif; ?>
  </div><!-- product-header-container -->
  
  <div id="product-middle-row1-container" class="node-row-container node-middle-row1-container clearfix">
     <div id="product-image-container" class="node-column-container node-column1-container">
       <?php if(isset($content['field_images_1'])) : ?>
         <?php print render($content['field_images_1']);?>
       <?php endif; ?>
     </div><!-- product-image-container -->
     
     <div id="product-info-container" class="node-column-container node-column2-container">
       <h1 class="title"><?php print $title ?></h1>
       <span class="<?php print render($content['product_status']); ?>"></span>
       <?php if(isset($content['product:commerce_price'])) : ?>
         <div class="price">
           <?php print render($content['product:commerce_price']); ?>
         </div>
       <?php endif; ?>  
       
        <!-- video -->
    <?php if (isset($content['field_related_videos'])): ?>
      <?php $content['field_related_videos'][0][0]['#style'] = 'wide';?>
      <div class="node-content-container embedded-video-container omega-wide-only"><?php print render($content['field_related_videos'][0][0]); ?></div>
      <?php $content['field_related_videos'][0][0]['#style'] = 'normal';?>
      <div class="node-content-container embedded-video-container omega-normal-only"><?php print render($content['field_related_videos'][0][0]); ?></div>
      <?php $content['field_related_videos'][0][0]['#style'] = 'narrow';?>
      <div class="node-content-container embedded-video-container omega-narrow-only"><?php print render($content['field_related_videos'][0][0]); ?></div>    
      <?php $content['field_related_videos'][0][0]['#style'] = 'mobile';?>
      <div class="node-content-container embedded-video-container omega-mobile-only"><?php print render($content['field_related_videos'][0][0]); ?></div> 
    <?php endif; ?>
    <!-- end video -->
       
       <?php if(isset($content['body'])) : ?>
         <div class="body">
           <?php print render($content['body']);?>
         </div>
       <?php endif; ?>
       
       <?php if(isset($content['product_tags'])) : ?>
         <div id="product-tags-container" class="tags">
           <?php print render($content['product_tags']); ?>
         </div><!-- product-tags-container -->
       <?php endif; ?>
     
       <?php if(isset($content['field_product_reference'])) : print render($content['field_product_reference']); endif; ?>
       
       <?php print render($content['share_links_horizontal']); ?>
     </div><!-- product-info-container -->
     
  </div><!-- product-middle-row1-container -->

  <?php if(isset($content['related_products'])) : ?>
  <div id="product-middle-row2-container" class="node-row-container node-middle-row2-container clearfix">
    <div id="product-related-products-container" class="node-content-container">
      <?php print render($content['related_products']); ?>
    </div><!-- product-related-products-container -->
  </div><!-- product-middle-row2-container -->
  <?php endif; ?>
  
  <div id="product-bottom-row-container" class="node-row-container node-bottom-row-container clearfix">
  
    <div id="product-comments-container" class="node-column-container node-column1-container node-comments-container">

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
    </div><!-- product-comments-container -->
  
    <?php if(isset($content['dl_shows_list'])) : ?>
    <div id="product-top-downloads-container" class="node-content-container node-column2-container teaser-list">
      <?php print render($content['dl_shows_list']);?>
    </div><!-- product-top-downloads-container -->
    <?php endif; ?>
  </div><!-- product-bottom-container -->
  
</div> <!-- /product-node -->
