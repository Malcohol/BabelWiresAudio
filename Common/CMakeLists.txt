SET( BABELWIRES_AUDIO_SRCS
	audioInit.cpp
	)
	
ADD_LIBRARY( BabelWiresAudio ${BABELWIRES_AUDIO_SRCS} )
# TODO: Shouldn't assume hierarchy
TARGET_INCLUDE_DIRECTORIES( BabelWiresAudio PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../.. ${CMAKE_CURRENT_SOURCE_DIR}/../../../.. )
IF( ALSA_FOUND )
	TARGET_LINK_LIBRARIES(BabelWiresAudio BabelWires_Alsa)
ENDIF( ALSA_FOUND )
