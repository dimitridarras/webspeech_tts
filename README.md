<H1>Webspeech TTS (Text to Speech) Module for Drupal 7</H1>

This experimental module allows users with the Administer
site configuration permission to quickly and easily change voices and
languages(accents) associated with content in a node and read the contents
of a node with pre-determined voices/accents and (experimental)languages.  

Like the API itself, it is experimental and not intended for enterprise usage.  
The API itself is embedded in Google Chrome, however there is now a cloud-based
Google Speech API as well, so if there are plans to port to Drupal 8, that may
be the future integration.

End-user scenarios include usability, screen reading for nodes, and other
experimental/fun scenarios.   The module can be seen in this [demo](https://dimitridarras.com/content/book-review-tubes-journey-center-internet-0).  If that link is broken, you could also try an online service such as https://simplytest.me.

Clear both the Drupal AND browser cache frequently when testing.   In order to
install the module, configure content types under configuration, along with
speech settings, then activate the Webspeech TTS checkbox under the tabs for
any given entity.

<h2>Other Resources</h2>

Several other Drupal Modules precede this effort:

Drupal Text-to-Speech Module
https://www.drupal.org/node/997484

Drupal Open ReadSpeaker Module
https://www.drupal.org/project/open_readspeaker

Drupal Module: Free TTS
https://www.drupal.org/project/freetts

Drupal Module eSpeak TTS
https://www.drupal.org/sandbox/pau1m/1215214

<h2>Special instructions: Configure the Play button Block</h2>

Checking the Webspeech option under the publish tabbed menu for a given content type is not sufficient to enable to module.   There is a block designated for the "player".   Please see the final screen-grab below.

<h2>Screengrabs and Configuration</h2>

![Module Configuration](/images/webspeech-tts-configuration.png)

![Enable Module](/images/webspeech-tts-enable.png)

![Enable Module](/images/webspeech-tts-block-configuration.jpeg)

Please note that this project is also available at Drupal.org:

https://www.drupal.org/sandbox/ddarras2012/2702987
