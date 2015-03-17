<?php
/**
 * @file views-view-unformatted--community-post-comments.tpl.php
 * row style layout for a community comment row
 * Need to remove any views-row type classes and use our own
 * becuase views more pager hyjacks them and doesn't work 
 * with views within views unless we do.
 * 
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="community-post-comment-container community-post-comment-<?php print ($id+1); ?> community-post-<?php print $view->result[0]->comment_nid; ?>-comment-<?php print ($id+1); ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>