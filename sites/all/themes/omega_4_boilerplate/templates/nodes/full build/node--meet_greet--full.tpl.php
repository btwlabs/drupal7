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
<?php 
$access = get_meet_greet_user_access(null, $node);
?>
<div id="meet-greet-node-<?php print $node->nid; ?>" class="<?php print $classes; ?>meet-greet-node-full node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  
  <?php if(!empty($content['body'])) : ?>
    <div id="meet-greet-body-container" class="body">
      <?php print render($content['body']); ?>
    </div>
  <?php endif; ?>
  <?php if($access['result']) : ?>
    <div id="meet-greet-request-form-block" class="form">
      <?php print render($meetgreet_form_block); ?>
    </div>
  <?php elseif($access['reason'] == 'role') : ?>
    <div id="meet-greet-login-form" class="form">
      <?php print theme('meet_greet_login_block'); ?>
    </div>
  <?php elseif($access['reason'] == 'over') : ?>
    <div id="meet-greet-over-message" class="message">
      <?php print theme('meet_greet_over_message'); ?>
    </div>
  <?php elseif ($access['reason'] == 'expired') : ?>
    <div id="meet-greet-expred-message" class="message">
      <?php print theme('meet_greet_expired_message'); ?>
    </div>
  <?php else : ?>
    <div id="meet-greet-submitted-message" class="message">
      <?php print theme('meet_greet_submitted_message'); ?>
    </div>
  <?php endif; ?>
  

</div> <!-- /.node -->
