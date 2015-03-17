<?php
/**
 * @file views-view-unformatted--thedoors-home--updates.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php //randomize the rows
  shuffle($rows);
?>
<ul class="<?php print $jcarousel_classes; ?>">
  <?php foreach ($rows as $id => $row): ?>
    <li class="<?php print $row_classes[$id]; ?>"><?php print $row; ?></li>
  <?php endforeach; ?>
</ul>