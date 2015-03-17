/* Load this script using conditional IE comments if you need to support IE 7 and IE 6. */

window.onload = function() {
	function addIcon(el, entity) {
		var html = el.innerHTML;
		el.innerHTML = '<span style="font-family: \'IcoMoonSocial\'">' + entity + '</span>' + html;
	}
	var icons = {
			'icon-google-plus' : '&#x21;',
			'icon-google-plus-2' : '&#x22;',
			'icon-google-plus-3' : '&#x23;',
			'icon-google-plus-4' : '&#x24;',
			'icon-googleplus' : '&#x25;',
			'icon-facebook' : '&#x27;',
			'icon-facebook-2' : '&#x50;',
			'icon-facebook-3' : '&#x51;',
			'icon-facebook-4' : '&#x2a;',
			'icon-flickr' : '&#x2b;',
			'icon-flickr-2' : '&#x2c;',
			'icon-flickr-3' : '&#x2d;',
			'icon-flickr-4' : '&#x2e;',
			'icon-flickr-5' : '&#x2f;',
			'icon-twitter' : '&#x30;',
			'icon-twitter-2' : '&#x31;',
			'icon-twitter-3' : '&#x32;',
			'icon-pinterest' : '&#x33;',
			'icon-pinterest-2' : '&#x34;',
			'icon-pinterest-3' : '&#x35;',
			'icon-pinterest-4' : '&#x36;',
			'icon-paypal' : '&#x37;',
			'icon-paypal-2' : '&#x38;',
			'icon-paypal-3' : '&#x39;',
			'icon-soundcloud' : '&#x3a;',
			'icon-soundcloud-2' : '&#x3b;',
			'icon-apple' : '&#x3c;',
			'icon-android' : '&#x3d;',
			'icon-spotify' : '&#x3e;',
			'icon-spotify-2' : '&#x3f;',
			'icon-instagram' : '&#x40;',
			'icon-instagram-2' : '&#x41;',
			'icon-instagram-3' : '&#x42;',
			'icon-tumblr' : '&#x43;',
			'icon-tumblr-2' : '&#x44;',
			'icon-tumblr-3' : '&#x45;',
			'icon-vimeo' : '&#x46;',
			'icon-vimeo-2' : '&#x47;',
			'icon-vimeo2' : '&#x48;',
			'icon-youtube' : '&#x49;',
			'icon-youtube-sign' : '&#x4a;',
			'icon-youtube-2' : '&#x4b;',
			'icon-youtube-3' : '&#x4c;',
			'icon-myspace-2' : '&#x26;',
			'icon-myspace-1' : '&#x4d;',
			'icon-amazon' : '&#x4e;',
			'icon-itunes' : '&#x4f;',
			'icon-vine-1' : '&#x52;',
			'icon-vine-2' : '&#x53;'
		},
		els = document.getElementsByTagName('*'),
		i, attr, c, el;
	for (i = 0; ; i += 1) {
		el = els[i];
		if(!el) {
			break;
		}
		attr = el.getAttribute('data-icon');
		if (attr) {
			addIcon(el, attr);
		}
		c = el.className;
		c = c.match(/icon-[^\s'"]+/);
		if (c && icons[c[0]]) {
			addIcon(el, icons[c[0]]);
		}
	}
};