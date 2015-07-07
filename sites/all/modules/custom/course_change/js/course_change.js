/**
 * Course Change js.
 */
(function($){
    Drupal.behaviors.course_change = {
        attach:	function(context, settings) {
            // waypoint #1.
            if (!(settings.courseChange.course_change_waypoint_1_attach_element == '')) {
                var attachSelector = settings.courseChange.course_change_waypoint_1_attach_element;
                var toggleClass = settings.courseChange.course_change_waypoint_1_toggle_class;
                var toggleOffset = settings.courseChange.course_change_waypoint_1_toggle_offset;
                if (settings.courseChange.course_change_waypoint_1_same_element == 1) {
                    var toggleSelector = settings.courseChange.course_change_waypoint_1_attach_element;
                }
                else {
                    var toggleSelector = settings.courseChange.course_change_waypoint_1_toggle_element;
                }
                var waypoint = $(attachSelector).waypoint(function(direction) {
                    $(toggleSelector).toggleClass(toggleClass);

                }, {
                    offset: toggleOffset + '%'
                });
            }
            // waypoint #2.
            if (!(settings.courseChange.course_change_waypoint_2_attach_element == '')) {
                var attachSelector = settings.courseChange.course_change_waypoint_2_attach_element;
                var toggleClass = settings.courseChange.course_change_waypoint_2_toggle_class;
                var toggleOffset = settings.courseChange.course_change_waypoint_3_toggle_offset;
                if (settings.courseChange.course_change_waypoint_2_same_element == 1) {
                    var toggleSelector = settings.courseChange.course_change_waypoint_2_attach_element;
                }
                else {
                    var toggleSelector = settings.courseChange.course_change_waypoint_2_toggle_element;
                }
                var waypoint = $(attachSelector).waypoint(function(direction) {
                    $(toggleSelector).toggleClass(toggleClass);
                }, {
                    offset: toggleOffset + '%'
                });
            }
            // waypoint #3.
            if (!(settings.courseChange.course_change_waypoint_3_attach_element == '')) {
                var attachSelector = settings.courseChange.course_change_waypoint_3_attach_element;
                var toggleClass = settings.courseChange.course_change_waypoint_3_toggle_class;
                var toggleOffset = settings.courseChange.course_change_waypoint_3_toggle_offset;
                if (settings.courseChange.course_change_waypoint_3_same_element == 1) {
                    var toggleSelector = settings.courseChange.course_change_waypoint_3_attach_element;
                }
                else {
                    var toggleSelector = settings.courseChange.course_change_waypoint_3_toggle_element;
                }
                var waypoint = $(attachSelector).waypoint(function(direction) {
                    $(toggleSelector).toggleClass(toggleClass);
                }, {
                    offset: toggleOffset + '%'
                });
            }
        }
    };
}(jQuery));
