<?

function webspeech_tts_admin_settings_form() {
/*

  $form['#submit'][] = 'webspeech_tts_form_submit';
  return system_settings_form($form);

  */

  $form = array();  
  $form['webspeech_tts_types'] = array(
        //just a placeholder - needs logic
        '#title' => t('The content types to enable Webspeech TTS functionality on'),
        '#description' => t('On the specified node types, a Read Text Aloud button will appear'),    
        '#type' => 'checkboxes',    
        '#options' => node_type_get_names(),
        '#default_value' => variable_get('webspeech_tts_types',
       array()),  );  

  $form['webspeech_tts_accents'] = array(
      '#type' => 'select',
      '#title' => t('Accents'),
      '#description' => t('Choose an accent'), 
      '#options' => array( 0 => 'en-US', 1 => 'it-IT', 2 => 'sv-SE'),
/*

["en-US", "it-IT", "sv-SE", "fr-CA", "de-DE", "he-IL", "id-ID", "en-GB", "es-AR", "nl-BE", "en", "ro-RO", "pt-PT", "th-TH", "en-AU", "ja-JP", "sk-SK", "hi-IN", "pt-BR", "ar-SA", "hu-HU", "zh-TW", "el-GR", "ru-RU", "en-IE", "es-ES", "nb-NO", "es-MX", "da-DK", "fi-FI", "zh-HK", "en-ZA", "fr-FR", "zh-CN", "en-IN", "nl-NL", "tr-TR", "ko-KR", "pl-PL", "cs-CZ", "es-US"]

*/
    );

    $form['webspeech_tts_names'] = array(  
      '#title' => t('Voices'),
      //http://jsbin.com/gosaqihi/9/edit?js,console
    '#description' => t('Choose a persona'),    
    '#type' => 'select',
    '#align' => 'left',
    '#options' => array( '0.3' => 1, '0.6' => 2, '0.9'   => 3),
    '#required' => false,
    );  

/*

["Alex", "Agnes", "Albert", "Alice", "Alva", "Amelie", "Anna", "Bad News", "Bahh", "Bells", "Boing", "Bruce", "Bubbles", "Carmit", "Cellos", "Damayanti", "Daniel", "Deranged", "Diego", "Ellen", "Fiona", "Fred", "Good News", "Hysterical", "Ioana", "Joana", "Junior", "Kanya", "Karen", "Kathy", "Kyoko", "Laura", "Lekha", "Luciana", "Maged", "Mariska", "Mei-Jia", "Melina", "Milena", "Moira", "Monica", "Nora", "Paulina", "Pipe Organ", "Princess", "Ralph", "Samantha", "Sara", "Satu", "Sin-ji", "Tessa", "Thomas", "Ting-Ting", "Trinoids", "Veena", "Vicki", "Victoria", "Whisper", "Xander", "Yelda", "Yuna", "Zarvox", "Zosia", "Zuzana", "Google Deutsch", "Google US English", "Google UK English Female", "Google UK English Male", "Google español", "Google español de Estados Unidos", "Google français", "Google हिन्दी", "Google Bahasa Indonesia", "Google italiano", "Google 日本語", "Google 한국의", "Google Nederlands", "Google polski", "Google português do Brasil", "Google русский", "Google 普通话（中国大陆）", "Google 粤語（香港）", "Google 國語（臺灣）"]

*/

    $form['webspeech_tts_voice'] = array(  
      '#title' => t('Voices'),
      //http://jsbin.com/gosaqihi/9/edit?js,console
    '#description' => t('Choose a voice'),    
    '#type' => 'select',
    '#align' => 'left',
    '#options' => array( '0.3' => 1, '0.6' => 2, '0.9'   => 3),
    '#required' => false,
    );

/*

["Alex", "Agnes", "Albert", "Alice", "Alva", "Amelie", "Anna", "Bad News", "Bahh", "Bells", "Boing", "Bruce", "Bubbles", "Carmit", "Cellos", "Damayanti", "Daniel", "Deranged", "Diego", "Ellen", "Fiona", "Fred", "Good News", "Hysterical", "Ioana", "Joana", "Junior", "Kanya", "Karen", "Kathy", "Kyoko", "Laura", "Lekha", "Luciana", "Maged", "Mariska", "Mei-Jia", "Melina", "Milena", "Moira", "Monica", "Nora", "Paulina", "Pipe Organ", "Princess", "Ralph", "Samantha", "Sara", "Satu", "Sin-ji", "Tessa", "Thomas", "Ting-Ting", "Trinoids", "Veena", "Vicki", "Victoria", "Whisper", "Xander", "Yelda", "Yuna", "Zarvox", "Zosia", "Zuzana", "Google Deutsch", "Google US English", "Google UK English Female", "Google UK English Male", "Google español", "Google español de Estados Unidos", "Google français", "Google हिन्दी", "Google Bahasa Indonesia", "Google italiano", "Google 日本語", "Google 한국의", "Google Nederlands", "Google polski", "Google português do Brasil", "Google русский", "Google 普通话（中国大陆）", "Google 粤語（香港）", "Google 國語（臺灣）"]


*/

  $form['webspeech_tts_volume'] = array(
    '#title' => t('Volume'),
    '#description' => t('Set the playback volume'),    
    '#type' => 'select',
    '#align' => 'left',
    '#options' => array( '0.3' => 1, '0.6' => 2, '0.9'   => 3),
    '#required' => false,

  
    );

  $form['webspeech_tts_rate'] = array(  
  '#title' => t('Rate'),
  '#description' => t('Set the playback rate'),  
  '#type' => 'select',
  '#align' => 'left',
  '#options' => array( '0.3' => 'slow', '0.6' => 'regular', '0.9'  => 'fast'),

  );

  $form['webspeech_tts_pitch'] = array(   
  '#title' => t('Pitch'),
  '#description' => t('Set the playback pitch'),  
  '#type' => 'select',
  '#align' => 'left',
  '#options' => array( '0.6' => 'low', '1.3' => 'medium', '1.9'  => 'high'),  
    );



  return system_settings_form($form);




}
