/*
*	This class represents a Jugador in the checker game.
*	Each player has a number (like player 1 or player 2). And they have boolean to determine 
*	whether or not the player is human controlled or computer controlled.
*	The player has a finite number of checker pieces in the game. They can use the checker 
*	pieces to make a jump or a simple move. They cannot jump their own checkers.
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Tablero.hpp"
#include "PiezaDama.hpp"
#include "Movimiento.hpp"
#include <vector>
#include <iostream>
#include <string>

//Clase Jugador
class Jugador {
    //Declaración de varialbes
private:
    const int number;
    bool turn;
    const bool isHuman;
    std::vector<PiezaDama *> checkers;
protected:
public:
    Jugador(const int, const bool);//constructor
    ~Jugador();

    int findCheckerIndex(const int &, const int &);

    int findCheckerIndex(const Cuadrado *);

    int *findJump(Cuadrado *, int, int, int, int);

    void deleteChecker(const int &);

    void deleteAllCheckers();

    void displayCheckers();

    void addChecker(PiezaDama *);

    // getters
    bool getTurn();

    int getCounter();

    const bool getIsHuman();

    const int getNumber();

    PiezaDama *getChecker(const int &);

    std::vector<PiezaDama *> &getCheckersVector();

    // setters
    void setTurn(const bool &);
};

#endif