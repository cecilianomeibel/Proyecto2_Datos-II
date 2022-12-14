/* 
*	AI is used when the computer is controlling a player 
*	and we need to verify potential jumps, as well as the 
*	game state of a computer-controlled player.
*/

#ifndef AI_HPP
#define AI_HPP

#include <iostream>
#include <vector> // for vectors
#include "Jugador.hpp"

class AI {
private:
    int currentIndex;
    std::vector<int> *coords;
public:
    AI();

    ~AI();

    int getCurrentMoveIndex(Jugador *, Jugador *, Tablero *); // get the current index
    std::vector<int> *AI_Move(Jugador *, Jugador *, Tablero *);
};

#endif

