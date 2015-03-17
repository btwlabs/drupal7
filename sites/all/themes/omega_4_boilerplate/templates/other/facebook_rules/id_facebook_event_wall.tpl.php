<div class="fb-wallpost">
  <a href="http://facebook.com/profile.php?id=<?php print $post->from->id; ?>" class="fb-posted-by">
    <img src="http://graph.facebook.com/<?php print $post->from->id; ?>/picture" /><?php print $post->from->name; ?>
  </a> 
  said: <p class="fb-wallpost-message"><?php print $post->message; ?></p>
</div>
