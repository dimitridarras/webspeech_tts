Drupal.behaviors.myModule = {
  attach : function()
  {
    alert("made it");
    alert(Drupal.settings.webspeech_tts.proof_of_concept);
    render_voice = Drupal.settings.webspeech_tts.proof_of_concept;
    //var msg = new SpeechSynthesisUtterance('Hello World');
    var msg = new SpeechSynthesisUtterance(render_voice);
    window.speechSynthesis.speak(msg);

      }
}

;

