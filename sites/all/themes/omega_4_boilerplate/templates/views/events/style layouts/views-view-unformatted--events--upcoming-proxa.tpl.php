<?php
/**
 * @file views-view-unformatted--events--upcoming--proxa.tpl.php
 * style layout for the upcoming events with proximity view on the tour page
 *
 * @ingroup views_templates
 */
?>
<div class="views-popup-container">
  <div class="upcoming-prox views-slidein">
  <?php foreach ($rows as $id => $row): ?>
    <div class="<?php print $classes_array[$id]; ?>">
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
  </div>
</div>