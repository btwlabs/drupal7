<?php

/**
 * @file node--event--views-events-popup.tpl.php
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

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>

  <?php 
    
  //calculate node url for share links
  $nodeurl = url(drupal_get_path_alias('node/' . $node->nid), array('absolute' => TRUE));
  
  //prepare other dates
  $event_date_time = 'Time: ' . format_date(strtotime($content['field_date_hour']['#items'][0]['value']), 'time');
  
  //pull in event location info
  if(!empty($content['field_location_ref'])){
    $event_location = node_load($content['field_location_ref']['#items'][0]['nid']);
    $event_location_array = node_view($event_location);
  }
  ?>
  <?php
    //unfortunately, setting #access = false on field builds only prevents
    //the remainder of the build. So we check for #items in those cases.
  ?>
  <?php if(isset($content['field_event_legacy_on']['#items'])) :?><div class="event-legacy-on-switch"><?php print render($content['field_event_legacy_on']); ?></div><?php endif;?>
  <h3><?php print render(check_plain($event_location->title)); ?></h3>
  <h5><?php print render($content['field_date_hour']); ?></h5>
  <h6><?php print render(check_plain($event_location->title)); ?></h6>
  <ul>

    <?php if(isset($content['field_links_2']['#items']) && ($content['field_links_2']['#access'] === true)) : ?><li><?php print render ($content['field_links_2']); ?></li><?php endif; ?>
    <?php if(isset($content['field_links_1']['#items']) && ($content['field_links_1']['#access'] === true)) : ?><li><?php print render($content['field_links_1']); ?></li><?php endif; ?>
    <li><?php if(!empty($content['field_links_3'])): print render($content['field_links_3']); endif; ?></li>
  </ul>

  <div class="node-content-container">
    <fieldset class="event-item">
      <legend>Event Details</legend>
        <div class="event-time"><?php print $event_date_time; ?></div>
        <div class="event-title"><?php print render($title); ?></div>
        <div class="event-body"><?php print render($content['body']); ?></div>
        <div class="event-location-title"><?php print render(check_plain($event_location->title)); ?></div>
        <div class="event-location-address"><?php print render($event_location_array['field_address']); ?></div>
        <div class="event-location-venue-link"><?php print render($event_location_array['field_links_1']); ?></div>
        <div class="event-location-map-link"><?php print render($event_location_array['field_links_2']); ?></div>
    </fieldset>
  </div><!-- main event content -->
  
  <div class="node-content-container">
    <fieldset class="event-item omega-narrow-up">
      <legend>Share</legend>
      <?php print theme('share_links', array('path'=>$nodeurl, 'nid'=>$node->nid)); ?>
    </fieldset>
  </div><!-- sharing links -->
  <div class="node-content-container">
    <fieldset class="event-item omega-narrow-up">
      <legend>I'm Attending</legend>
      <?php //if (isset ($content['fb_event_attending'])): ?>
        <div class="facebook-attending-container">  
          <div class="facebook-attending-item">
        	  <?php print render($content['fb_event_title']); ?>
        	  <?php print render($content['fb_event_attending']); ?>
          </div>
          
          <div class="clear"></div>
      	  <?php if (isset($content['fb_event_wall'])): ?>
    		<div class="facebook-wall">
        	  <h4>From the Wall</h4>
        		<?php print render($content['fb_event_wall']); ?> 
        	</div>
          <?php endif; ?>
      	</div>
    	<?php //endif; ?>
    </fieldset>
  </div><!-- fb events stuff -->
  
  <div class="node-content-container event-more-link"><?php print l(t('more>'), 'node/' . $node->nid, array('html'=>true)); ?></div>
  
</div> <!-- /.node -->
