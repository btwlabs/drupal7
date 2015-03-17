(function ($) {
  Drupal.behaviors.boilerplate = {
    attach: function (context, settings) {
      // Animate errors, messages
      $('#content .messages, #content .error').addClass('fancy-messages');
      $('#content.messages, #content .error').fadeIn('slow');
      $('<input type="button" value="Close" id="close-messages">').appendTo('#content .messages, body > .error');
      $('#close-messages').click(function() {
        $('#content .messages, #content .error').hide('fast');
      });
      
      //toggle tour page buttons (map/details)
      $('.map-toggle-link', context).click(function(e) {
    	  var target = '.' + ft_getUrlVars($(this))['slide_id'];
    	  if(!$('.views-popup-container .tour-article').hasClass('views-slidein-processed')) {
    		  $('.tour-details-toggle-link').trigger('click');
    	  }
      });
      $('.tour-details-toggle-link', context).click(function(e) {
    	  if(!$('.views-popup-container .views-slidein-target').hasClass('views-slidein-processed')) {
    		  $('.map-toggle-link').trigger('click');
    	  }
      });
      
      //parse any fb xml content after ajax calls complete
      //parse any plusone widgets after ajax calls
      $(document).ajaxComplete(function(){
  	    try{
  	        FB.XFBML.parse(); 
  	    }catch(ex){}
  	    try{
  	    	gapi.plusone.go('body');
  	    }catch(ex){}
  	  });
      
      // trigger pageResizer related event on inline editing link click
      $('body', context).delegate('a.inline-editing-show', 'click', function(e){
    	  $(this).parent().next().find('div.inline-editing-form-wrapper').trigger('inlineEditingComplete');
      });
      
	  //toggle mobile nav classes that show/hide menu links
      $('#mobile-nav-open-btn', context).bind('click', function(e) {
	     $('html').toggleClass('js-nav');
	     e.preventDefault();
	     return false;
      });
      $('#mobile-nav-close-btn,#mobile-fade', context).bind('click', function(e) {
	     $('html').removeClass('js-nav');
	     e.preventDefault();
	     return false;
      });
      
     // Remove any .row-container nodes that have no content.
     $list = $('div.node-row-container');
     $list.each(function() {
       if (!$.trim($(this).html())) {
         $(this).remove();
       }
     });
    }
  };
  
  Drupal.behaviors.loginDropDown = {
    attach: function (context, settings) {
      $("#login-link-container a", context).click(function () {
        $("#login-dropdown-form", context).slideToggle("fast");
          this.blur();
          return false;
        }
      );
    }  
  };
  
  Drupal.behaviors.itemHideShow = {
	attach:  function(context, settings) { 
		$('a.show-link', context)
		.each(function(){
			var q = ft_getUrlVars($(this));
			$(this).html(unescape(q['moreText']));
			//hide the link if the show text is not taller
			//than the css height
 
			//briefly append the show-hide contents to check it's height
			//in case it is display:none (height=0)
			//var $checkElement = $(this).prev('.item-hide', context).children().first().clone().appendTo('body');
			var $targ = $(this).prev('.item-hide', context).first();
			if(!$targ.is(':visible')) {
				var $checkElement = $targ.clone().appendTo('body').css({'height':'auto'});
				var actualHeight = $checkElement[0].scrollHeight;
				setHeight = (q['height'] == undefined) ? $checkElement.height() : q['height'];
				$checkElement.remove();
			}
			else {
				var actualHeight = $targ[0].scrollHeight;
				setHeight = (q['height'] == undefined) ? $targ.height() : q['height'];
			}
			if(actualHeight <= setHeight) {
				$targ.css({'height' : 'auto'});
				$(this).remove();
			}
		});
		$('body', context).delegate('a.show-link', 'click', function(e){
			var query = ft_getUrlVars($(this));
			if($(this).hasClass('show-processed')) {
				$(this).prev('.item-shown').toggleClass('item-hide').toggleClass('item-shown');
				$(this).toggleClass('show-processed');
				$(this).html(unescape(query['moreText']));
				$(this).prev('.item-hide', context).first().trigger('showHideHideComplete');
			}
			else {
				$(this).prev('.item-hide').toggleClass('item-hide').toggleClass('item-shown');
				$(this).toggleClass('show-processed');
				$(this).html(unescape(query['lessText']));
				$(this).prev('.item-shown', context).first().trigger('showHideShowComplete');
			}
			e.preventDefault();
		});
	}
  };

  /**
   * provide extraction of get param from url
   * @return array of ['var']=>value
   */
  function ft_getUrlVars(element){
      var vars = [], hash;
      //if element is there use it
      //otherwise use window
      if(!(element == null)) {
          var hashes = element.attr('href').slice(element.attr('href').indexOf('?') + 1).split('&');
      }
      else {
          var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
      }
      for(var i = 0; i < hashes.length; i++)
      {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
        vars[hash[0]] = hash[1];
      }
      vars.push('query');
      vars['query'] = hashes.join('&');
      return vars;
  }	
}(jQuery));
