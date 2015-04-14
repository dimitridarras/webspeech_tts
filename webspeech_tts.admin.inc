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
        'de-DE' => t('German'), 
        'he-IL' => t('Italian'), 
        'id-ID' => t('Indonesian'), 
        'en-GB' => t('English - British'), 
        'es-AR' => t('Spanish - Argentine'), 
        'nl-BE' => t('Dutch'), 
        'en' => t('English'), 
        'ro-RO' => t('Romanian'), 
        'pt-PT' => t('Portuguese - Portugal'), 
        'th-TH' => t('Thai'), 
        'en-AU' => t('English - Australian'), 
        'ja-JP' => t('Japanese'), 
        'sk-SK' => t('Slovak'), 
        'hi-IN' => t('Hindi - India'), 
        'pt-BRt'=>  t('Portuguese - Brazil'), 
        'ar-SA' => t('Arabic'), 
        'hu-HU' => t('Hungarian'), 
        //'zh' => "zh-TW", What is this?
        'el-GR' => t('Greek'), 
        'ru-RU' => t('Russian'), 
        'en-IE' => t('English - Ireland'), 
        'es-ES' => t('Spanish - Spain'), 
        'nb-NO' => t('Norwegian Bokmål'), 
        'es-MX' => t('Spanish - Mexico'), 
        'da-DK' => t('Danish'), 
        'fi-FI' => t('Finish'), 
        'zh-HK' => t('Cantonese - Hong Kong'), 
        'en-ZA' => t('English - South Africa'), 
        'fr-FR' => t('French'),
        'zh-CN' => t('Canotonese - China'),
        'nl-NL' => t('Netherlands'),
        'tr-TR' => t('Turkish'), 
        'ko-KRk'=> t('Korean'), 
        'pl-PL' => t('Polish'), 
        'cs-CZ' => t('Czech'), 
        'es-US' => t('English - United States'),
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

$voices = array(

"Alex", 
"Agnes", 
"Albert", 
"Alice", 
"Alva", 
"Amelie", 
"Anna", 
"Bad News", 
"Bahh", 
"Bells", 
"Boing", 
"Bruce", 
"Bubbles", 
"Carmit", 
"Cellos", 
"Damayanti", 
"Daniel", 
"Deranged", 
"Diego", 
"Ellen", 
"Fiona", 
"Fred", 
"Good News", 
"Hysterical", 
"Ioana", 
"Joana", 
"Junior", 
"Kanya", 
"Karen", 
"Kathy", 
"Kyoko", 
"Laura", 
"Lekha", 
"Luciana", 
"Maged", 
"Mariska", 
"Mei-Jia", 
"Melina", 
"Milena", 
"Moira", 
"Monica", 
"Nora", 
"Paulina", 
"Pipe Organ", 
"Princess", 
"Ralph", 
"Samantha", 
"Sara", 
"Satu", 
"Sin-ji", 
"Tessa", 
"Thomas", 
"Ting-Ting", 
"Trinoids", 
"Veena", 
"Vicki", 
"Victoria", 
"Whisper", 
"Xander", 
"Yelda", 
"Yuna", 
"Zarvox", 
"Zosia", 
"Zuzana", 
"Google Deutsch", 
"Google US English", 
"Google UK English Female", 
"Google UK English Male", 
"Google español", 
"Google español de Estados Unidos", 
"Google français", 
"Google हिन्दी", 
"Google Bahasa Indonesia", 
"Google italiano", 
"Google 日本語", 
"Google 한국의", 
"Google Nederlands", 
"Google polski", 
"Google português do Brasil", 
"Google русский", 
"Google 普通话（中国大陆）", 
"Google 粤語（香港）", 
"Google 國語（臺灣）"




  );




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
