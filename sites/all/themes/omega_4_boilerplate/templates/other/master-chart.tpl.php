<?php
/**
 * @file master-chart.tpl.php
 * template for the master analytics chart layout
 * 
 * @see template_preprocess_master_chart
 */
?>
<div id="master-chart">
  <div id="master-chart-master-detail">
    <h3>Actions and Results Master Graph</h3>
  </div>
  <div id="master-chart-pies">
    <h3>Browser Interface Distribution</h3>
    <div id="master-chart-browser-stats"></div>
    <h3>Social Media Distribution</h3>
    <div id="master-chart-nbs-social-comparison"></div>
  </div>
  <div class="clearfix"></div>
<!--   Kill "people" (page views) line until data is for real -->
<!--
    <h3>People connecting with you now</h3>
  <div id="master-chart-page-views"></div>
  <div class="more-link"><?php print l(t('View All Analytics'), 'admin'); ?></div> 
-->
</div>