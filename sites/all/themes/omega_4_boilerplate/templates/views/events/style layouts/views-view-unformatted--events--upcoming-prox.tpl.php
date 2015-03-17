<?php
/**
 * @file views-view-unformatted--events--upcoming-events-block.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

<?php print l(t('All Tour Dates'), 'tour', array('attributes'=>array('title'=>t('See all tour dates'), 
      'class'=>array('teaser-block-more-link')), 'html'=>true));?>