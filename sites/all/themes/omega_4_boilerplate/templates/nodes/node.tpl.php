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

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>
  <div class="meta">
    <?php if (FALSE): ?>
      <div class="terms terms-inline"><?php print $terms ?></div>
    <?php endif;?>
  </div>

  <div class="node-content-container">
    <?php
    // We hide the comments, tags and links now so that we can render them later.
    hide($content['user_contact_links']);
    hide($content['author_image']);
    hide($content['author_display_name']);
    hide($content['share_links_horizontal']);
    hide($content['share_links_vertical']);
    hide($content['share_links_nocount']);
    hide($content['like_count']);
    hide($content['posted_date_ago']);
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['node_posts']);
    hide($content['post_form']);
    hide($content['i_was_there']);
    hide($content['print_links']);
    hide($content['edit_link']);
    hide($content['delete_link']);
    ?>
    <?php print render($content); ?>
  </div> <!-- /.content -->

  <?php if (!empty($content['field_tags'])): ?>
    <footer class="node-bottom-row-container omega-narrow-up">
      <?php print render($content['field_tags']); ?>
    </footer>
  <?php endif; ?>

  <div class="omega-narrow-up node-comments-container">
    <?php print render($content['comments']); ?>
  </div>

</div> <!-- /.node -->
