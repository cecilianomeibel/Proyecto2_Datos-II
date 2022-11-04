#include "Sonido.hpp"

using std::string;
using std::cout;
using std::endl;

Sonido::Sonido() {
}

Sonido::~Sonido() {
    cout << "Liberando espacio... ";
    for (unsigned int i = 0; i < soundBufferArray.size(); ++i) {
        soundArray[i]->stop();
        delete (soundArray[i]);
        delete (soundBufferArray[i]);
    }
    soundArray.clear();
    soundBufferArray.clear();
    cout << "OK" << endl;
}

//Permite dar acceso global a la instancia de SoundManaager
Sonido *Sonido::getSoundManager() {
    static Sonido singleton;
    return &singleton;
}

//Permite añadir el sonido para el juego
void Sonido::addSound(string fileName) {
    cout << "Cargando sonido: " << fileName << "...\n";
    sf::SoundBuffer *newSoundBuffer = new sf::SoundBuffer;
    newSoundBuffer->loadFromFile(fileName);
    soundBufferArray.push_back(newSoundBuffer);

    sf::Sound *newSound = new sf::Sound;
    newSound->setBuffer(*newSoundBuffer);
    soundArray.push_back(newSound);
}

//Permite reproducir el sonido
void Sonido::playSound(int n) {
    if (soundArray[n]->getStatus() != sf::Sound::Playing)
        soundArray[n]->play();
}

//Permite detener el sonido que se está reproduciendo
void Sonido::stopSound(int n) {
    if (soundArray[n]->getStatus() == sf::Sound::Playing)
        soundArray[n]->stop();
}
