/**
 * Initialize and deinitialize support for audio.
 *
 * (C) 2021 Malcolm Tyrrell
 * 
 * Licensed under the GPLv3.0. See LICENSE file.
 **/
#include <BabelWiresAudio/Common/audioInit.hpp>

#include <BabelWiresAudio/Alsa/Source/alsaInit.hpp>

void babelwires::init_audio(AudioInterfaceRegistry& registry) {
    #ifdef BABELWIRES_AUDIO_ALSA
        babelwires_alsa::init_audio(registry);
    #endif
}

void babelwires::shutdown_audio(AudioInterfaceRegistry& registry) {
    #ifdef BABELWIRES_AUDIO_ALSA
        babelwires_alsa::shutdown_audio(registry);
    #endif
}
