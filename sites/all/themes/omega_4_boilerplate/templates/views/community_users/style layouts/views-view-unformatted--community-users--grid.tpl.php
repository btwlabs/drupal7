<?php
/**
 * @file views-view-unformatted--community-users--grid-page.tpl.php
 * row style layout for community users grid page
 * adds a vpop link around row.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php $uid = $view->result[$id]->profile_uid; ?>
  <div class="<?php print $classes_array[$id]; ?> omega-narrow-up">
    <?php print l($row, 'user/' . $uid, array('html'=>true, 'attributes'=>array('class'=>array('vpop-click-ajax', 'ajax'), 'title'=>t('Click to see details')), 
      'query'=>array('vid'=>'community_users', 'did'=>'popup', 'uid'=>$uid, 'position'=>'top', 'throbber_pos'=>'targ',
      'dom'=>'none'))); ?>
  </div>
  <div class="<?php print $classes_array[$id]; ?> omega-mobile-only">
    <?php print l($row, 'user/' . $uid, array('html' => true)); ?>
  </div>
<?php endforeach; ?>