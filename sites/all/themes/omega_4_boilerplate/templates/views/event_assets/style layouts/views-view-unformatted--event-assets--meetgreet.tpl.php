<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php
shuffle($rows);
?>

<ul class="teaser-grid">
<?php foreach($rows as $id => $row) :?>
  <li class="photo-row field-meetgreet-photos">
      <?php print $row;?>
  </li>    
<?php endforeach; ?>
</ul>