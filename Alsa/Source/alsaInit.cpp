/**
 * Initialize and deinitialize support for ALSA (Advanced Linux Sound System).
 *
 * (C) 2021 Malcolm Tyrrell
 * 
 * Licensed under the GPLv3.0. See LICENSE file.
 **/

#include <BabelWiresAudio/Alsa/Source/alsaInit.hpp>

#include <BabelWiresAudio/Alsa/Source/alsaAudioInterface.hpp>

#include <Common/Audio/audioInterface.hpp>

void babelwires_alsa::init_audio(babelwires::AudioInterfaceRegistry& registry) {
    registry.addEntry(std::make_unique<AlsaAudioInterface>());
}

void babelwires_alsa::shutdown_audio(babelwires::AudioInterfaceRegistry& registry) {}
