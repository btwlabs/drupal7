<?php

/**
 * @file node--event--legacy--full.tpl.php
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

<div id="legacy-node-<?php print $node->nid; ?>" class="legacy-node-full <?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>

<?php if(isset($content['field_event_legacy_on']['#items'])) :?><div id="event-legacy-on-switch" class="inline-edit"><?php print render($content['field_event_legacy_on']); ?></div><?php endif;?>

<?php if(isset($content['legacy_pager'])) :?>
  <div id="legacy-header-row-container" class="node-header-row-container node-pager-container">
    <?php print render($content['legacy_pager']); ?>
  </div><!-- node pager container -->
<?php endif; ?>



<div id="legacy-middle-row-container" class="node-middle-row-container clearfix">
  <!-- begin Column 1 -->
  <div id="legacy-col1" class="node-column-container node-column1-container">

    <!-- Date and Location container -->
    <div id="legacy-date-and-location-container" class="node-row-container date-and-location-container clearfix">
      <?php if(isset($content['eventdateicon'])) : ?>
        <?php print render($content['eventdateicon']); ?>
      <?php endif; ?>
      <div class="event-location-container">
        <?php if(isset($content['location_address'])) : ?>
          <div class="event-location-location"><?php print render($content['location_address']); ?></div>
        <?php endif; ?>

        <?php if(isset($content['location_title'])) :?>
          <div class="event-location-title"><?php print render($content['location_title']); ?></div>
        <?php endif; ?>
      </div>
    </div><!-- end date and location container -->



    <!-- concert photo -->
    <div id="legacy-concert-photo" class="node-row-container legacy-concert-photo">
      <?php if(isset($content['concert_photo'])) : print render($content['concert_photo']); endif;?>
    </div>

    <!-- links -->
    <div class="legacy-links-container node-row-container clearfix">
      <div id="legacy-buy-show-link-container" class="buy-link-container">
        <?php if(isset($content['buy_link'])) : ?>
          <div class="buy-link legacy-links-item buy-show-link button"><?php print render($content['buy_link']); ?></div>
        <?php endif; ?>

        <?php if(isset($content['i_was_there'])) :?>
          <div id="i-was-there-link" class="legacy-links-item button"><?php print render($content['i_was_there']); ?></div>
        <?php endif; ?>

        <?php if(isset($content['comments_count_link'])) :?>
          <div id="legacy-comments-count-link" class="legacy-links-item button"><?php print render($content['comments_count_link']); ?></div>
        <?php endif; ?>
      </div><!-- legacy-buy-show-link-container -->
    </div><!-- legacy-links-container -->


    <!-- purchase options -->
    <?php if (isset($content['field_legacy_product_reference'])): ?>
      <div class="named-anchor-wrapper">
        <a class="named-anchor" name="purchase-options"></a>
        <a class="named-anchor" name="Buy"></a>
      </div>
      <div id="legacy-purchase-options-container" class="node-row-container legacy-purchase-options-container clearfix">
        <div id="legacy-purchase-options" class="node-column-container <?php print render($content['purchase_options_class']); ?>">
          <h2 class="block-title">Purchase Options</h2>
          <?php //dsm($fields); ?>
          <?php print render($content['field_legacy_product_reference']);?>
          <div class="add-to-cart-details">
            <?php print render($content['product:field_image']);?>
            <?php print render($content['product:field_images_1']);?>
            <?php print render($content['product:title']);?>
            <?php print render($content['product:field_description']);?>
          </div>
        </div><!-- legacy-purchase-options -->
      </div><!-- legacy-purchase-options-container -->
    <?php endif; ?>


    <!-- shownotes -->
    <div id="legacy-shownotes-container" class="node-row-container legacy-shownotes-container clearfix">
      <?php if(!empty($content['field_textarea'])) :?>
        <div class="legacy-shownotes-item"><?php print render($content['field_textarea']); ?>
          <!-- performers -->
          <?php if(!empty($content['vip_profiles_view'])) :?>
            <div class="performer-container"><h2 class="block-title">Appearing</h2><?php print render($content['vip_profiles_view']); ?></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div> <!-- end shownotes -->


    <!-- playlist -->
    <div id="legacy-playlist-container" class="node-row-container legacy-playlist-container clearfix">
      <div class="named-anchor-wrapper">
        <a name="Audio"></a>
      </div>
      <?php if((isset($content['track_list'])) || (isset($content['song_list']))) : ?>
        <div class="playlist-container">
          <?php if(isset($content['track_list'])) : ?>
            <div class="sm_player">
            	<h2 class="block-title">Audio</h2>
              <?php print render($content['sm_player']);?>
            </div>
            <div id="legacy-playlist-container" class="track-list-container sm-player-player-playlist">
              <?php print render($content['track_list']); ?>
            </div>
          <?php endif; ?>
          <?php if(isset($content['song_list'])) : ?>
            <div class="song-list-container">
              <?php print render($content['song_list']); ?>
            </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div><!-- end playlist -->


    <!-- related products -->
    <?php if(isset($content['related_products'])) :?>
      <div id="legacy-related-products-container" class="node-row-container related-products-container clearfix">
        <?php print render($content['related_products']); ?>
      </div><!-- legacy-related-products-container -->
    <?php endif; ?>

  </div><!-- end legacy col1 -->



  <!-- Column 2 -->
  <div id="legacy-col2" class="node-column-container node-column2-container">

    <!-- official photos -->
    <?php if(isset($content['official_photos_videos'])) :?>
      <div class="named-anchor-wrapper">
        <a name="gallery"></a>
        <a name="Photos"></a>
      </div>
      <div id="legacy-official-photos-container" class="node-row-container official-photos-container media-gallery-container clearfix">
        <?php print render($content['official_photos_videos']); ?>
      </div><!-- legacy-official-photos-container -->
    <?php endif; ?>


    <!-- meet & greet photos -->
    <?php if(isset($content['meetgreet_photos'])) :?>
      <div class="named-anchor-wrapper">
        <a name="Meet-Greet"></a>
      </div>
      <div id="legacy-meetgreet-photos-container" class="node-row-container meetgreet-photos-container media-gallery-container omega-narrow-up clearfix">
        <?php print render($content['meetgreet_photos']); ?>
      </div><!-- legacy-middle-row5-container -->
    <?php endif; ?>



    <div id="legacy-community-items-container" class="node-row-container community-items-container clearfix">
      <div class="named-anchor-wrapper">
        <a name="comments"></a>
        <a name="Posts"></a>
      </div>

      <!-- share links -->
      <?php if(isset($content['share_links_horizontal'])) :?>
        <div class="share-links-container omega-narrow-up"><?php print render($content['share_links_horizontal']); ?></div>
      <?php endif; ?>


      <!-- community posts -->
      <div id="legacy-community-container" class="node-row-container community-container clearfix">
        <?php if(isset($content['community_login_block'])) :?>
          <div class="community-item community-login-block">
            <?php print render($content['community_login_block']); ?>
          </div><!-- anon user login block -->
        <?php endif;?>

        <div class="community-item community-feeds">
          <?php if(isset($content['post_form'])): ?>
            <div class="community-item community-post-form-container">
              <?php print render($content['post_form']); ?>
            </div><!-- post form -->
          <?php endif; ?>
          <?php if(isset($content['node_posts'])): ?>
            <div id="node-posts-container">
              <!-- <h2 class="block-title">From the Community</h2> -->
              <?php print render($content['node_posts']); ?>
            </div>
          <?php endif; ?>
        </div>

      </div><!-- legacy-community-container -->


      <!-- I was there block -->
      <div id="legacy-community-sidebar-container" class="node-row-container community-sidebar-container clearfix">
        <?php if(isset($content['group_members'])) :?>
          <div class="community-item group-members">
            <?php print render($content['group_members']); ?>
          </div>
        <?php endif; ?>

      </div>


    </div><!-- community items container -->
  </div><!-- legacy col2 -->
</div><!-- legacy middle row container -->
</div> <!-- /legacy-node -->
