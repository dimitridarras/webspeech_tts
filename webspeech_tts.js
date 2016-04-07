

(function ($) {
//alert ("foo");

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      //alert("in behavior");
      $('.form-submit').click(function () {
        alert('button clicked');
        render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
        var msg = new SpeechSynthesisUtterance(render_voice);
        window.speechSynthesis.speak(msg);
      });
    }


  }

}(jQuery))



