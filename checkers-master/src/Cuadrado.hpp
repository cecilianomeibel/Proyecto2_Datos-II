/*
*	The Cuadrado class represents an arbitrary square on the Tablero. It extends the sf::RectangleShape class.
*
*	The squares are ordered sequentialy; for example, Cuadrado 0 is in the 0th row and the 0th column,
*		and Cuadrado 63 is in the 8th row and the 8th column.
*
*	The checkerboard defines squares as having "boundaries." Boundaries are a range of coordinates (in pixels) that define the square's position on the board.
*/

#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <SFML/Graphics.hpp>
#include "Global.hpp"

class Cuadrado : public sf::RectangleShape {
private:
    const int row;
    const int col;
    const int idNumber;
    bool occupied; // T/F if the square is occupied by a checker
protected:
public:
    Cuadrado(const sf::Vector2f &, const int, const int, const int);

    ~Cuadrado();

    // getters
    const int getIdNumber();

    bool getOccupied();

    const int getRow();

    const int getCol();

    // setters
    void setOccupied(bool);

    void setIdNumber(int);
};

#endif