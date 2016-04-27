
(function ($) { 
  speechSynthesis.onvoiceschanged = function (){
}      

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      var voices = speechSynthesis.getVoices();
      //console.log(voices);

      $('#read_text').click(function () {
        //inelegant:  if speechSynthesis is paused, resume.
        window.speechSynthesis.resume();

        //Chrome loads voices asynchronously.
        console.log("start reading");

        var js_voices = speechSynthesis.getVoices();
        console.log(js_voices);
        //This is a special case above for voices - see msg.voice below

        var render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
    
        var msg = new SpeechSynthesisUtterance(render_voice);
        var the_lang_accent = Drupal.settings.webspeech_tts.tts_lang_accent_js;
        var the_voice = Drupal.settings.webspeech_tts.tts_voice_js;

   
        var the_volume = Drupal.settings.webspeech_tts.tts_volume_js;
        var the_rate = Drupal.settings.webspeech_tts.tts_rate_js;
        var the_pitch = Drupal.settings.webspeech_tts.tts_pitch_js;                                        


        msg.lang = the_lang_accent;
        msg.voice = js_voices.filter(function(js_voices) {return js_voices.name == the_voice;})[0];
        msg.volume = the_volume;
        msg.rate = the_rate;
        msg.pitch = the_pitch;

        console.log(msg.lang + ": This is the accent/lang");
        /*console.log(msg.voice + ": This is the voice");
        console.log(msg.the_accent + ": This is the translated language!");        
        console.log(msg.the_voice + " This is the voice!");
        console.log(msg.the_translated_lang + " This is the voice!");
        console.log(msg.the_volume + ": This is the Language!");        
        console.log(msg.the_rate + " This is the voice!");
        console.log(msg.the_pitch + ": This is the Language!");*/
     
        window.speechSynthesis.speak(msg);





      });

        //pause the trains!  
        $('#pause_button').click(function () {
        window.speechSynthesis.pause();       
        console.log("stopped");
         }); 

        //stop the trains!  
        $('#cancel_button').click(function () {
        window.speechSynthesis.cancel();        
        console.log("cancelled");
         });  
     
    }
  }

}(jQuery))



