
#pragma once
#include <SDL2/SDL_mixer.h>
#include <string>

namespace pu::music
{
    typedef Mix_Music *Music;

    Music Open(std::string Path);
    void Play(Music Mus, int Loops);
    void PlayWithFadeIn(Music Mus, int Loops, int Milli);
    bool IsPlaying();
    void Pause();
    void Resume();
    void SetVolume(int Volume);
    int GetVolume();
    void FadeOut(int Milli);
    void Rewind();
    void Stop();
    void SetPosition(double Sec);
    void Delete(Music Mus);
}