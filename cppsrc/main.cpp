#include <napi.h>
#include "./headers/sound-mixer.hpp"

Napi::Object InitAll(Napi::Env env, Napi::Object exports)
{

	exports = SoundMixer::Init(env, exports);

	return exports;
}

NODE_API_MODULE(SoundMixer, InitAll);