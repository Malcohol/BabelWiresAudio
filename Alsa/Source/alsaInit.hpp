/**
 * Initialize and deinitialize support for ALSA (Advanced Linux Sound System).
 *
 * (C) 2021 Malcolm Tyrrell
 * 
 * Licensed under the GPLv3.0. See LICENSE file.
 **/

#pragma once

namespace babelwires {
    class AudioInterfaceRegistry;
}

namespace babelwires_alsa {

    // TODO: Could this use the same shape as the "libRegistration" files in other libs?

    void init_audio(babelwires::AudioInterfaceRegistry& registry);

    void shutdown_audio(babelwires::AudioInterfaceRegistry& registry);

} // namespace babelwires_alsa
