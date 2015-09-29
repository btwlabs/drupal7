<?php
/**
 * @file
 * btw_evermind.features.field_instance.inc
 */

/**
 * Implements hook_default_field_instance_assets().
 */
function story_blocks_default_field_instance_assets() {
  $field_instances = array();

  // Exported field_instance: 'node-row-body'
  $field_instances['node-story_block-body'] = array(
    'bundle' => 'story_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'left_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'left_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'right_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'right_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-story_block-field_story_block_images'
  $field_instances['node-story_block-field_story_block_images'] = array(
    'bundle' => 'story_block',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => '',
            'bg_image_background_size_ie8' => 0,
            'bg_image_color' => '#FFFFFF',
            'bg_image_important' => 1,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.node-nid-[node:nid]',
            'bg_image_x' => 'left',
            'bg_image_y' => 'top',
          ),
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => '',
            'bg_image_background_size_ie8' => 0,
            'bg_image_color' => '#FFFFFF',
            'bg_image_important' => 1,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.node-nid-[node:nid]',
            'bg_image_x' => 'left',
            'bg_image_y' => 'top',
          ),
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 1,
      ),
      'left_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => 'cover',
            'bg_image_background_size_ie8' => 0,
            'bg_image_color' => '#FFFFFF',
            'bg_image_important' => 0,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.node-nid-[node:nid]',
            'bg_image_x' => 'top',
            'bg_image_y' => 'center',
          ),
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 6,
      ),
      'left_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'right_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => 'cover',
            'bg_image_background_size_ie8' => 0,
            'bg_image_color' => '#FFFFFF',
            'bg_image_important' => 0,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.node-nid-[node:nid]',
            'bg_image_x' => 'top',
            'bg_image_y' => 'center',
          ),
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 2,
      ),
      'right_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => '',
            'bg_image_background_size_ie8' => 0,
            'bg_image_color' => '#FFFFFF',
            'bg_image_important' => 1,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.node-nid-[node:nid] .col-1-wrapper',
            'bg_image_x' => 'left',
            'bg_image_y' => 'top',
          ),
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_story_block_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'story_block_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-row-field_story_block_link'
  $field_instances['node-story_block-field_story_block_link'] = array(
    'bundle' => 'story_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'left_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'left_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'right_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'right_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_story_block_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-row-field_story_block_videos'
  $field_instances['node-story_block-field_story_block_videos'] = array(
    'bundle' => 'story_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'left_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'link_title' => 'Watch Video',
          'use_description' => 1,
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field_link_colorbox',
        'weight' => 5,
      ),
      'left_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'link_title' => 'Watch Video',
          'use_description' => FALSE,
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field_link_colorbox',
        'weight' => 4,
      ),
      'right_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'link_title' => 'Watch Video',
          'use_description' => 1,
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field_link_colorbox',
        'weight' => 1,
      ),
      'right_non_bg_image_story_block' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_story_block_videos',
    'label' => 'Videos',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Images');
  t('Link');
  t('Url');
  t('Videos');

  return $field_instances;
}
