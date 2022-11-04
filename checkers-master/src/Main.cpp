/*
*	This is a checkers game programmed in C++ with SFML visual graphics
*	@author zmertens
*	Uses sound effects from WitchBlast (see NOTICE in resource folder)
*	Free software! GPL license.
*/

#include <iostream>
#include "Damas.hpp"

int main() {
    std::cout << "Damas" << std::endl;

    Damas checkers;
    checkers.start();

    return 0;
}