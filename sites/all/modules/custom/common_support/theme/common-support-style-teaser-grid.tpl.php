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
  <ul class="common-support-grid">
    <?php foreach ($rows as $id => $row): ?>
      <li class="grid-row<?php if(!empty($classes_array)) : print ' ' . $classes_array[$id]; endif; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
</div>