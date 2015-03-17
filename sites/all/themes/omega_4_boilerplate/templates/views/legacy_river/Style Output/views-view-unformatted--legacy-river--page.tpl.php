<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <fieldset class="collapsible">
  <legend><span class="fieldset-legend"><?php print $title; ?></span></legend>
<?php endif; ?>
<div class="fieldset-wrapper">
  <?php foreach ($rows as $id => $row): ?>
    <div class="<?php print $classes_array[$id]; ?>">
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>
</fieldset>