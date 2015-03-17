<?php
/**
 * @file views-view-list--store-landing--related.tpl.php
 * list of rows for the product node related items display
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php //don't show the node whose page we're on in the list of related items?>
      <?php  if($view->result[$id]->field_albums_ref_node_nid == $view->result[$id]->nid) : continue; endif;?>
      <li class="<?php print $classes_array[$id]; ?> <?php print ($id==0) ? 'product-featured': '';?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>