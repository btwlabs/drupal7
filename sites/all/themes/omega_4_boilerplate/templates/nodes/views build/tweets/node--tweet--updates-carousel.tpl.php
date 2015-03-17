<?php
/**
 * @file node--tweet--thedoors-updates.tpl.php
 * Custom node template for theming content in the 'updates'
 * views display block.
 * 
 */
?>
<div class="updates-carousel updates-carousel-tweet updates-carousel-tweet-id-<?php print $node->nid; ?>">
<span></span>

<div class="tweet-author-container">
  <span class="tweet-author-name"><?php print render($content['field_tweet_author_name']); ?></span>
  <span class="tweet-author-id"><span class="tweet-prefix">@</span><?php print render($content['field_tweet_author']); ?></span>
</div>

<div class="tweet-body-container">
  <span class="tweet-body-text"><?php print render($content['body']); ?></span>
  <span class="twee-body-date"><?php print render($content['field_date_minute']); ?></span>
</div>
</div>