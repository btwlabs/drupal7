<?php

/**
 * @file
 * Output views data in a 'teaser grid'.
 */
?>
<div class="grid">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <ul class="common-support-teaser-grid">
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?> grid-row"><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
</div>