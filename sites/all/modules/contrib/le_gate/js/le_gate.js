/**
 * @file
 * le-gate.js
 */

(function ($) {
    Drupal.behaviors.leGate = {
        attach: function (context, settings) {
            // Check path.
            var fullPath = window.location.pathname;
            var currentPath = window.location.pathname;//fullPath.replace(/^\/|\/$/g, '');
            if (!(currentPath == '/le-gate')) {
                setLeGateCookie('request-path', currentPath);
            }
            else {
                requestPath = getLeGateCookie('request-path');
            }
            // Add handler to gate link click.
            $('body', context).delegate('a.le-gate-pass-link', 'click', function(e) {
                setLeGateCookie();
                window.location = requestPath;
                e.preventDefault();
                return false;
            });
            $('#le-gate-date-form', context).submit(function(e) {
                var month = $('#edit-le-gate-selected-date-month').val();
                var day = $('#edit-le-gate-selected-date-day').val();
                var year = $('#edit-le-gate-selected-date-year').val();
                var query = '?month=' + month + '&day=' + day + '&year=' + year;
                $.get('/le-gate/eval-date' + query, function(data) {
                    if (data == 1) {
                        setLeGateCookie();
                        window.location = requestPath;
                    }
                    else {
                        window.location = '/le-gate?fail=true';
                    }
                });
            });
            // Check path.
            $.get('/le-gate/eval-path?le-gate-request-path=' + currentPath, function(data) {
                if ((data == 1) && (getLeGateCookie() == null)) {
                    window.location = '/le-gate';
                }
            });
            function getLeGateCookie(name) {
                if (name == null) {
                    var name = 'le-gate-pass';
                }
                var ca = document.cookie.split(';');
                for(var i=0; i<ca.length; i++) {
                    var c = ca[i];
                    while (c.charAt(0)==' ') c = c.substring(1);
                    if (c.indexOf(name) == 0) return c.substring(name.length + 1,c.length);
                }
                return null;
            }
            function setLeGateCookie(name, value) {
                var d = new Date();
                d.setTime(d.getTime() + (24*60*60*1000));
                var expires = "expires="+d.toUTCString();
                // If no path supplied then assume it's the pass name.
                if (name == null) {
                    document.cookie = "le-gate-pass=1; " + expires;
                }
                else {
                    document.cookie = name+"="+value+"; "+expires;
                }
            }
            /**
             * provide extraction of get param from url
             */
            /*function leGateGetUrlVars(url){
                var vars = [], hash;
                var hashes = url.slice(url.indexOf('?')).split('&');
                for(var i = 0; i < hashes.length; i++)
                {
                    hash = hashes[i].split('=');
                    vars.push(hash[0]);
                    vars[hash[0]] = hash[1];
                }
                vars.push('query');
                vars['query'] = hashes.join('&');
                return vars;
            }*/
        }
    };
})(jQuery);
