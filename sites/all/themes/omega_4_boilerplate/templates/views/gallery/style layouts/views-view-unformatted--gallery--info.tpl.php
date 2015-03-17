<?php
/**
 * @file views-view-unformatted--gallery--info.tpl.php
 * Need to overwrite the classes so that ajax view pagers
 * don't grab onto this sub-view
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="gallery-info-view-row">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>