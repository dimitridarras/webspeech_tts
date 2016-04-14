<?

function webspeech_tts_admin_settings_form() {


  $form = array();  
  $form['webspeech_tts_types'] = array(
        //just a placeholder - needs logic
        '#title' => t('The content types to enable Webspeech TTS functionality on'),
        '#description' => t('On the specified node types, a Read Text Aloud button will appear'),    
        '#type' => 'checkboxes',    
        '#options' => node_type_get_names(),
        '#default_value' => variable_get('webspeech_tts_types',
       array()),  );  

//$language = echo("<script language='javascript'>alert('foo');</script>");
//drupal_set_message(($language));
//http://stackoverflow.com/questions/4060545/how-do-i-capture-the-result-of-an-echo-into-a-variable-in-php
//Just don't think this is a good idea right now (using php to print JS array vals)

 $accents = array(
        'en-US' => t('English'), 
        'it-IT' => t('Italian'), 
        'sv-SE' => t('Swedish'), 
        'fr-CA' => t('French'), 
        't(German)' => "de-DE", 
        't(Italian)' => "he-IL", 
        'id' => "id-ID", 
        't(English - British)' => "en-GB", 
        't(Spanish)' => "es-AR", 
        't(Dutch)' => "nl-BE", 
        't(English)' => "en", 
        't(Romanian)' => "ro-RO", 
        't(Portuguese - Portugal)' => "pt-PT", 
        'th' => "th-TH", 
        't(English - Australian)' => "en-AU", 
        't(Japanese)' => "ja-JP", 
        'sk' => "sk-SK", 
        'hi' => "hi-IN", 
        't(Portuguese - Brazil)'=>  "pt-BR", 
        'ar' => "ar-SA", 
        't(Hungarian)' => "hu-HU", 
        'zh' => "zh-TW", 
        't(Greek)' => "el-GR", 
        't(Russian)' => "ru-RU", 
        'en' => "en-IE", 
        't(Spanish - Spain)' => "es-ES", 
        'nb' => "nb-NO", 
        't(Spanish - Mexico)' => "es-MX", 
        't(Danish)' => "da-DK", 
        't(Finish)' => "fi-FI", 
        't(Cantonese - Hong Kong)' => "zh-HK", 
        't(English - South Africa)' => "en-ZA", 
        't(French)' => "fr-FR", 
        't(Canotonese - China)' => "zh-CN", 
        't(English - India)' => "en-IN", 
        't(Netherlands)' => "nl-NL", 
        'tr' => "tr-TR", 
        'ko' => "ko-KR", 
        't(Polish)' => "pl-PL", 
        'cs' => "cs-CZ", 
        't(English - United States)' => "es-US",
      );



  $form['webspeech_tts_accents'] = array(
      '#type' => 'select',
      '#title' => t('Accents'),
      '#description' => t('Choose an accent'), 
      '#options' => $accents,      
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
