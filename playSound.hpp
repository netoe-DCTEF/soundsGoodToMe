#include <windows.h>
#include <string>

using std::string;


/*
    To use the audiofile to play, put the complete path in the parameter!
    Example, calling the function:

    soundsGoodToMe::PlaySound::SoundToPlay("C:\\folder\\file.wav");
*/

namespace soundsGoodToMe{
    class PlaySound{
        public:
            void SoundToPlay(string __path);
            void SoundToPlayExampleDocs();
    }
}

void soundsGoodToMe::PlaySound::SoundToPlay(string __path){
    PlaySound("__path", NULL, SND_SYNC | SND_NODEFAULT);
} 

void soundsGoodToMe::PlaySound::SoundToPlayExampleDocs(){
    PlaySound("C:\\SOUNDS\\BELLS.WAV", NULL, SND_SYNC); /*It'll play the sound. If the path is invalid, it'll play the default sound of windows!*/
}    

