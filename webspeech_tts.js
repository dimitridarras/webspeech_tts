
(function ($) { 
  speechSynthesis.onvoiceschanged = function (){
}      

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      var voices = speechSynthesis.getVoices();
      //console.log(voices);

      $('.form-submit').click(function () {
        //Chrome loads voices asynchronously.
        //console.log(voices);

        var render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
    
        var msg = new SpeechSynthesisUtterance(render_voice);
        var the_lang_accent = Drupal.settings.webspeech_tts.tts_lang_accent_js;
        var the_voice = Drupal.settings.webspeech_tts.tts_voice_js;
   
        var the_volume = Drupal.settings.webspeech_tts.tts_volume_js;
        var the_rate = Drupal.settings.webspeech_tts.tts_rate_js;
        var the_pitch = Drupal.settings.webspeech_tts.tts_pitch_js;                                        


        msg.lang = the_lang_accent;
        msg.voice = the_voice;
        msg.volume = the_volume;
        msg.rate = the_rate;
        msg.pitch = the_pitch;

        console.log(msg.lang + ": This is the accent/lang");
         console.log(msg.voice + ": This is the voice");
        /*console.log(msg.the_accent + ": This is the translated language!");        
        console.log(msg.the_voice + " This is the voice!");
        console.log(msg.the_translated_lang + " This is the voice!");
        console.log(msg.the_volume + ": This is the Language!");        
        console.log(msg.the_rate + " This is the voice!");
        console.log(msg.the_pitch + ": This is the Language!");*/
     
        window.speechSynthesis.speak(msg);

      });
    }
  }

}(jQuery))



