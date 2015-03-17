<?php
/**
 * @file views-view-list--gear-gallery--gear-types-block-m.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php
$type = 0;
?>
<ul class="filter-links-container">
    <?php $active = (arg(1) == null) ? 'active' : '';?>
	<li class="filter-link-item <?php print $active; ?>"><?php print l(t('All'), 
	  variable_get('fantorrent_gear_gallery_path', 'gear'), array('html' => true, 
        	'attributes' => array('class' => array('filter-link')))); ?></li>
    <?php foreach ($rows as $id => $row): ?>
      <?php //if(!($view->result[$id]->field_data_field_gear_type_field_gear_type_value == $type)) : ?>
        <?php
          $type_tid = $view->result[$id]->field_field_gear_types[0]['raw']['tid'];
	        $type_label = $view->result[$id]->field_field_gear_types[0]['rendered']['#title'];
          $arg = arg(1);
          $active = (arg(1) == $type) ? 'active' : '';
        ?>	
        <li class="filter-link-item <?php print $active; ?>"><?php print l($type_label, variable_get('fantorrent_gear_gallery_path', 'gear') .'/'. $type_label, array('html' => true, 
        	'attributes' => array('class' => array('filter-link')))); ?></li>
      <?php //endif; ?>
    <?php endforeach; ?>
</ul>