<?php

/**
 * @file node--instagram_post--full.tpl.php
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
<?php //dsm(get_defined_vars());//if(module_exists('devel')) {dsm($author_profile);dsm($content);}?>

<div id="node-post-<?php print $node->nid; ?>" class="view-community-feed node-post-full <?php print $classes; ?> <?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
    <?php print render($subnav); ?>
    <div class="view-content">
    <?php if(isset($content['dashboard_link'])) : ?>
      <div class="button">
        <?php print render($content['dashboard_link']); ?>
      </div>
    <?php endif; ?>
    <?php if (isset($content['share_links_nocount'])) : ?>
      <?php print render($content['share_links_nocount']); ?>
    <?php endif; ?>
    <div class="content community-feed-row">
      <?php if (isset($content['author_image'])):?>
        <div class="community-user-profile-image">
          <?php print render($content['author_image']); ?>
        </div><!-- community-user-profile-image -->
      <?php endif; ?>  
  
      <?php if(isset($user_contact_links)) : ?>
        <?php print render($content['user_contact_links']); ?>
      <?php endif; ?>
      
      <div class="community-user-full-name">
        <?php print render($content['instagram_author']); ?>
      </div><!-- community-user-full-name -->
      
     <div class="community-post-created-date">
        <?php print render($content['posted_date_ago']); ?>
      </div> <!-- community-post-created-date -->
      
      <?php if(isset($content['delete_link'])) : ?>    
      <div class="inline-admin-link delete delete-post-link">
        <?php print render($content['delete_link']); ?>
      </div> <!--delete-post-link  -->
      <?php endif; ?>
          
      <div class="community-post-media-wrapper">
        <div class="post-body">
          <?php if (isset($content['body'])):?>
            <div class="post-update">
              <?php print render($content['body']); ?>
            </div><!-- post-update -->
          <?php endif; ?>
          <?php if (isset($content['field_images_1'])):?>
            <div class="post-image">
              <?php print render($content['field_images_1']); ?>
            </div><!-- post-image -->
          <?php endif; ?>
        
          <?php if (isset($content['field_embed_video'])):?>
            <div class="post-video">
              <?php print render($content['field_embed_video']); ?>
            </div><!-- post-video -->
          <?php endif; ?>       
        
          <?php if(isset($content['field_textarea'])):?>
            <?php if (!($content['field_textarea']['#items'][0]['value'] == '<div></div>')):?>
              <div class="post-links">
                <?php print render($content['field_textarea']); ?>
              </div><!-- post-links -->
            <?php endif; ?>      
          <?php endif; ?>
          
          
         </div>
      </div> <!-- community-post-media-wrapper -->
      
      <div class="community-post-flag-wrapper">
        <div class="post-like">
         <?php print render($content['like_link']); ?>
              
          <div class="post-count">
          <?php print render($content['like_count']); ?>
          </div><!-- post-count -->
        </div><!-- post-like -->
        
        <div class="post-report">
          <?php print render($content['report_link']); ?>
        </div><!-- post-report -->
      </div><!-- community-post-flag-wrapper -->
      
      <div class="community-post-comment-link-wrapper">
        <?php print render($content['comment_link']); ?>
      </div><!-- community-post-comment-link -->
      
      <div class="community-post-comment-form">
        <?php print render($content['comment_form']); ?>
      </div> <!-- community-post-comment-form -->
            
      <?php if($node->comment_count > 0):?>
        <div class="community-post-comments community-post-nid-<?php print $node->nid;?>">
          <?php print render($content['post_comments']); ?>
        </div><!-- community-post-comments -->
      <?php endif; ?>
      
      <div class="community-post-comments-expand-link">
        <?php print render($content['comments_expand_link']); ?>
      </div><!-- community-post-comments-expand-link -->    
    </div><!-- content -->
  </div><!-- view-content  : need this for community support js to work -->
</div> <!-- /.node -->
