/**
 * writes width of the .image-container wrapper for
 * images with ".reactive img" or img.reactive selector
 * to a percentage of the width of the next highest containing
 * div in the DOM.
 * 
 *  Should provide 'reactive' images that change size based on
 *  the width of the viewport.
 */

(function ($) {

	Drupal.behaviors.reactiveImg = {
	    attach: function(context, settings) {
	    	$('img.reactive, .reactive img').load(function() {
	    		var picY = $(this).height(); // 
	    		var divY = $(this).closest('div.region').height();
	    		var picX = $(this).width();// / 
	    		var divX = $(this).closest('div.region').width();
	    		
	    		//set the initial % on image-container
	    		var XOver = (picX > divX) && (picY <= divY);
	    		var YOver = (picY > divY) && (picX <= divX);
	    		var bothOver = (picY > divY) && (picX > divX);
	    		
	    		var XPercent = 100, YPercent = 100;
	    		var scaleFactor = 1;
	    		
	    		if (bothOver) {
	    			if(picY > picX) {
	    				scaleFactor = divY/picY;
	    				XPercent = (picX/divX) * scaleFactor * 100;
	    			}
	    			else {
	    				scaleFactor = divX/picX;
	    				YPercent = (picY/divY) * scaleFactor * 100;
	    			}
	    			
	    		}
	    		else if(YOver) {
	    			scaleFactor = divY/picY;
    				XPercent = (picX/divX) * scaleFactor * 100;
	    		}
	    		else if(XOver) {
	    			scaleFactor = divX/picX;
    				YPercent = (picY/divY) * scaleFactor * 100;
	    		}
	    		else {
	    			XPercent = picX/divX * 100;
	    			YPercent = picY/divY * 100;
	    		}
	    		
	    		//if the pic's width is smaller than it's container, then 
	    		//scale it
	    		$(this).wrap('<div class="image-container" style="width:' + XPercent + '%;height:' + YPercent + '%;" />');
	    	});
	    }			
	};
	
}(jQuery));
