
var modal = (function () {
    var
        method = {},
        $overlay,
        $modal,
        $content,
        $close;

    // Center the modal in the viewport
    method.center = function () {
        var top, left;

        top = Math.max($(window).height() - $modal.outerHeight(), 0) / 2;
        left = Math.max($(window).width() - $modal.outerWidth(), 0) / 2;

        $modal.css({
            top: top + $(window).scrollTop(),
            left: left + $(window).scrollLeft()
        });
    };

    // Open the modal
    method.open = function (settings) {
        $content.empty().append(settings.content);

        $modal.css({
            width: settings.width || 'auto',
            height: settings.height || 'auto'
        });

        method.center();
        $(window).bind('resize.modal', method.center);
        $modal.show();
        $overlay.show();
    };

    // Close the modal
    method.close = function () {
        $modal.hide();
        $overlay.hide();
        $content.empty();
        $(window).unbind('resize.modal');
    };

    // Generate the HTML and add it to the document
    $overlay = $('<div id="overlay"></div>');
    $modal = $('<div id="modal"></div>');
    $content = $('<div id="content"></div>');
    $close = $('<a id="close" href="#">close</a>');

    $modal.hide();
    $overlay.hide();
    $modal.append($content, $close);

    $(document).ready(function () {
        $('body').append($overlay, $modal);
    });

    $close.click(function (e) {
        e.preventDefault();
        method.close();
    });

    return method;
}());

// Wait until the DOM has loaded before querying the document
$(document).ready(function () {

    $.get('ajax.html', function (data) {
        modal.open({ content: data });
    });

    $('a#howdy').click(function (e) {
        modal.open({
            content: "Email:<h1><a href='mailto: myashvi16@hope.com'>myashvi16@hope.com</a></h1><h1> Contact: +919867677717 / 1234567890</h1><h2>  <div id='result'></div ><div id='embedMap' style='width: 100%; height:60vh;'></div><button type='button' onclick='showPosition()''> Show Position </button></h2>"
        });
        e.preventDefault();
    });
});
$(document).ready(function () {

    $.get('ajax.html', function (data) {
        modal.open({ content: data });
    });

    $('a#howdy1').click(function (e) {
        modal.open({
            // content: "<ul class='social- network social - circle'> < li > <a href='#'' class='icoRss' title='Rss'><i class='fa fa-rss'></i></a></li><li><a href='#' class='icoFacebook' title='Facebook'><i class='fa fa-facebook'></i></a></li><li><a href='#' class='icoTwitter' title='Twitter'><i class='fa fa-twitter'></i></a></li><li><a href='#' class='icoGoogle' title='Google +'><i class='fa fa-google-plus'></i></a></li><li><a href='#' class='icoLinkedin' title='Linkedin'><i class='fa fa-linkedin'></i></a></li></ul>"
            content: "<a href='#' class='fa fa-facebook'></a><a href='#' class='fa fa-twitter'></a><a href='#' class='fa fa-google'></a><a href='#' class='fa fa-linkedin'></a><a href='#' class='fa fa-youtube'></a><a href='#' class='fa fa-instagram'></a><a href='#' class='fa fa-snapchat-ghost'></a><a href='#' class='fa fa-yahoo'></a><a href='#' class='fa fa-reddit'></a>"

        });
        e.preventDefault();
    });
});
