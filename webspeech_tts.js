(function ($) {
  speechSynthesis.onvoiceschanged = function (){}

  Drupal.behaviors.webspeech_tts = {
    attach: function () {
      $('#read_text').click(function () {
        window.speechSynthesis.resume();

        //Chrome loads voices asynchronously.
        console.log("start reading");

        var js_voices = speechSynthesis.getVoices();
        console.log(js_voices);
        var render_voice = Drupal.settings.webspeech_tts.proof_of_concept;

        var msg = new SpeechSynthesisUtterance(render_voice);
        var the_lang_only = Drupal.settings.webspeech_tts.tts_lang_only_js;
        var the_voice = Drupal.settings.webspeech_tts.tts_voice_js;
        //console.log(the_voice);

        var the_volume = Drupal.settings.webspeech_tts.tts_volume_js;
        var the_rate = Drupal.settings.webspeech_tts.tts_rate_js;
        var the_pitch = Drupal.settings.webspeech_tts.tts_pitch_js;

        msg.lang = the_lang_only;  //'el-GR' contant value for testing lang/accent
        msg.voice  = js_voices.filter(function(js_voices) {return js_voices.name == the_voice;})[0];
        //msg.voice = 0; // set to zero for testing language which otherwise "conflicts"
        //console.log(msg.voice);

        msg.volume = the_volume;
        msg.rate = the_rate;
        msg.pitch = the_pitch;

        console.log(msg.lang + ": This is the accent/lang");
        console.log(msg.voice + ": This is the voice");
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



