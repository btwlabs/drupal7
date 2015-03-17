<?php
/**
 * @file views-view-unformatted--tfp-custom-nodes--fp-meetgreet.tpl.php
 * randomly selects from one of 10 possible rows
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $row = rand(0, count($rows)-1); ?>
<div class="<?php print $classes_array[$row]; ?>">
  <?php print $rows[$row]; ?>
</div>