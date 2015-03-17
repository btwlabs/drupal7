<?php

/**
 * @file user-profile.tpl.php
 * Theme implementation to present all user profile data, 
 * including from profile2 main profile and other junk.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 * 
 * @see fantorrent_community_support_preprocess_user_profile()
 * 
 */
?>
<div id="user-profile-uid-<?php print $user->uid; ?>" class="user-profile omega-mobile-only" <?php print $attributes; ?>>
 
  <div id="profile-header-row" class="header-row button">
    <?php print $dashboard_link; ?>
    <?php print $profile_edit_link; ?>
    <?php if (isset($masquerade_link)) : print $masquerade_link; endif; ?>
  </div>

  <div id="profile-column-1" class="profile-column">
    
    <div id="profile-info-container" class="profile-row">
      <div id="profile-user-fullname" class="user-fullname">
        <?php print render($profile_array['field_text_4']); ?>
      </div><!-- profile-user-fullname -->

      <div id="profile-user-location" class="address">
      <?php if(isset($location)): ?>
        <?php print $location; ?>
      <?php endif; ?>
      </div><!-- profile-user-location -->
      
      <div id="profile-user-member-since" class="date">
        <?php print $member_since; ?>
      </div><!-- profile-user-member-since -->
      
      <?php if(isset($fan_club_start)): ?>
       <div id="profile-user-fan-club" class="date">
         Fan Club Member from <?php print $fan_club_start; ?> - <?php print $fan_club_end; ?>
       </div> <!-- profile-user-fan-club -->
      <?php endif; ?>
    
      <?php if(isset($profile_array['field_user_qr_code'])) :?>
        <div id="profile-user-qrcode" class="qrcode">
          <?php print render($profile_array['field_user_qr_code']); ?>
        </div><!-- profile-user-qrcode -->
      <?php endif; ?>

    </div><!-- profile-info-container -->
    
    <?php if(isset($user_contact_links)) : ?>
      <div id="profile-contact-links-container" class="profile-row">
        <?php print $user_contact_links; ?>
      </div><!-- profile-contact-links-container -->
    <?php endif; ?>
        
  	<div id="profile-image-and-completeness-container" class="profile-row">
  	  <div id="profile-image" class="image">
  	    <?php print render($profile_array['field_images_1']); ?>
  	  </div><!-- profile-image -->
  	  
  	  <?php if(isset($profile_progress)) : ?>
  	    <div id="profile-progress" class="progress">
  	      <?php print render($profile_progress); ?>
  	    </div><!-- profile-progress -->
  	  <?php endif; ?>
  	</div><!-- profile-image-and-completeness -->
  	
  	<?php if (isset($profile_array['field_textarea'])) : ?>
      <div id="profile-about-container" class="profile-row">
        <?php print render($profile_array['field_textarea']); ?>
      </div><!-- profile-about-container -->  	
    <?php endif; ?>
  	
    <?php if(isset($questionnaire)) : ?>
      <div id="profile-questionnaire-container" class="profile-row">
        <?php print $questionnaire; ?>
      </div><!-- profile-questionnaire-container -->
    <?php endif; ?>
    
    <div id="profile-user-stats-container" class="profile-row">
      <div id="profile-user-stats" class="stats-list">
        <h2 class="title">Statistics</h2>
      	<?php if(isset($rank)) : ?>
        	<div id="rank">
        	  <span class="label">Rank:</span><span class="value"><?php print $rank; ?></span>
        	</div><!-- rank -->
      	<?php endif; ?>
        <div id="num-posts">
          <span class="label">Posts:</span><span class="value"><?php print $num_posts; ?></span>
        </div><!-- num-posts -->
        <div id="num-comments">
          <span class="label">Comments:</span><span class="value"><?php print $num_comments; ?></span>
        </div><!-- num-comments -->
        <div id="followers">
          <span class="label">Followers:</span><span class="value"><?php print $num_followers; ?></span>
        </div><!-- followers -->
        <?php if(isset($num_points)) : ?>
          <div id="points">
            <span class="label">Points:</span><span class="value"><?php print $num_points; ?></span>
          </div><!-- points -->
        <?php endif; ?>
      </div><!-- profile-user-stats -->
      
      <div id="profile-user-badges" class="badges">
        <?php print render($profile_array['field_user_badges']); ?>
      </div><!-- profile-user-badges -->
    </div><!-- profile-user-stats-container -->
    
    <?php if(isset($user_groups)) : ?>
    <div id="profile-user-groups-container" class="profile-row">
      <?php print $user_groups; ?>
    </div><!-- profile-user-groups-container -->
    <?php endif; ?>
    <?php if(isset($user_followers)) : ?>
      <div id="profile-user-followers-container" class="profile-row">
        <?php print $user_followers; ?>
      </div><!-- profile-user-followers-container -->
    <?php endif; ?>  	
  	
  	<?php if (isset($user_posts)) : ?>
      <div id="profile-user-posts" class="community-feed">
        <?php print render($user_posts); ?>
      </div><!-- profile-user-posts -->
  	<?php endif; ?>
  </div><!-- profile-column-1 -->
  
</div><!-- user-profile-mobile -->


<?php 
/**
 * narrow up version...
 */
?>

<div id="user-profile-uid-<?php print $user->uid; ?>" class="user-profile omega-narrow-up" <?php print $attributes; ?>>
  <div id="profile-admin-links" class="button">
    <?php print $profile_edit_link; ?>
    <?php if (isset($masquerade_link)) : print $masquerade_link; endif; ?>
  </div>
  <div id="profile-header-row" class="header-row button">
    <?php print $dashboard_link; ?>
  </div>
  
  <div id="profile-column-1" class="profile-column">
	  <div id="profile-image-and-completeness-container" class="profile-row">
			<div id="profile-image" class="image">
			<?php print render($profile_array['field_images_1']); ?>
			</div><!-- profile-image -->
		
			<?php if(isset($profile_progress)) : ?>
				<div id="profile-progress" class="progress">
				<?php print render($profile_progress); ?>
				</div><!-- profile-progress -->
			<?php endif; ?>
		</div><!-- profile-image-and-completeness -->
  	
  	
  	<div id="profile-user-stats-container" class="profile-row">
      <div id="profile-user-stats" class="stats-list">
        <h2 class="title">Statistics</h2>
      	<?php if(isset($rank)) : ?>
        	<div id="rank">
        	  <span class="label">Rank:</span><span class="value"><?php print $rank; ?></span>
        	</div><!-- rank -->
      	<?php endif; ?>
        <div id="num-posts">
          <span class="label">Posts:</span><span class="value"><?php print $num_posts; ?></span>
        </div><!-- num-posts -->
        <div id="num-comments">
          <span class="label">Comments:</span><span class="value"><?php print $num_comments; ?></span>
        </div><!-- num-comments -->
        <div id="followers">
          <span class="label">Followers:</span><span class="value"><?php print $num_followers; ?></span>
        </div><!-- followers -->
        <?php if(isset($num_points)) : ?>
          <div id="points">
            <span class="label">Points:</span><span class="value"><?php print $num_points; ?></span>
          </div><!-- points -->
        <?php endif; ?>
      </div><!-- profile-user-stats -->
   </div><!-- profile-user-stats-container -->
      
     <div id="profile-user-badges" class="badges">
        <?php print render($profile_array['field_user_badges']); ?>
      </div><!-- profile-user-badges -->
      
  	<?php if(isset($questionnaire)) : ?>
      <div id="profile-questionnaire-container" class="profile-row">
        <?php print $questionnaire; ?>
      </div><!-- profile-questionnaire-container -->
    <?php endif; ?>
      
    <?php if(isset($user_followers)) : ?>
      <div id="profile-user-followers-container" class="profile-row">
        <?php print $user_followers; ?>
      </div><!-- profile-user-followers-container -->
    <?php endif; ?>
    
    <?php if(isset($user_groups)) : ?>
    <div id="profile-user-groups-container" class="profile-row">
      <?php print $user_groups; ?>
    </div><!-- profile-user-groups-container -->
    <?php endif; ?>
  	
  </div><!-- profile-column-1 -->
  
  <div id="profile-column-2" class="profile-column">
	  <div id="profile-info-container" class="profile-row">
	      <div id="profile-user-fullname" class="user-fullname">
	        <?php print render($profile_array['field_text_4']); ?>
	      </div><!-- profile-user-fullname -->
          <?php if(isset($location)): ?>
    	      <div id="profile-user-location" class="address">
    	        <?php print $location; ?>
    	      </div><!-- profile-user-location -->
	      <?php endif; ?>
      
	      <div id="profile-user-member-since" class="date">
	        <?php print $member_since; ?>
	      </div><!-- profile-user-member-since -->
    
	     <?php if(isset($fan_club_start)): ?>
	       <div id="profile-user-fan-club" class="date">
	         Fan Club Member from <?php print $fan_club_start; ?> - <?php print $fan_club_end; ?>
	       </div> <!-- profile-user-fan-club -->
	     <?php endif; ?>
    </div><!-- profile-info-container -->
    
    <?php if(isset($user_contact_links)) : ?>
      <div id="profile-contact-links-container" class="profile-row">
        <?php print $user_contact_links; ?>
      </div><!-- profile-contact-links-container -->
    <?php endif; ?>
    
  	<?php if (isset($profile_array['field_textarea'])) : ?>
      <div id="profile-about-container" class="profile-row">
        <?php print render($profile_array['field_textarea']); ?>
      </div><!-- profile-about-container -->  	
    <?php endif; ?>
    
    <?php if (isset($user_posts)) : ?>
    	<div id="profile-user-posts" class="community-feed profile-row">
    	  <?php print render($user_posts); ?>
    	</div><!-- profile-user-posts -->
  	<?php endif; ?>
    
  </div><!-- profile-column-2 -->
  
</div><!-- user-profile -->
