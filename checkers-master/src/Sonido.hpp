/*
*	This is a class that manages sound resources (like playback and stuff).
*	Note that the sound_resources enum in Global.hpp must synchronize with the 
*	ogg files that are loaded by the Sonido (for example, when they're loaded in the
*	Game class).
*	The format of this class is taken from Cirrus Minor's WitchBlast game.
*	(Search Github for WitchBlast).
*/

#ifndef SOUNDMANAGER_HPP
#define SOUNDMANAGER_HPP

#include <SFML/Audio.hpp> // for sounds
#include <iostream>
#include <string> // for strings

//Clase Sonido
class Sonido {
    //Declaración de variables
private:
    Sonido();

    ~Sonido();

    /* SFML sound buffer and sound classes work like sprites,
    where sound buffer is the texture and sound is the sprite */
    std::vector<sf::SoundBuffer *> soundBufferArray;
    std::vector<sf::Sound *> soundArray;
public:
    static Sonido *getSoundManager();

    void addSound(std::string);

    void playSound(int);

    void stopSound(int);
};

#endif
