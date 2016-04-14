
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
        var the_accent = Drupal.settings.webspeech_tts.tts_accent_js;
        var the_voice = Drupal.settings.webspeech_tts.tts_voices_js;
        var the_translated_lang = Drupal.settings.webspeech_tts.tts_translated_lang_js;
        var the_volume = Drupal.settings.webspeech_tts.tts_volume_js;
        var the_rate = Drupal.settings.webspeech_tts.tts_rate_js;
        var the_pitch = Drupal.settings.webspeech_tts.tts_pitch_js;                                        

        //replace name and array value with form vars
        //msg.voice = voices.filter(function(voice) {return voice.name = 'Agnes'})[2];
        

        if(the_translated_lang)
        {
          msg.lang = the_translated_lang;
        }

        else {
          msg.lang = the_accent;       
        }

        msg.voice = the_voice;
        msg.volume = the_volume;
        msg.rate = the_rate;
        msg.pitch = the_pitch;

        console.log(msg.the_accent + ": This is the accent!");
        console.log(msg.the_accent + ": This is the translated language!");        
        console.log(msg.the_voice + " This is the voice!");
        console.log(msg.the_translated_lang + " This is the voice!");
        console.log(msg.the_volume + ": This is the Language!");        
        console.log(msg.the_rate + " This is the voice!");
        console.log(msg.the_pitch + ": This is the Language!");
     
        window.speechSynthesis.speak(msg);

      });
    }
  }

}(jQuery))



