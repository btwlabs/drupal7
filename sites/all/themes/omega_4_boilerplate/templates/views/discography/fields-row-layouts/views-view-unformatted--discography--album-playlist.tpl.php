<?php
/**
 * @file views-view-unformatted--front-page--album-playlist.tpl.php
 * Lays out the front page album player
 */
?>
<?php 
//load album
$album = node_view(node_load($view->result[0]->node_field_data_field_albums_ref_nid), 'teaser');
?>
<?php if(!empty($album['field_images_1']['#items'])) : ?>
  <div id="front-page-album-player-image" class="image reactive">
    <?php print render($album['field_images_1'][0]); ?>
  </div><!-- front-page-album-player-image -->
<?php endif; ?>

<div id="front-page-album-player-info">

  <div id="front-page-album-player-album-title" class="title">
    <?php print check_plain($album['#node']->title); ?>
  </div><!-- front-page-album-player-album-title -->
  
  <div id="front-page-album-player-sm-player" class="sm-player">
    <?php print render(_ft_embed_block('sm_player', 'sm_player_1')); ?>
  </div><!-- front-page-album-player-sm-player -->

  <div id="front-page-album-player-link" class="link">
    <?php //decide what the link text should be
      $link_text = (!empty($album['field_product_ref'])) ? t('buy now') : t('more info');
    ?>
    <?php print l($link_text, 'node/' . $album['#node']->nid); ?>
  </div><!-- front-page-album-player-view-link -->
  
  <div id="front-page-album-player-playlist" class="sm-player-player-playlist">
    <?php foreach ($rows as $id => $row): ?>
      <div class="<?php print $classes_array[$id]; ?>">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div><!-- front-page-album-player-playlist -->
  
</div><!-- front-page-album-player-info -->