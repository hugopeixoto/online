/* -*- js-indent-level: 8 -*- */
/*
 * L.IFrameInfobar
 */

L.IFrameInfobar = L.Class.extend({

	initialize: function (url, options) {
		var infobar;
		L.setOptions(this, options);

		this._container = L.DomUtil.create('div', 'div-infobar-wrap');
		this._container.style.display = 'none';
		infobar = L.DomUtil.create('iframe', 'iframe-infobar', this._container);
		infobar.src = url;
		document.body.insertBefore(this._container, L.DomUtil.get('main-document-content'));
	},

	remove: function () {
		L.DomUtil.remove(this._container);
		this._container = null;
	},

	hasLoaded: function () {
		var elem = document.body.querySelector('.div-infobar-wrap');
		return elem && elem.style.display !== 'none';
	},

	show: function () {
		this._container.style.display = '';
	}
});

L.iframeInfobar = function (url, options) {
	return new L.IFrameInfobar(url, options);
};
