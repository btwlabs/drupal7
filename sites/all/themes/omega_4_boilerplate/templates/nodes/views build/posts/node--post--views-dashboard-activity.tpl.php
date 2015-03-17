<?php

/**
 * @file node--post--views-dashboard-activity.tpl.php
 *
 * Theme implementation to display a node for the community user wall
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
  <?php //if(module_exists('devel')) {dsm($author_profile);dsm($content);}?>
<?php 
/**
 * load the user profile array for this build mode
 */
if(is_object($author_profile)) {
  $author_profile_array = $author_profile->buildContent($view_mode);
}
?>
<div id="post-<?php print $node->nid; ?>" class="post-node-views-dashboard-activity clickable <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  <div class="content">
    <?php if (isset($author_profile_array)):?>
      <div class="community-user-profile-image">
        <?php print render($content['author_image']); ?>
      </div><!-- community-user-profile-image -->
    <?php endif; ?>  
     
    <?php if(isset($user_contact_links)) : ?>
      <?php print render($content['user_contact_links']); ?>
    <?php endif; ?>
    
    <?php if($content['field_boolean_1']['#items'][0]['value'] == 0) : ?>
      <div class="community-user-full-name">
        <?php print l(t(render($author_profile_array['field_text_4'])), 'user/' . $author->uid, array('html'=>true));?>
      </div><!-- community-user-full-name -->
    <?php endif; ?>
    
    <div class="community-post-created-date">
      <?php print 'Posted: ' . format_interval(time()-$node->created) . ' ago'; ?>
    </div> <!-- community-post-created-date -->
        
    <div class="community-post-media-wrapper">
      <div class="post-body">
        <?php if (isset($content['field_images_1'])):?>
          <div class="post-image">
            <?php print render($content['field_images_1'][0]); ?>
          </div><!-- post-image -->
        <?php endif; ?>
      
        <?php if (isset($content['field_embed_video'])):?>
          <div class="post-video">
            <?php print render($content['field_embed_video'][0]); ?>
          </div><!-- post-video -->
        <?php endif; ?> 
        <?php if (isset($content['body'])):?>
          <div class="post-update">
            <?php print theme('ft_trimmed_text', array('value' => $content['body']['#items'][0]['value'], 'length' => 200)) . '<span class="view-link">' . l('view', 'node/' . $node->nid, array('attributes' => array('class' => array('clickable-select')))) .  '</span>'; ?>
          </div><!-- post-update -->
        <?php endif; ?>
      </div>
    </div> <!-- community-post-media-wrapper -->
    
    <?php //new comments and likes for non activity posts?>
    <?php if($content['field_boolean_1']['#items'][0]['value'] == 0) : ?>
      <div class="new-activity-container community-post-new-activity-container">
        <?php if(isset($new_comments)) : ?>
          <div class="new-activity new-comments community-post-new-comments">
            <?php print $new_comments; ?>
          </div>
        <?php endif; ?>
        
        <?php if(isset($new_likes)) : ?>
          <div class="new-activity new-likes community-post-new-likes">
            <?php print $new_likes; ?>
          </div>
        <?php endif; ?> 
      </div><!-- new-activity-container -->   
    <?php endif; ?>      
   
  </div><!-- content -->
</div> <!-- /.node -->
