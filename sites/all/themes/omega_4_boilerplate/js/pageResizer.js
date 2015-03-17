/**
 * @file pageResizer.js
 * This code resizes the content-inner div of the content region
 * on certain events including vpop completion and show hide completion.
 * This file should only be included on certain pages to make sure
 * that the region doesn't resize for every show-hide...
 */
(function ($) {  
  Drupal.behaviors.popupPageSize = {
    attach: function (context, settings) {
		$('div.region-content-inner', context).bind('vpopFadeComplete vpopAjaxComplete inlineEditingComplete showHideShowComplete showHideHideComplete', function(e) {
			addHeight($(this));
			return false;
	    });
		$('#region-content', context).bind('vpopFadeComplete vpopAjaxComplete inlineEditingComplete showHideShowComplete showHideHideComplete', function(e) {
			addHeight($(this));
			return false;
	    });
	}	
  };
  function lowest(elements) {
	var highest = null;
	var hi = 0;
	elements.each(function(){
	  var pos = $(this).offset();
	  var h = pos.top + $(this).height();
	  if(h > hi){
	     hi = h;
	     low = $(this);  
	  }    
	});
	return low;
  }
  function addHeight(container) {
	  container.imagesLoaded(function() {
			var elements = container.find('div:visible:not(.item-hide):not(.item-hide div)');
			var low = lowest(elements);
			var pos = low.offset();
			container.height(pos.top + low.height());
		  return false;
	  });
  }
}(jQuery));