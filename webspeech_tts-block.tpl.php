<?php
/**
 * @file
 *   Themes the Webspeech TTS block.  
 */
?>
<div id='webspeech_tts-rocks' style="background-color:#ccc;padding:10px;">

<script>
if (window.SpeechSynthesisUtterance === undefined) {

document.write("<strong>Your Browser Does Not Support the WebSpeechAPI</strong>.  Currenly, only Chrome supports it and Safari, with limited support.<br/></br>");

}
</script>

  <?php print t('Use the controls below for web speech: <br/> <br/>'); ?>
  <?php print $form; ?>
</div>
