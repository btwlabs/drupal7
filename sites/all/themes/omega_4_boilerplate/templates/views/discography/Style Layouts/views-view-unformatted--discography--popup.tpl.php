<?php
/**
 * @file views-view-unformatted--discography--popup.tpl.php
 * Style layout for fade style popup songs on the discography page.
 * We need to add a selector for each popup so that the vpop-fade links
 * know what popup to show. Must be based on song nid since it is
 * complicated and we can't order by row counter.
 *
 * @ingroup views_templates
 */
?>
<?php 
//grab the player since preprocess won't work for field views    
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="song-popup-nid-<?php print $view->result[$id]->nid;?> <?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>