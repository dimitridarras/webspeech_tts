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

 // https://www.deckfifty.com/blog/2012-11/drupal-form-api-conditional-fields

    $form['voice_or_lang+only'] = array(
    '#title' => t('Select either a voice or language/accent'),
    '#type' => 'radios',
    '#options' => array('voice' => t('Voice'), 'lang_only' => t('Language')),
    '#default_value' => variable_get('voice_or_lang+only'), 

  );

 $lang_only = array(
        'en-US' => t('English - US'),
        'en-GB' => t('English'),
        'it-IT' => t('Italian'), 
        'fr-FR' => t('French'),  
        'de-DE' => t('German'), 
        'es-ES' => t('Spanish'), 
        'pt-PT' => t('Portuguese - Portugal'), 
        'ja-JP' => t('Japanese'), 
      );

  $form['webspeech_tts_lang_only'] = array(
      '#default_value' => variable_get('webspeech_tts_lang_only'),   
      // '#value_callback' => variable_set('webspeech_tts_voice','0'),     
      '#type' => 'select',
      //'#name' => 'the_lang',
      '#align' => 'left',
      '#title' => t('Language'),
      '#description' => t('Choose a language'), 
      '#options' => $lang_only,  
      '#states' => array(
        'visible' => array(':input[name="voice_or_lang+only"]' => 
                        array('value' => 'lang_only'),
                            ),
      ),
      

    );

     $voice_array = array(      
        'Google-US-English' => 'Google US English', 
        'Google UK English Female' => t('Google UK English Female'),   
        'Google UK English Female' => t('Google UK English Female'), 
        'Google UK English Male' => t('Google UK English Male'), 
        'Google UK English Male' => t('Google UK English Male'),       
        'Albert' => 'Albert', 
        'Bad News' => 'Bad News', 
        'Bahh' => 'Bahh', 
        'Bells' => 'Bells', 
        'Boing' => 'Boing', 
        'Bruce' => 'Bruce', 
        'Bubbles' => 'Bubbles',  
        'Cellos' => 'Cellos', 
        'Daniel' => 'Daniel', 
        'Deranged' => 'Deranged', 
        'Fiona' => 'Fiona', 
        'Fred' => 'Fred', 
        'Good News' => 'Good News', 
        'Hysterical' => 'Hysterical', 
        'Karen' => 'Karen', 
        'Kathy' => 'Kathy', 
        'Moira' => 'Moira', 
        'Pipe Organ' => 'Pipe Organ', 
        'Princess' => 'Princess', 
        'Ralph' => 'Ralph', 
        'Samantha' => 'Samantha', 
        'Tessa' => 'Tessa', 
        'Trinoids' => 'Trinoids', 
        'Veena' => 'Veena', 
        'Vicki' => 'Vicki', 
        'Victoria' => 'Victoria', 
        'Whisper' => 'Whisper', 
        'Zarvox' => 'Zarvox', 
    );

    $form['webspeech_tts_voice'] = array(  
        '#title' => t('Voice and Accent'),
        //http://jsbin.com/gosaqihi/9/edit?js,console
        '#description' => t('Choose a voice or acccent'),    
        //'#value_callback' =>variable_set('webspeech_tts_lang_only','en-US'),              
        '#default_value' => variable_get('webspeech_tts_voice'),  

        '#type' => 'select',
        '#align' => 'right',
        '#options' => $voice_array,
        '#states' => array(
         'visible' => array(':input[name="voice_or_lang+only"]' => array('value' => 'voice'),            
         ),

   ),
    
    );  

      $form['webspeech_tts_volume'] = array(
        '#title' => t('Volume'),
        '#description' => t('Set the playback volume'),    
        '#type' => 'select',
        '#align' => 'left',
        '#options' => array( '1' => "Default", '0.6' => "Soft", '0.3'   => "Wisper"),
        '#required' => false,
        '#default_value' => variable_get('webspeech_tts_volume'), 
        );

        $form['webspeech_tts_rate'] = array(  
        '#title' => t('Rate'),
        '#description' => t('Set the playback rate'),  
        '#type' => 'select',
        '#align' => 'left',
        '#options' => array( '1' => 'Fast', '0.6' => 'Medium', '0.3'  => 'Glacial'),
        '#default_value' => variable_get('webspeech_tts_rate'),         

        );

        $form['webspeech_tts_pitch'] = array(   
        '#title' => t('Pitch'),
        '#description' => t('Set the playback pitch'),  
        '#type' => 'select',
        '#align' => 'left',
        '#options' => array( '1' => 'Default', '2.0' => 'High', '0.3'  => 'Low'), 
        '#default_value' => variable_get('webspeech_tts_pitch'),       
          );

        return system_settings_form($form);

}
