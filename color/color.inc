<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'colihaut'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background'),
    'base' => t('Main background'),
    'pagebg' => t('Page background'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'nodeheader' => t('Article Header'),
    'link' => t('Link color'),
    'linkhover' => t('Link hover color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Deep Blue (default)'),
      'colors' => array(
        'top' => '#0779bf',
        'base' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'nodeheader' => '#0779be',
        'link' => '#0071b3',
        'linkhover' => '#0779bd',
      ),
    ),
    'green' => array(
      'title' => t('Grass Green'),
      'colors' => array(
        'top' => '#259824',
        'base' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'nodeheader' => '#259823',
        'link' => '#259824',
        'linkhover' => '#259822',
      ),
    ),
    'brown' => array(
      'title' => t('Earth Brown'),
      'colors' => array(
        'top' => '#985624',
        'base' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#24272c',
        'titleslogan' => '#fffeff',
        'text' => '#4a4a4a',
        'nodeheader' => '#985623',
        'link' => '#985624',
        'linkhover' => '#985622',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),
);
