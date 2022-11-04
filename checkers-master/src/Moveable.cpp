#include "Moveable.hpp"

using std::vector;
using std::abs;


/**Determina si la pieza checker está haciendo un moviendo valido
 * Se verifica primero si al cuadro donde se está moviendo la pieza hay una pieza enemiga.
 * Se verifica que alguno de las dos clases que contienen al jugador humano y jugador maquina, tenga un rey.
 * Se verifica que la distancia sea valida para mover la pieza, en este caso una cuadro a la vez
 * */
bool Moveable::moveable(std::vector<Checkerpiece*> checkers, Square* current, Square* future, const int& currentIndex)
{
    if(friendly(checkers, future))
        return false;

    if(static_cast<unsigned>(currentIndex) < checkers.size())
    {
        // en caso de que un rey se este moviendo
        if(checkers.at(currentIndex)->getKing())
        {
            // movimiento en la tabla actual hasta el siguiente seguirá manteniendo el mismo color
            if(current->getFillColor() == future->getFillColor())
            {
                // asegurar que la distancia movible este dentro de un rango valido
                if(moveableDistance(static_cast<int>(current->getPosition().x), static_cast<int>(current->getPosition().y),
                                    static_cast<int>(future->getPosition().x), static_cast<int>(future->getPosition().y)))
                    return true;
                else
                    return false;
            }
            else
                return false;
        }

            // caso contrario, se está moviendo un peón
        else
        {
            // movimiento en la tabla actual hasta el siguiente seguirá manteniendo el mismo color
            if(current->getFillColor() == future->getFillColor())
            {
                // caso: Rey en la columna 0, es decir, al norte de la tabla
                if(checkers.at(currentIndex)->getKingRow() == KING_ROW_0)
                {
                    // El peón se encuentra en la fila 0, por lo que debe de disminuir en las coordenadas.
                    if(current->getPosition().y > future->getPosition().y)
                    {
                        if(moveableDistance((int) current->getPosition().x, (int) current->getPosition().y, (int) future->getPosition().x, (int) future->getPosition().y))
                            return true;
                        else
                            return false;
                    }
                    else
                        return false;
                }
                    // caso: el rey se encuentra en la fila 7.
                else if(checkers[currentIndex]->getKingRow() == KING_ROW_7)
                {
                    // el peón se encuentra en la fila 7, por lo que se debe de incrementar en las coordenadas
                    if(current->getPosition().y < future->getPosition().y)
                    {
                        if(moveableDistance((int) current->getPosition().x, (int) current->getPosition().y, (int) future->getPosition().x, (int) future->getPosition().y))
                            return true;
                        else
                            return false;
                    }
                    else
                        return false;
                }
                else
                    return false;
            }
            else
                return false;
        }
    }
    else
        return false; // el valor por defecto que retorna es falso
}

// overloaded moveable which will directly check to make sure the future square isn't occupied
// Se encarga de que el siguiente cuadro no este ocupado.
bool Moveable::moveable(Checkerpiece* checker, Square* current, Square* future)
{
    // permite ver si el espacio no ha sido ocupado
    if(future->getOccupied())
        return false;
    else if(checker->getKing()) // el rey está siendo movido.
    {
        // movimiento en la tabla actual hasta el siguiente seguirá manteniendo el mismo color
        if(current->getFillColor() == future->getFillColor())
        {
            // no necesita verificar adelante o hacia atras en la condición de una pieza rey
            if(moveableDistance((int) current->getPosition().x, (int) current->getPosition().y, (int) future->getPosition().x, (int) future->getPosition().y))
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else // en este caso el peón está siendo movido
    {
        // movimiento en la tabla actual hasta el siguiente seguirá manteniendo el mismo color
        if(current->getFillColor() == future->getFillColor())
        {
            // el movimiento unico del peón es para adelante, donde se define de que equipo es el peón
            if(checker->getKingRow() == KING_ROW_0)
            {
                // el peón se dirigue hacia la fila 0, por lo que en las coordenadas de la pantalla disminuye
                if(current->getPosition().y > future->getPosition().y)
                {
                    if(moveableDistance((int) current->getPosition().x, (int) current->getPosition().y, (int) future->getPosition().x, (int) future->getPosition().y))
                        return true;
                    else
                        return false;
                }
                else
                    return false;
            }
                // Este peón solo puede bajar, es decir, que la coordenada aumenta en la pantalla
            else if(checker->getKingRow() == KING_ROW_7)
            {
                // el peón se dirige a la fila 7, por lo que las coordenadas en la pantalla aumnentan
                if(current->getPosition().y < future->getPosition().y)
                {
                    if(moveableDistance((int) current->getPosition().x, (int) current->getPosition().y, (int) future->getPosition().x, (int) future->getPosition().y))
                        return true;
                    else
                        return false;
                }
                else
                    return false;
            }
            else
                return false;
        }
        else
            return false;
    }
}

// Función auxiliar que comprueba la distancia entre el presente y el futuro en relación con el desplazamiento.
bool Moveable::moveableDistance(const int& currentX, const int& currentY, const int& futureX, const int& futureY)
{
    if((abs(currentX - futureX) <= XOFFSET) && (futureX <= (XOFFSET * SQUARES_HORIZONTAL)) && (futureX >= 0))
        if((abs(currentY - futureY) <= YOFFSET) && (futureY <= (YOFFSET * SQUARES_VERTICAL)) && (futureY >= 0))
            return true; // la distancia es movible
    return false; // la distancia es no movible
}

// encontrar la dirección general del actual en relación con el futuro (en términos de un círculo unitario de 2 dimensiones)
int Moveable::findGeneralDirection(Square* current, Square* future)
{
    if((current->getPosition().x < future->getPosition().x) && (current->getPosition().y == future->getPosition().y))
        return 0; // general direction is 0 degrees towards the right
    else if((current->getPosition().x > future->getPosition().x) && (current->getPosition().y == future->getPosition().y))
        return 180; // general direction is 180 degrees towards the left
    else if((current->getPosition().x == future->getPosition().x) && (current->getPosition().y < future->getPosition().y))
        return 270; // general direction is 270 degrees straight downwards
    else if((current->getPosition().x == future->getPosition().x) && (current->getPosition().y > future->getPosition().y))
        return 90; // general direction is 90 degrees straight upwards
    else if((current->getPosition().x < future->getPosition().x) && (current->getPosition().y > future->getPosition().y))
        return 45; // general direction is 45 degrees upwards and to the right
    else if((current->getPosition().x < future->getPosition().x) && (current->getPosition().y < future->getPosition().y))
        return 315; // general direction is 315 degrees downwards and to the right
    else if((current->getPosition().x > future->getPosition().x) && (current->getPosition().y > future->getPosition().y))
        return 135; // general direction is 135 degrees upwards and to the left
    else if((current->getPosition().x > future->getPosition().x) && (current->getPosition().y < future->getPosition().y))
        return 225; // general direction is 225 degrees downwards and to the left
    else return -1;
}

/**
 * jumpBySquare: verifica si el jugador puede realizar un salto si escoge algún cuadro para moverse.
 * El siguiente cuadro es el cuadro donde está destinado a saltar pero este debe estar desocupado.
 * Cuadro temporal es el cuadro de en medio por lo que si deberia de estar ocupado.
 * Primero verificar si el salto del jugador no cae encima de un pieza aliada
 * Se verifica la distancia entre el cuadro actual al temporal para seguir al cudro final/siguiente llamando a la metodo moveable()
 * */
bool Moveable::jumpBySquare(std::vector<Checkerpiece*> checkers, Square* current, Square* future, Square* temp, const int& currentIndex)
{
    if(friendly(checkers, temp, future))
        return false;
    if(temp->getOccupied())
        if(moveable(checkers, current, temp, currentIndex)) // checks if current->temp is moveable
            if(moveable(checkers, temp, future, currentIndex)) // checks if temp->future is moveable
                return true;
    return false;
}


/**
 * jumpByChecker: verifica si el jugador puede realizar un salto si escoge algún cuadro para moverse.
 * El siguiente cuadro es el cuadro donde está destinado a saltar pero este debe estar desocupado.
 * Cuadro temporal es el cuadro de en medio por lo que si deberia de estar ocupado.
 * Primero verificar si el salto del jugador no cae encima de un pieza aliada
 * Se verifica la distancia entre el cuadro actual al temporal para seguir al cudro final/siguiente llamando a la metodo moveable()
 * */

bool Moveable::jumpByChecker(std::vector<Checkerpiece*> checkers, Square* current, Square* future, Square* temp, const int& currentIndex)
{
    if(friendly(checkers, temp, future))
        return false;
    if(!temp->getOccupied())
        if(moveable(checkers, future, temp, currentIndex)) // checks if current->temp is moveable
            if(moveable(checkers, current, future, currentIndex)) // checks if temp->future is moveable
                return true;
    return false;
}

/*
*	We check if the current checker is trying to move over a friendly checker by scanning the temp/future square's
*	alongside every other checker that the player has on the board to see if their positions match.
*	If there's a match we return true. Return false otherwise.
*/

/**
 * Verificamos si la ficha actual está tratando de pasar sobre una ficha aliada escaneando el cuadro temporal/futuro
 * junto con cualquier otra ficha que el jugador tenga en el tablero para ver si sus posiciones coinciden.
 * Si hay una coincidencia, devolvemos verdadero. Devuelve false en caso contrario.
 * */
bool Moveable::friendly(const vector<Checkerpiece*>& checkers, Square* temp, Square* future)
{
    vector<Checkerpiece*>::const_iterator it;
    for(it = checkers.begin(); it != checkers.end(); ++it)
        if((*it)->getPosition() == temp->getPosition() || (*it)->getPosition() == future->getPosition())
            return true;
    return false;
}

bool Moveable::friendly(const vector<Checkerpiece*>& checkers, Square* future)
{
    vector<Checkerpiece*>::const_iterator it;
    for(it = checkers.begin(); it != checkers.end(); ++it)
        if((*it)->getPosition() == future->getPosition())
            return true;
    return false;
}

/**
 * La función hasJump determina si la ficha activa en juego puede saltar. Podemos ver las fichas enemigas para ver si una es saltable por la ficha activa.
 * Primero comprobando si la ficha activa es el rey, si no es un rey, verificamos qué fila de rey tiene,
 * y luego iteramos a través de varios casos para ver si el verificador activo puede
 * aterrizar un salto sobre el enemigo (asegurándose de que el espacio de aterrizaje esté desocupado).
 * Asumimos que la ficha activa no está dentro de la lista de fichas enemigas.
 * También está el error de salto de la esquina del gatito (documentación en Checkerboard.hpp) para los casos 135, 225.
 * */
bool Moveable::hasJump(Checkerpiece* checker, const vector<Checkerpiece*>& enemy, Checkerboard*& tempBoard)
{
    Square* future;
    int futureX, futureY;
    vector<Checkerpiece*>::const_iterator it;
    for(it = enemy.begin(); it != enemy.end(); ++it)
    {
        if(!checker->getKing()) // test only 2 possible jumps
        {
            if(checker->getKingRow() == KING_ROW_7) // the current check is moving southward
            {
                if((*it)->getPosition().x != 0 && abs(checker->getPosition().x - XOFFSET) == (*it)->getPosition().x
                   && (checker->getPosition().y  + YOFFSET) == (*it)->getPosition().y) // first check 225 degrees ( down and to the left )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) abs(checker->getPosition().x - (2*XOFFSET));
                    futureY = (int) checker->getPosition().y + (2*YOFFSET);
                    // now see if the landing square is occupied
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                        return true; // can jump
                }
                else if((checker->getPosition().x + XOFFSET) == (*it)->getPosition().x
                        && (checker->getPosition().y + YOFFSET) == (*it)->getPosition().y) // now check 315 degrees ( down and to the right )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) checker->getPosition().x + (2*XOFFSET);
                    futureY = (int) checker->getPosition().y + (2*YOFFSET);
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                        return true; // can jump
                }
            }
            else // the current checker is moving northward up the board
            {
                if((*it)->getPosition().y != 0 && (checker->getPosition().x + XOFFSET) == (*it)->getPosition().x
                   && abs(checker->getPosition().y - YOFFSET) == (*it)->getPosition().y) // first check 45 degrees ( up and to the right )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) checker->getPosition().x + (2*XOFFSET);
                    futureY = (int) abs(checker->getPosition().y - (2*YOFFSET));
                    // now see if the landing square is occupied
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                        return true; // can jump
                }
                else if((*it)->getPosition().y != 0 && (*it)->getPosition().x != 0 && abs(checker->getPosition().x - XOFFSET) == (*it)->getPosition().x
                        && std::abs(checker->getPosition().y - YOFFSET) == (*it)->getPosition().y) // now check 135 degrees ( up and to the left )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) abs(checker->getPosition().x - (2*XOFFSET));
                    futureY = (int) abs(checker->getPosition().y - (2*YOFFSET));
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                        return true; // can jump
                }
            }
        }
        else // test all 4 possible jumps because we're dealing with a king checker
        {
            if((*it)->getPosition().x != 0 && checker->getPosition().x != 0 && std::abs(checker->getPosition().x - XOFFSET) == (*it)->getPosition().x
               && (checker->getPosition().y  + YOFFSET) == (*it)->getPosition().y) // first check 225 degrees ( down and to the left )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) std::abs(checker->getPosition().x - (2*XOFFSET));
                futureY = (int) checker->getPosition().y + (2*YOFFSET);
                // now see if the landing square is occupied
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                    return true; // can jump
            }
            else if((checker->getPosition().x + XOFFSET) == (*it)->getPosition().x
                    && (checker->getPosition().y + YOFFSET) == (*it)->getPosition().y) // now check 315 degrees ( down and to the right )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) checker->getPosition().x + (2*XOFFSET);
                futureY = (int) checker->getPosition().y + (2*YOFFSET);
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                    return true; // can jump
            }
            else if((*it)->getPosition().y != 0 && (checker->getPosition().x + XOFFSET) == (*it)->getPosition().x
                    && std::abs(checker->getPosition().y - YOFFSET) == (*it)->getPosition().y) // first check 45 degrees ( up and to the right )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) checker->getPosition().x + (2*XOFFSET);
                futureY = (int) std::abs(checker->getPosition().y - (2*YOFFSET));
                // now see if the landing square is occupied
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                    return true; // can jump
            }
            else if((*it)->getPosition().y != 0 && (*it)->getPosition().x != 0 && checker->getPosition().x != 0
                    && std::abs(checker->getPosition().x - XOFFSET) == (*it)->getPosition().x
                    && std::abs(checker->getPosition().y - YOFFSET) == (*it)->getPosition().y) // now check 135 degrees ( up and to the left )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) abs(checker->getPosition().x - (2*XOFFSET));
                futureY = (int) abs(checker->getPosition().y - (2*YOFFSET));
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                    return true; // can jump
            }
        }
    }
    return false;
}

/*
*	Similar to hasJump, we look to see if the active checker can jump,
*	but instead of returning a boolean, we return the coords of
*	the current checker, the enemy checker that we're 
*	jumping over, and where we'll land (futureX/Y), 
*	(in that order, so coords[0],coords[1] = currentX, currentY).
*/

/**
 * Similar a hasJump, buscamos para ver si el verificador activo puede saltar,
 * pero en lugar de devolver un valor booleano, devolvemos las coordenadas de
 * la ficha actual, la ficha enemiga que estamos
 * saltando y donde aterrizaremos (futuroX/Y),
 * (en ese orden, coords[0],coords[1] = currentX, currentY).
 * */
vector<int>* Moveable::findJump(Checkerpiece* checker, const vector<Checkerpiece*>& enemy, Checkerboard*& tempBoard)
{
    // the coords where the active checker would land after jumping, and the coords of the checker to jump over
    const int TOTAL_POSITIONS = 6;
    vector<int>* coords = new vector<int> (TOTAL_POSITIONS);
    coords->reserve(TOTAL_POSITIONS);
    Square* future;
    int futureX, futureY;
    for(unsigned int i = 0; i != enemy.size(); ++i)
    {
        if(!checker->getKing()) // se prueba dos posibles movimientos en caso de estar King - Row
        {
            if(checker->getKingRow() == KING_ROW_7) // la pieza actual se mueve en dirección al sur
            {
                if(enemy[i]->getPosition().x != 0 && std::abs(checker->getPosition().x - XOFFSET) == enemy[i]->getPosition().x
                   && (checker->getPosition().y  + YOFFSET) == enemy[i]->getPosition().y) // primero verifique 225 grados (hacia abajo y hacia la izquierda)
                {
                    // el comprobador enemigo está dentro del rango de salto, así que verifica si hay un amigo o enemigo dentro del rango de aterrizaje
                    futureX = (int) std::abs(checker->getPosition().x - (2*XOFFSET));
                    futureY = (int) checker->getPosition().y + (2*YOFFSET);
                    // ahora mira si la casilla de aterrizaje está ocupada
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                    {
                        coords->at(0) = (int) checker->getPosition().x;
                        coords->at(1) = (int) checker->getPosition().y;
                        coords->at(2) = (int) enemy[i]->getPosition().x;
                        coords->at(3) = (int) enemy[i]->getPosition().y;
                        coords->at(4) = futureX;
                        coords->at(5) = futureY;
                        return coords; // retornar la coordenada de los saltos
                    }
                }
                else if((checker->getPosition().x + XOFFSET) == enemy[i]->getPosition().x
                        && (checker->getPosition().y + YOFFSET) == enemy[i]->getPosition().y) //ahora verifique 315 grados (abajo y a la derecha)
                {
                    // el comprobador enemigo está dentro del rango de salto, así que verifica si hay un amigo o enemigo dentro del rango de aterrizaje
                    futureX = (int) checker->getPosition().x + (2*XOFFSET);
                    futureY = (int) checker->getPosition().y + (2*YOFFSET);
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                    {
                        coords->at(0) = (int) checker->getPosition().x;
                        coords->at(1) = (int) checker->getPosition().y;
                        coords->at(2) = (int) enemy[i]->getPosition().x;
                        coords->at(3) = (int) enemy[i]->getPosition().y;
                        coords->at(4) = futureX;
                        coords->at(5) = futureY;
                        return coords; // retorna la coordenada de los saltos
                    }
                }
            }
            else // la pieza actual se mueve hacia el norte de la pieza
            {
                if(enemy[i]->getPosition().y != 0 && (checker->getPosition().x + XOFFSET) == enemy[i]->getPosition().x
                   && std::abs(checker->getPosition().y - YOFFSET) == enemy[i]->getPosition().y) // first check 45 degrees ( up and to the right )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) checker->getPosition().x + (2*XOFFSET);
                    futureY = (int) std::abs(checker->getPosition().y - (2*YOFFSET));
                    // now see if the landing square is occupied
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                    {
                        coords->at(0) = (int) checker->getPosition().x;
                        coords->at(1) = (int) checker->getPosition().y;
                        coords->at(2) = (int) enemy[i]->getPosition().x;
                        coords->at(3) = (int) enemy[i]->getPosition().y;
                        coords->at(4) = futureX;
                        coords->at(5) = futureY;
                        return coords; // return coords of jump
                    }
                }
                else if(enemy[i]->getPosition().y != 0 && enemy[i]->getPosition().x != 0 && std::abs(checker->getPosition().x - XOFFSET) == enemy[i]->getPosition().x
                        && std::abs(checker->getPosition().y - YOFFSET) == enemy[i]->getPosition().y) // now check 135 degrees ( up and to the left )
                {
                    // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                    futureX = (int) std::abs(checker->getPosition().x - (2*XOFFSET));
                    futureY = (int) std::abs(checker->getPosition().y - (2*YOFFSET));
                    future = tempBoard->findSquare(futureX, futureY);
                    if(future && !future->getOccupied())
                    {
                        coords->at(0) = (int) checker->getPosition().x;
                        coords->at(1) = (int) checker->getPosition().y;
                        coords->at(2) = (int) enemy[i]->getPosition().x;
                        coords->at(3) = (int) enemy[i]->getPosition().y;
                        coords->at(4) = futureX;
                        coords->at(5) = futureY;
                        return coords; // return coords of jump
                    }
                }
            }
        }
        else // test all 4 possible jump directions because we're dealing with a king checker
        {
            if(enemy[i]->getPosition().x != 0 && checker->getPosition().x != 0 && std::abs(checker->getPosition().x - XOFFSET) == enemy[i]->getPosition().x
               && (checker->getPosition().y  + YOFFSET) == enemy[i]->getPosition().y) // first check 225 degrees ( down and to the left )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) std::abs(checker->getPosition().x - (2*XOFFSET));
                futureY = (int) checker->getPosition().y + (2*YOFFSET);
                // now see if the landing square is occupied
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                {
                    coords->at(0) = (int) checker->getPosition().x;
                    coords->at(1) = (int) checker->getPosition().y;
                    coords->at(2) = (int) enemy[i]->getPosition().x;
                    coords->at(3) = (int) enemy[i]->getPosition().y;
                    coords->at(4) = futureX;
                    coords->at(5) = futureY;
                    return coords; // return coords of jump
                }
            }
            else if((checker->getPosition().x + XOFFSET) == enemy[i]->getPosition().x
                    && (checker->getPosition().y + YOFFSET) == enemy[i]->getPosition().y) // now check 315 degrees ( down and to the right )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) checker->getPosition().x + (2*XOFFSET);
                futureY = (int) checker->getPosition().y + (2*YOFFSET);
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                {
                    coords->at(0) = (int) checker->getPosition().x;
                    coords->at(1) = (int) checker->getPosition().y;
                    coords->at(2) = (int) enemy[i]->getPosition().x;
                    coords->at(3) = (int) enemy[i]->getPosition().y;
                    coords->at(4) = futureX;
                    coords->at(5) = futureY;
                    return coords; // return coords of jump
                }
            }
            else if(enemy[i]->getPosition().y != 0 && (checker->getPosition().x + XOFFSET) == enemy[i]->getPosition().x
                    && std::abs(checker->getPosition().y - YOFFSET) == enemy[i]->getPosition().y) // first check 45 degrees ( up and to the right )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) checker->getPosition().x + (2*XOFFSET);
                futureY = (int) std::abs(checker->getPosition().y - (2*YOFFSET));
                // now see if the landing square is occupied
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                {
                    coords->at(0) = (int) checker->getPosition().x;
                    coords->at(1) = (int) checker->getPosition().y;
                    coords->at(2) = (int) enemy[i]->getPosition().x;
                    coords->at(3) = (int) enemy[i]->getPosition().y;
                    coords->at(4) = futureX;
                    coords->at(5) = futureY;
                    return coords; // return coords of jump
                }
            }
            else if(enemy[i]->getPosition().y != 0 && enemy[i]->getPosition().x != 0 && checker->getPosition().x != 0
                    && std::abs(checker->getPosition().x - XOFFSET) == enemy[i]->getPosition().x
                    && std::abs(checker->getPosition().y - YOFFSET) == enemy[i]->getPosition().y) // now check 135 degrees ( up and to the left )
            {
                // enemy checker is within jumpeable range, so check if there is a friendly or enemy withing landing range
                futureX = (int) std::abs(checker->getPosition().x - (2*XOFFSET));
                futureY = (int) std::abs(checker->getPosition().y - (2*YOFFSET));
                future = tempBoard->findSquare(futureX, futureY);
                if(future && !future->getOccupied())
                {
                    coords->at(0) = (int) checker->getPosition().x;
                    coords->at(1) = (int) checker->getPosition().y;
                    coords->at(2) = (int) enemy[i]->getPosition().x;
                    coords->at(3) = (int) enemy[i]->getPosition().y;
                    coords->at(4) = futureX;
                    coords->at(5) = futureY;
                    return coords; // return coords of jump
                }
            }
        }
    }

    return nullptr; // return empty coords, size of zero
}

/*
*	Similar functionality to hasJump, but only looks for a move by using the moveable function.
*	It is important to note that the moveable function does not verify if the future square is occupied,
*	so we must verify it for ourselves here.
*/
bool Moveable::hasMove(Checkerpiece* active, const vector<Checkerpiece*>& enemy, Checkerboard*& checkerboard)
{
    const int TOTAL_POSITIONS = 4;
    std::vector<int> coords;
    coords.reserve(TOTAL_POSITIONS);
    int currentX = (int) active->getPosition().x;
    int currentY = (int) active->getPosition().y;
    int futureX, futureY;
    Square* current, *future; // current and future squares to move onto
    // iterate through the different cases
    futureX = currentX + XOFFSET;
    futureY = currentY + YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future))
        if(!future->getOccupied())
            return true;

    futureX = currentX - XOFFSET;
    futureY = currentY - YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future))
        if(!future->getOccupied())
            return true;

    futureX = currentX - XOFFSET;
    futureY = currentY + YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future))
        if(!future->getOccupied())
            return true;

    futureX = currentX + XOFFSET;
    futureY = currentY - YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future))
        if(!future->getOccupied())
            return true;

    return false; // no move available
}

/*
*	Find a simple move (no jump), based on the first unoccupied
*	square that is within moveable distance to the active checkerpiece.
*	We simply try different combinations of adding, subtracting
*	the X/Y Offsets until we find one that's moveable.
*	the coords return corresponds to (coords[0,1] = currentX,Y, and coords[2,3] = futureX,Y).
*/
vector<int>* Moveable::findMove(Checkerpiece* active, Checkerboard*& checkerboard)
{
    const int TOTAL_POSITIONS = 4;
    vector<int>* coords = new vector<int> (TOTAL_POSITIONS);
    coords->reserve(TOTAL_POSITIONS);
    int currentX = static_cast<int>(active->getPosition().x);
    int currentY = static_cast<int>(active->getPosition().y);
    int futureX, futureY;
    Square* current, *future; // current and future squares to move from and onto

    // iterate through the different cases of future X,Y manipulations
    futureX = currentX + XOFFSET;
    futureY = currentY + YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future)
       && !future->getOccupied())
    {
        coords->at(0) = currentX;
        coords->at(1) = currentY;
        coords->at(2) = futureX;
        coords->at(3) = futureY;
        return coords;
    }
    futureX = currentX - XOFFSET;
    futureY = currentY - YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future)
       && !future->getOccupied())
    {
        coords->at(0) = currentX;
        coords->at(1) = currentY;
        coords->at(2) = futureX;
        coords->at(3) = futureY;
        return coords;
    }
    futureX = currentX - XOFFSET;
    futureY = currentY + YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future)
       && !future->getOccupied())
    {
        coords->at(0) = currentX;
        coords->at(1) = currentY;
        coords->at(2) = futureX;
        coords->at(3) = futureY;
        return coords;
    }
    futureX = currentX + XOFFSET;
    futureY = currentY - YOFFSET;
    current = checkerboard->findSquare(currentX, currentY);
    future = checkerboard->findSquare(futureX, futureY);
    if(current != nullptr && future != nullptr && moveable(active, current, future)
       && !future->getOccupied())
    {
        coords->at(0) = currentX;
        coords->at(1) = currentY;
        coords->at(2) = futureX;
        coords->at(3) = futureY;
        return coords;
    }

    return nullptr; // return empty coords of size 0

}