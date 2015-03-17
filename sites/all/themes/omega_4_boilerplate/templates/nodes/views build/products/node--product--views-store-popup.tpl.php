<?php

/**
 * @file node--product--views-store-popup.tpl.php
 *
 * Theme implementation to display a product node as a popup in the store page.
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
  <?php //if(module_exists('devel')) {dsm($content['field_product_status']['#items'][0]['taxonomy_term']);}?>

<div id="product-store-popup-node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block"<?php print $attributes; ?>>

  <?php if(isset($content['field_images_1'])) : ?>
  	<div class="images"><?php print render($content['field_images_1']); ?></div>
  <?php endif; ?>
  
  <div class="title"><?php print $title; ?></div>
  
  <?php if(isset($content['product:commerce_price'])) : ?>
  	<div class="product-price"><?php print render($content['product:commerce_price']); ?></div>
  <?php endif; ?>
  
  <?php if(isset($content['body'])) : ?>
  	<div class="body"><?php print theme('show_hide', array('element' => render($content['body']), 'height' => 150)); ?></div>
  <?php endif; ?>
  
  <?php if(isset($content['field_product_reference'])) :  ?>
  	<div class="add-to-cart-form"><?php print render($content['field_product_reference']); ?></div>
  <?php endif; ?>
  
  <?php print render($content['share_links_horizontal']); ?>
  
  <?php //print render($content['comment_count']); ?>
  
  <?php print render($content['more_link']); ?>
  
  <span class="product-status-<?php print (isset($content['field_product_status'])) ? $content['field_product_status']['#items'][0]['taxonomy_term']->name : 'none'; ?>"></span>

</div> <!-- product-popup-node -->
