<?php

/**
 * @file node.tpl.php
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
<?php //dsm($content, 'content');?>
<?php if(isset($content['upcoming'])) : ?>
  <div id="event-node-sidebar" class="node-sidebar omega-narrow-up">
    <?php print render($content['upcoming']); ?>
  </div><!-- event-node-sidebar -->
<?php endif; ?>
<div id="event-node-<?php print $node->nid; ?>" class="event-node-full <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  
  <?php
    //unfortunately, setting #access = false on field builds only prevents
    //the remainder of the build. So we check for #items in those cases.
  ?>
  <?php if(isset($content['field_event_legacy_on']['#items']) && (user_access('switch event to legacy'))) :?><div class="inline-admin-link event-legacy-on-switch"><?php print render($content['field_event_legacy_on']); ?></div><?php endif;?>

  <h3><?php print render($content['location_address']) ?></h3>
  <h5><?php print (date('M d, Y', strtotime($content['field_date_hour']['#items'][0]['value']))); ?></h5>
  <h6><?php print render($content['location_title']); ?></h6>
  
  <?php if( (isset($content['field_links_2']['#items']) && ($content['field_links_2']['#access'] === true)) ||
        (isset($content['field_links_1']['#items']) && ($content['field_links_1']['#access'] === true)) ||
        (isset($content['field_links_3']['#items']) && ($content['field_links_3']['#access'] === true))) : ?>
    <div id="event-purchase-link-container" class="event-item links event-purchase-link-container purchase-link-container">
      <ul>
        <?php if(isset($content['field_links_2']['#items']) && ($content['field_links_2']['#access'] === true)) : ?><li class="button sale-link"><?php print render ($content['field_links_2']); ?></li><?php endif; ?>
        <?php if(isset($content['field_links_1']['#items']) && ($content['field_links_1']['#access'] === true)) : ?><li class="button sale-link"><?php print render($content['field_links_1']); ?></li><?php endif; ?>
        <?php if(isset($content['field_links_3']['#items']) && ($content['field_links_3']['#access'] === true)) : ?><li class="button meet-greet-link"><?php print render($content['field_links_3']); ?></li><?php endif; ?>
      </ul>
    </div>
  <?php endif; ?>
  
  <div id="event-middle-row1-container" class="node-row-container clearfix node-row1-container">
    <fieldset class="event-item">
      <legend>Event Details</legend>
        <div id="event-time" class="time"><?php print render($content['event_date_time']); ?></div>
        <div id="event-title" class="title"><?php print render($title); ?></div>
        <div id="event-body" class="body"><?php print render($content['body']); ?></div>
        <div id="event-location-title" class="title"><?php print render($content['location_title']); ?></div>
        <div id="event-location-address" class="address"><?php print render($content['full_location_address']); ?></div>
        <div id="event-location-venue-link" class="link"><?php print render($content['location_venue_link']); ?></div>
        <div id="event-location-map-link" class="link"><?php print render($content['location_map_link']); ?></div>
    </fieldset>
  </div><!-- main event content -->
  <?php if(isset($content['related_products'])) : ?>
   <div id="event-middle-row2-container" class="node-row-container clearfix node-middle-row2-container omega-narrow-up">
    <fieldset class="event-item">
      <legend>Tour Merchandise</legend>
         <?php print render($content['related_products']); ?>   
    </fieldset>   
 </div>
  <?php endif; ?>
  
  <div id="event-middle-row2-container" class="node-row-container clearfix node-middle-row2-container omega-narrow-up">
    <fieldset class="event-item">
      <legend>Share</legend>
      <?php print render($content['share_links_horizontal']); ?>
    </fieldset>
  </div><!-- sharing links -->
  <div id="event-middle-row3-container" class="node-row-container clearfix node-middle-row3-container omega-narrow-up">
    <fieldset class="event-item">
      <legend>I'm Attending</legend>
        <?php if (isset ($content['fb_event_attending'])): ?>
          <div class="facebook-attending-container">
          	  <?php print render($content['fb_event_title']); ?>
          	  <?php print render($content['fb_event_attending']); ?>
          </div><!-- facebook-attending-container -->
        <?php endif; ?>   
        <div class="clear"></div>
      	<?php if (isset($content['fb_event_wall'])): ?>
    	  <div id="facebook-event-wall-container">
    	    <span id="facebook-event-wall-icon"></span>
    	    <h2 class="title">From the Event Wall</h2>
        	<?php print render($content['fb_event_wall']); ?> 
          </div>
        <?php endif; ?>
    	<?php //endif; ?>
    </fieldset>
    <fieldset class="event-item">
      <legend>From the Community</legend>
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
    </fieldset>
  </div><!-- event-middle-row3-container -->
  <div id="event-bottom-row1-container" class="links node-bottom-row1-container clearfix omega-mobile-only"> 	
    <?php print render($content['back']); ?>
  </div>
</div> <!-- /event-node -->
