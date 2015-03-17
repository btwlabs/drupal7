<?php

/**
 * @file node--gear--full.tpl.php
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
  <?php //if(module_exists('devel')) {dsm($node); }?>

<div id="gear-node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  
  <div id="gear-header-row-container" class="node-row-container node-header-row-container clearfix">
    <?php if(isset($content['gear_pager'])) : ?>
      <div id="gear-node-pager-container" class="node-pager-container">
        <?php print render($content['gear_pager']); ?>
      </div><!-- node-pager-container -->
    <?php endif; ?>
    <?php if(isset($content['types'])) : ?>
      <div id="gear-types-container" class="subnav-container">
        <?php print render($content['types']); ?>
      </div>
    <?php endif;?>
  </div><!-- gear-header-container -->
  
  <div id="gear-middle-row1-container" class="node-row-container node-middle-row1-container clearfix">
     <div id="gear-image-container" class="node-column-container node-column1-container">
       <?php if(isset($content['field_images_1'])) : ?>
         <?php print render($content['field_images_1']);?>
       <?php endif; ?>
     </div><!-- gear-image-container -->
     
     <div id="gear-info-container" class="node-column-container node-column2-container">
       <h1 class="title"><?php print $title ?></h1>
       <?php if(isset($content['field_gear_types'])) : ?>
        <span class="field-gear-type"><?php print render($content['field_gear_types']); ?></span>
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
    
      <?php if(isset($content['field_song_ref'])) : ?>
         <?php $content['field_song_ref']['#title'] = t('Featured On');?>
         <div id="gear-tags-container" class="tags">
           <?php print render($content['field_song_ref']); ?>
         </div><!-- field-songs-container -->
      <?php endif; ?>
       
       <?php if(isset($content['body'])) : ?>
         <div class="body">
           <?php print render($content['body']);?>
         </div>
       <?php endif; ?>
       
       <?php print render($content['share_links_horizontal']); ?>
     </div><!-- gear-info-container -->
     
  </div><!-- gear-middle-row1-container -->

  <?php if(isset($content['related_gear'])) : ?>
  <div id="gear-middle-row2-container" class="node-row-container node-middle-row2-container clearfix">
    <div id="gear-related-gears-container" class="node-content-container">
      <?php $title = t('Other '. $content['field_gear_type'][0]['#markup']);?>
      <h2 class="block-title"><?php echo $title ;?></h2>
      <?php print render($content['related_gear']); ?>
    </div><!-- gear-related-gears-container -->
  </div><!-- gear-middle-row2-container -->
  <?php endif; ?>
  
  <div id="gear-bottom-row-container" class="node-row-container node-bottom-row-container clearfix">
  
    <div id="gear-comments-container" class="node-column-container node-column1-container node-comments-container">
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
    </div><!-- gear-comments-container -->
  
    <?php if(isset($content['dl_shows_list'])) : ?>
    <div id="gear-top-downloads-container" class="node-content-container node-column2-container teaser-list">
      <?php print render($content['dl_shows_list']);?>
    </div><!-- gear-top-downloads-container -->
    <?php endif; ?>
  </div><!-- gear-bottom-container -->
  
</div> <!-- /gear-node -->
