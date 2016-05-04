<?php

/**
 * @file
 *   Themes the Webspeech TTS block - adds a JS Sniffer	for WebSpeech Support
 */

?>

<div id='webspeech_tts-rocks'>

<script>
if (window.SpeechSynthesisUtterance === undefined) {
	document.write("<div class='messages error'>Your Browser Does Not Support the WebSpeechAPI.  Currenly, only Chrome supports it and Safari, with limited support.<br/></br></div>");
}
</script>



  <?php print t('Use the controls below for web speech: <br/> <br/>'); ?>
  <?php print $form; ?>
</div>
