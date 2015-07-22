/**
 * Waypoints UI js.
 */
(function($){
    Drupal.behaviors.waypoints_ui = {
        attach:	function(context, settings) {
            for (var key in settings.waypointsUI) {
                waypoint = settings.waypointsUI[key];
                var attachSelector = waypoint.attach_element;
                var toggleClass = waypoint.toggle_class;
                var toggleOffset = waypoint.toggle_offset;
                if (waypoint.same_element == 1) {
                    var toggleSelector = waypoint.attach_element;
                }
                else {
                    var toggleSelector = waypoint.toggle_element;
                }
                $(attachSelector, context).waypoint(function() {
                    $(toggleSelector).toggleClass(toggleClass);

                }, {
                    offset: toggleOffset + '%'
                });
            }
        }
    };
}(jQuery));
