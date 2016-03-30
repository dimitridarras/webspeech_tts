/*

Research:

https://api.drupal.org/api/drupal/includes!common.inc/function/drupal_add_js/7
http://drupal.stackexchange.com/questions/87598/fire-javascript-on-a-form-submit
http://drupal.stackexchange.com/questions/16818/how-to-make-form-buttons-call-only-javascript
http://stackoverflow.com/questions/23370269/jquery-autosize-plugin-error-intermediate-value-is-not-a-function
https://www.drupal.org/node/756722
Managing JavaScript in Drupal7 - https://www.drupal.org/node/756722
bah! $("form#submit_button").submit(function(e) {...   not enough: e.preventDefault(); ditto for: return false;
*** Wrap behaviors in the (function($){}
* 
*/


(function ($) {
alert ("foo");

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      alert("in behavior");
      $('.form-submit').click(function () {
        alert('button clicked');
        render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
        var msg = new SpeechSynthesisUtterance(render_voice);
        window.speechSynthesis.speak(msg);
      });
    }


  }

}(jQuery))



