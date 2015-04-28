<?php if ($view_mode == 'full') : ?>
  <?php
    // Get the url for the hero image
    $url = file_create_url($content['field_product_header_hero_image'][0]['#item']['uri']);
  ?>
   <div style="background:url(<?php print $url; ?>)">
      <ul class="teaser-grid">
        <li class="teaser-grid-row"><label>Edgenet</label><?php print render($content['field_product_header_logo']) ?></li>
        <li class="teaser-grid-row"><?php print render($content['field_product_header_description']); ?></li>
      </ul>
  </div>
<?php else : ?>
  <?php print render($content); ?>
<?php endif; ?>