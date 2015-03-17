<?php
/**
 * @file views-view-unformatted--store-landing--dl-shows.tpl.php
 * Adds a title into the top downloaded shows view
 *
 * @ingroup views_templates
 */
?><?php //dsm($view);?>
  <h3><?php print $view->get_title(); ?></h3>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>