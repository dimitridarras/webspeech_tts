<?

function webspeech_tts_admin_settings_form() {


  $form = array();  
  $form['webspeech_tts_types'] = array(
        '#title' => t('The content types to enable Webspeech TTS functionality on'),
        '#description' => t('On the specified node types, a Read Text Aloud button will appear'),    
        '#type' => 'checkboxes',    
        '#options' => node_type_get_names(),
        '#default_value' => variable_get('webspeech_tts_types',
       array()),  );  

 //lang_accent and $voice are either-or

 $lang_accent = array(

        'en-US' => t('English'), 
        'it-IT' => t('Italian'), 
        'sv-SE' => t('Swedish'), 
        'fr-FR' => t('French'), 
        'de-DE' => t('German'), 
        'il-IL' => t('Italian'), 
        'id-ID' => t('Indonesian'), 
        'en-GB' => t('English - British'), 
        'es-AR' => t('Spanish - Argentine'), 
        'nl-BE' => t('Dutch'), 
        'en-EN' => t('English - British'), 
        'es-ES' => t('Spanish - Spain'), 
        'ro-RO' => t('Romanian'), 
        'pt-PT' => t('Portuguese - Portugal'), 
        'th-TH' => t('Thai'), 
        'en-AU' => t('English - Australian'), 
        'ja-JP' => t('Japanese'), 
        'sk-SK' => t('Slovak'), 
        'hi-IN' => t('Hindi - India'), 
        'pt-BRt'=> t('Portuguese - Brazil'), 
        'ar-SA' => t('Arabic'), 
        'hu-HU' => t('Hungarian'),         
        'el-GR' => t('Greek'), 
        'ru-RU' => t('Russian'), 
        'en-IE' => t('English - Ireland'), 
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

  $form['webspeech_tts_lang_accent'] = array(
      '#type' => 'select',
      '#title' => t('Languages & Accents'),
      '#description' => t('Choose a language or accent'), 
      '#options' => $lang_accent,      
    );

     $voice_array = array(
        
        /* 'Google US English' => 'Google US English', 
        'Google Deutsch' => 'Google Deutsch', 
        'Google Español' => 'Google Español', 
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
        'Google US English' => t('Google US English'), 
        'Google UK English Female' => t('Google UK English Female'),   
        'Google UK English Female' => t('Google UK English Female'), 
        'Google UK English Male' => t('Google UK English Male'), 
        'Google UK English Male' => t('Google UK English Male'), 
        */
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
/*
    $form['webspeech_tts_voice'] = array(  
        '#title' => t('Voices'),
        //http://jsbin.com/gosaqihi/9/edit?js,console
        '#description' => t('Choose a persona'),    
        '#type' => 'select',
        '#align' => 'left',
        '#options' => $voice_array,
        '#required' => false,
    );  
*/

      $form['webspeech_tts_volume'] = array(
        '#title' => t('Volume'),
        '#description' => t('Set the playback volume'),    
        '#type' => 'select',
        '#align' => 'left',
        '#options' => array( '1' => "Default", '0.6' => "Soft", '0.3'   => "Wisper"),
        '#required' => false,
        );

        $form['webspeech_tts_rate'] = array(  
        '#title' => t('Rate'),
        '#description' => t('Set the playback rate'),  
        '#type' => 'select',
        '#align' => 'left',
        '#options' => array( '1' => 'Fast', '0.6' => 'Medium', '0.3'  => 'Glacial'),

      );

      $form['webspeech_tts_pitch'] = array(   
      '#title' => t('Pitch'),
      '#description' => t('Set the playback pitch'),  
      '#type' => 'select',
      '#align' => 'left',
      '#options' => array( '1' => 'Default', '2.0' => 'High', '0.3'  => 'Low'),  
        );

        return system_settings_form($form);


}
