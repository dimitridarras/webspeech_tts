
(function ($) {
  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      $('.form-submit').click(function () {
        render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
        var msg = new SpeechSynthesisUtterance(render_voice);
        window.speechSynthesis.speak(msg);
      });
    }
  }

}(jQuery))



