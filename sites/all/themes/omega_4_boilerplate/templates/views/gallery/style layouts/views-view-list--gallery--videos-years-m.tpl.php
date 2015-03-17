<?php
/**
 * @file views-view-list--gallery--years.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php
$date = 0;
?>
<ul class="filter-links-container">
    <?php $active = (arg(1) == null) ? 'active' : '';?>
	<li class="filter-link-item <?php print $active; ?>"><?php print l(t('All'), 
	  variable_get('fantorrent_videos_path', 'gallery/videos'), array('html' => true, 
        	'attributes' => array('class' => array('filter-link')))); ?></li>
    <?php foreach ($rows as $id => $row): ?>
      <?php if(!(date('Y',$view->result[$id]->node_created) == $date)) : ?>
        <?php 
          $date = date('Y', $view->result[$id]->node_created);
          $arg = arg(1);
          $active = (arg(1) == $date) ? 'active' : '';
        ?>	
        <li class="filter-link-item <?php print $active; ?>"><?php print l($date, variable_get('fantorrent_videos_path', 'gallery/videos') . '-m/' . $date, array('html' => true, 
        	'attributes' => array('class' => array('filter-link')))); ?></li>
      <?php endif; ?>
    <?php endforeach; ?>
</ul>