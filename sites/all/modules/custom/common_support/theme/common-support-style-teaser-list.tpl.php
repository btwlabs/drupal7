<?php

/**
 * @file
 * Output views data in a 'teaser list'.
 */
?>
<div class="list">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <ul class="common-support-teaser-list">
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?> list-row"><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
</div>