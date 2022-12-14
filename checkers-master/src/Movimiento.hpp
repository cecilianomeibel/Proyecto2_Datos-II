/* 
*	The Movimiento class is a static class used for movement validation of checker pieces.
*	We check things like whether or not a checker is moving over a friendly checker, if
*	a distance between current and future squares is within a moveable distance for both
*	king and pawn checkers, and whether or not a jump is valid. 
*	There are 2 types of jumps here: jumpByChecker and jumpBySquare.
*	JumpByChecker works when the player selects the checker they want to jump over.
*	JumpBySquare works when the player selects the square they want to land on during a jump.
*	We also check whether or not a given checker has the capability to perform a jump (hasJump).
*/

#ifndef MOVEABLE_HPP
#define MOVEABLE_HPP

#include "Tablero.hpp"
#include "PiezaDama.hpp"
#include "Jugador.hpp"
#include <vector> // for vector
#include <cmath> // for absolute function

class Movimiento {
private:
protected:
public:
    static bool moveable(PiezaDama *, Cuadrado *, Cuadrado *);

    static bool moveable(std::vector<PiezaDama *>, Cuadrado *, Cuadrado *, const int &);

    static bool moveableDistance(const int &, const int &, const int &, const int &);

    static bool friendly(const std::vector<PiezaDama *> &, Cuadrado *);

    static bool friendly(const std::vector<PiezaDama *> &, Cuadrado *, Cuadrado *);

    static int findGeneralDirection(Cuadrado *, Cuadrado *);

    static bool jumpBySquare(std::vector<PiezaDama *>, Cuadrado *, Cuadrado *, Cuadrado *, const int &);

    static bool jumpByChecker(std::vector<PiezaDama *>, Cuadrado *, Cuadrado *, Cuadrado *, const int &);

    static bool hasJump(PiezaDama *, const std::vector<PiezaDama *> &,
                        Tablero *&); // validation of a single checker's ability to jump
    static bool
    hasMove(PiezaDama *, const std::vector<PiezaDama *> &, Tablero *&); // when the AI needs to find a move
    static std::vector<int> *
    findJump(PiezaDama *, const std::vector<PiezaDama *> &, Tablero *&); // when the AI needs to find a jump
    static std::vector<int> *findMove(PiezaDama *, Tablero *&); // when the AI needs to find a move
};

#endif