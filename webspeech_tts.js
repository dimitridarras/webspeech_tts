Drupal.behaviors.myModule = {
  attach : function()
  {
    //alert("made it");
    //alert(Drupal.settings.webspeech_tts.proof_of_concept);
    render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
    //var msg = new SpeechSynthesisUtterance('Hello World');
    var msg = new SpeechSynthesisUtterance(render_voice);
    window.speechSynthesis.speak(msg);


    //speechSynthesis.getVoices().forEach(function(voice) {
    //console.log(voice.name, voice.default ? '(default)' :'');

var msg = new SpeechSynthesisUtterance('I see dead people!');
msg.voice = speechSynthesis.getVoices().filter(function(voice) { return voice.name == 'Whisper'; })[0];
speechSynthesis.speak(msg);



      }
}

;

