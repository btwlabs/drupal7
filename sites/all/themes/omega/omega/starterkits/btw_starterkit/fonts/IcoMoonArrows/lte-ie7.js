/* Use this script if you need to support IE 7 and IE 6. */

window.onload = function() {
	function addIcon(el, entity) {
		var html = el.innerHTML;
		el.innerHTML = '<span style="font-family: \'IcoMoonArrows\'">' + entity + '</span>' + html;
	}
	var icons = {
			'icon-arrow-small-left-1' : '&#x22;',
			'icon-arrow-small-right-1' : '&#x23;',
			'icon-arrow-small-up-1' : '&#x24;',
			'icon-arrow-small-down-1' : '&#x25;',
			'icon-arrow-circle-left-1' : '&#x26;',
			'icon-arrow-circle-right-1' : '&#x27;',
			'icon-arrow-circle-up-1' : '&#x28;',
			'icon-arrow-circle-down-1' : '&#x29;',
			'icon-arrow-hairline-left' : '&#x2a;',
			'icon-arrow-hairline-right' : '&#x2b;',
			'icon-arrow-hairline-up' : '&#x2c;',
			'icon-arrow-hairline-down' : '&#x2d;',
			'icon-arrow-superthin-left' : '&#x2e;',
			'icon-arrow-superthin-right' : '&#x2f;',
			'icon-arrow-superthin-up' : '&#x30;',
			'icon-arrow-superthin-left-2' : '&#x31;',
			'icon-arrow-thin-left' : '&#x32;',
			'icon-arrow-thin-right' : '&#x33;',
			'icon-arrow-thin-right-2' : '&#x34;',
			'icon-arrow-thin-down' : '&#x21;',
			'icon-arrow-rounded-normal-left' : '&#x35;',
			'icon-arrow-rounded-normal-right' : '&#x36;',
			'icon-arrow-rounded-normal-up' : '&#x37;',
			'icon-arrow-rounded-normal-down' : '&#x38;',
			'icon-arrow-rounded-bold-left' : '&#x39;',
			'icon-arrow-rounded-bold-right' : '&#x3a;',
			'icon-arrow-rounded-bold-up' : '&#x3b;',
			'icon-arrow-rounded-bold-down' : '&#x3c;',
			'icon-arrow-squared-normal-left' : '&#x3d;',
			'icon-arrow-squared-normal-right' : '&#x3e;',
			'icon-arrow-squared-normal-up' : '&#x3f;',
			'icon-arrow-squared-normal-down' : '&#x40;',
			'icon-arrow-squared-bold-left' : '&#x41;',
			'icon-arrow-squared-bold-right' : '&#x42;',
			'icon-arrow-squared-bold-up' : '&#x43;',
			'icon-arrow-squared-bold-down' : '&#x44;',
			'icon-arrow-squared-black-left' : '&#x45;',
			'icon-arrow-squared-black-right' : '&#x46;',
			'icon-arrow-squared-black-up' : '&#x47;',
			'icon-arrow-squared-black-down' : '&#x48;',
			'icon-arrow-double-thin-left' : '&#x49;',
			'icon-arrow-double-thin-right' : '&#x4a;',
			'icon-arrow-double-thin-up' : '&#x4b;',
			'icon-arrow-double-thin-down' : '&#x4c;',
			'icon-arrow-medium-double-up' : '&#x4d;',
			'icon-arrow-medium-double-down' : '&#x4e;',
			'icon-arrow-black-double-up' : '&#x4f;',
			'icon-arrow-black-double-down' : '&#x50;'
		},
		els = document.getElementsByTagName('*'),
		i, attr, html, c, el;
	for (i = 0; i < els.length; i += 1) {
		el = els[i];
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