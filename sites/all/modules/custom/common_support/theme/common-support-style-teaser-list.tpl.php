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
  <ul class="common-support-list">
    <?php foreach ($rows as $id => $row): ?>
      <li class="list-row<?php if(!empty($classes_array[$id])) : print ' ' . $classes_array[$id]; endif; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
</div>