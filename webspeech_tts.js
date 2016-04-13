
(function ($) { 
  speechSynthesis.onvoiceschanged = function (){
}      

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      var voices = speechSynthesis.getVoices();
      //console.log(voices);

      $('.form-submit').click(function () {
        // Chrome loads voices asynchronously.
        //console.log(voices);

        var render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
    
        var msg = new SpeechSynthesisUtterance(render_voice);
        var the_lang = Drupal.settings.webspeech_tts.the_lang;

        //replace name and array value with form vars
        //msg.voice = voices.filter(function(voice) {return voice.name = 'Agnes'})[2];
        msg.lang = the_lang;

        console.log(msg.voice + " This is the voice!");
        console.log(msg.lang + ": This is the accent!");


 
     
        window.speechSynthesis.speak(msg);

      });
    }
  }

}(jQuery))



