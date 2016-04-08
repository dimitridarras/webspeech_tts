
(function ($) {
  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      $('.form-submit').click(function () {
        // Chrome loads voices asynchronously.
        window.speechSynthesis.onvoiceschanged = function(e) {
        loadVoices();
        };

        render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
        var msg = new SpeechSynthesisUtterance(render_voice);
       // http://jsbin.com/gosaqihi/9/edit?js,console
       // msg.lang = 'ja-JP'; 
       msg.voice = 'Fiona';
        window.speechSynthesis.speak(msg);



      });
    }
  }

}(jQuery))



