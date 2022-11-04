#include "Cuadrado.hpp"


//Crear un cuadrado con los parametros de columna y fila
Cuadrado::Cuadrado(const sf::Vector2f &area, int row, int col, int idNumber)
        : sf::RectangleShape(area),
          row(row),
          col(col),
          idNumber(idNumber) {

}

Cuadrado::~Cuadrado() {

}

// getters
bool Cuadrado::getOccupied() {
    return occupied;
}

const int Cuadrado::getRow() {
    return row;
}

const int Cuadrado::getCol() {
    return col;
}

const int Cuadrado::getIdNumber() {
    return idNumber;
}

// setters
void Cuadrado::setOccupied(bool occupied) {
    this->occupied = occupied;
}