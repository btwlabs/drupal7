<?php
/**
 * @file views-view-list--discography--page.tpl.php
 * Need to add the popup list onto the end of each album row
 * for styling reasons.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php 
//load page resizer js
drupal_add_js(drupal_get_path('theme', 'omega_boilerplate') . '/js/pageResizer.js');
//set the session path
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?> clearfix album-<?php print $view->result[$id]->nid;?>"><?php print $row; ?></li>
      <?php print views_embed_view('discography', 'popup', $view->result[$id]->nid, $view->result[$id]->nid); ?>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>