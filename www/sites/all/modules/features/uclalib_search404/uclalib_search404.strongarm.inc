<?php
/**
 * @file
 * uclalib_search404.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_search404_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_custom_search_path';
  $strongarm->value = 'site-search?search_query=@keys';
  $export['search404_custom_search_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_disable_error_message';
  $strongarm->value = 0;
  $export['search404_disable_error_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_do_custom_search';
  $strongarm->value = 0;
  $export['search404_do_custom_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_do_google_cse';
  $strongarm->value = 0;
  $export['search404_do_google_cse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_do_search_by_page';
  $strongarm->value = 0;
  $export['search404_do_search_by_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_first';
  $strongarm->value = 0;
  $export['search404_first'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_ignore';
  $strongarm->value = 'and or the';
  $export['search404_ignore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_ignore_extensions';
  $strongarm->value = 'htm html php cfm';
  $export['search404_ignore_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_ignore_query';
  $strongarm->value = 'gif jpg jpeg bmp png';
  $export['search404_ignore_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_jump';
  $strongarm->value = 0;
  $export['search404_jump'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_page_text';
  $strongarm->value = '<!DOCTYPE html>
<html>
<body>
<p></p>
<b>Click the "Search" button</b> to run a site search using terms we think you\'re looking for.  
<p></p>
</body>
</html>';
  $export['search404_page_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_page_title';
  $strongarm->value = 'The page you requested does not exist.';
  $export['search404_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_redirect_301';
  $strongarm->value = 0;
  $export['search404_redirect_301'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_regex';
  $strongarm->value = '';
  $export['search404_regex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_skip_auto_search';
  $strongarm->value = 1;
  $export['search404_skip_auto_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_use_or';
  $strongarm->value = 0;
  $export['search404_use_or'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search404_use_search_engine';
  $strongarm->value = 0;
  $export['search404_use_search_engine'] = $strongarm;

  return $export;
}
