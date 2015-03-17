/**
 * 
 */

(function ($) {
  Drupal.behaviors.FTComments = {
    attach: function (context, settings) {
      // Adds tabs to comment section
      if ($(".pane-node-comments .comment .view").length >= 1){
        $(".pane-node-comment-form").hide();
        $(".pane-node-comments").show();
        $("#comment-nav li.node-comments").addClass("current");

      } else {
        $(".pane-node-comment-form").hide();
        $("#comment-nav li.node-comment-form").addClass("current");
        $(".pane-node-comments").show();
        $(".pane-node-comments").html('There are no comments yet. <a name="here" href="#here" class="createComment">Be the first to leave one</a>.');
      }

      $(".createComment").click(function(e){
        $(".pane-node-comment-form").show();
        $("#comment-nav li.node-comments").removeClass("current");
        $("#comment-nav li.node-comment-form").addClass("current");
        $(".pane-node-comments").hide();
      });

      $("#comment-nav li").click(function(e) {
        $(".comment-tabs").hide();
        $("#comment-nav .current").removeClass("current");
        $(this).addClass("current");
        var clicked = $(this).find("a:first").attr("href");
        $(".comment-tabs" + clicked).fadeIn("fast");
        e.preventDefault();
      });
    }
  };

}(jQuery));