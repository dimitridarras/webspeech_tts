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

//$language = echo('<script language='javascript'>alert('foo');</script>');
//drupal_set_message(($language));
//http://stackoverflow.com/questions/4060545/how-do-i-capture-the-result-of-an-echo-into-a-variable-in-php
//Just don't think this is a good idea right now (using php to print JS array vals)

 $accents = array(
            'Google US English' => 'Google US English', 
    'Google UK English Female' => 'Google UK English Female',   
    'Google UK English Female' => 'Google UK English Female', 
    'Google UK English Male' => 'Google UK English Male', 
    'Google UK English Male' => 'Google UK English Male', 
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
        //'zh' => 'zh-TW', What is this?
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

    $voices = array(

    'Alex' => 'Alex', 
    'Agnes' => 'Agnes', 
    'Albert' => 'Albert', 
    'Alice' => 'Alice', 
    'Alva' => 'Alva', 
    'Amelie' => 'Amelie', 
    'Anna' => 'Anna', 
    'Bad News' => 'Bad News', 
    'Bahh' => 'Bahh', 
    'Bells' => 'Bells', 
    'Boing' => 'Boing', 
    'Bruce' => 'Bruce', 
    'Bubbles' => 'Bubbles', 
    'Carmit' => 'Carmit', 
    'Cellos' => 'Cellos', 
    'Damayanti' => 'Damayanti', 
    'Daniel' => 'Daniel', 
    'Deranged' => 'Deranged', 
    'Diego' => 'Diego', 
    'Ellen' => 'Ellen', 
    'Fiona' => 'Fiona', 
    'Fred' => 'Fred', 
    'Good News' => 'Good News', 
    'Hysterical' => 'Hysterical', 
    'Ioana' => 'Ioana', 
    'Joana' => 'Joana', 
    'Junior' => 'Junior', 
    'Kanya' => 'Kanya', 
    'Karen' => 'Karen', 
    'Kathy' => 'Kathy', 
    'Kyoko' => 'Kyoko', 
    'Laura' => 'Laura', 
    'Lekha' => 'Lekha', 
    'Luciana' => 'Luciana', 
    'Maged' => 'Maged', 
    'Mariska' => 'Mariska', 
    'Mei-Jia' => 'Mei-Jia', 
    'Melina' => 'Melina', 
    'Milena' => 'Milena', 
    'Moira' => 'Moira', 
    'Monica' => 'Monica', 
    'Nora' => 'Nora', 
    'Paulina' => 'Paulina', 
    'Pipe Organ' => 'Pipe Organ', 
    'Princess' => 'Princess', 
    'Ralph' => 'Ralph', 
    'Samantha' => 'Samantha', 
    'Sara' => 'Sara', 
    'Satu' => 'Satu', 
    'Sin-ji' => 'Sin-ji', 
    'Tessa' => 'Tessa', 
    'Thomas' => 'Thomas', 
    'Ting-Ting' => 'Ting-Ting', 
    'Trinoids' => 'Trinoids', 
    'Veena' => 'Veena', 
    'Vicki' => 'Vicki', 
    'Victoria' => 'Victoria', 
    'Whisper' => 'Whisper', 
    'Xander' => 'Xander', 
    'Yelda' => 'Yelda', 
    'Yuna' => 'Yuna', 
    'Zarvox' => 'Zarvox', 
    'Zosia' => 'Zosia', 
    'Zuzana' => 'Zuzana', 
    );

    $form['webspeech_tts_voices'] = array(  
      '#title' => t('Voices'),
      //http://jsbin.com/gosaqihi/9/edit?js,console
    '#description' => t('Choose a persona'),    
    '#type' => 'select',
    '#align' => 'left',
    '#options' => $voices,
    '#required' => false,
    );  

    $translated_lang = array(

    'Google Deutsch' => 'Google Deutsch', 
    'Google español' => 'Google español', 
    'Google español de Estados Unidos' => 'Google español de Estados Unidos', 
    'Google français' => 'Google français', 
    'Google हिन्दी' => 'Google हिन्दी', 
    'Google Bahasa Indonesia' => 'Google Bahasa Indonesia', 
    'Google italiano' => 'Google italiano', 
    'Google 日本語' => 'Google 日本語', 
    'Google 한국의' => 'Google 한국의', 
    'Google Nederlands'  => 'Google Nederlands', 
    'Google polski' => 'Google polski', 
    'Google português do Brasil'  => 'Google português do Brasil', 
    'Google русский'  => 'Google русский', 
    'Google 普通话（中国大陆）'  => 'Google 普通话（中国大陆）', 
    'Google 粤語（香港）'  => 'Google 粤語（香港）', 
    'Google 國語（臺灣）'  => 'Google 國語（臺灣）',
      );


    $form['webspeech_tts_translated_lang'] = array(  
      '#title' => t('Translated Lanagues'),
      //http://jsbin.com/gosaqihi/9/edit?js,console
    '#description' => t('Choose a language - limited support'),    
    '#type' => 'select',
    '#align' => 'left',
    '#options' => $translated_lang,
    '#required' => false,
    );


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
