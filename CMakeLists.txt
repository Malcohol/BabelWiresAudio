FIND_PACKAGE( ALSA )
IF( ALSA_FOUND )
    ADD_COMPILE_DEFINITIONS(BABELWIRES_AUDIO)
    ADD_COMPILE_DEFINITIONS(BABELWIRES_AUDIO_ALSA)
    ADD_SUBDIRECTORY( Alsa/Source )
    ADD_SUBDIRECTORY( Alsa/Tests)
ELSE()
    MESSAGE(NOTICE "ALSA libs not found. Will not use ALSA for audio.")
ENDIF( ALSA_FOUND )

ADD_SUBDIRECTORY(Common)
