<?php

/**
 * @file
 * Home of the FeedsSocialJSONParser and related classes.
 */

/**
 * Extends FeedsSocialJSONParser and corrects wingding BS in twitter pulls.
 */

class FeedsSocialJSONParser extends FeedsJSONPathParser {
  /**
   * Override setTargetElement to operate on a target item that is a node.
   */
   public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {

    switch ($element_key) {

      case 'parent:uid':
        if ($source->feed_nid && $node = node_load($source->feed_nid)) {
          return $node->uid;
        }
        break;
      case 'parent:nid':
        return $source->feed_nid;
    }

    $item = $result->currentItem();
	$item[$element_key] = preg_replace('/[^(\x20-\x7F)]*/','', $item[$element_key]);
    return isset($item[$element_key]) ? $item[$element_key] : '';
  }
}
