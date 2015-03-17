(function ($) {
    Drupal.behaviors.casting_store = {
        attach: function (context, settings) {
            if ($('.view-store-landing').length > 0) {
                $('.view-store-landing .views-row').hover(
                    function() { $(this).addClass('hover'); },
                    function() { $(this).removeClass('hover'); }
                );
            }
            if ($('.view-related-products').length > 0) {
                $('.view-related-products .views-row').hover(
                    function() { $(this).addClass('hover'); },
                    function() { $(this).removeClass('hover'); }
                );
            }

        }
    };
}(jQuery));