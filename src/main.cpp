#include <iostream>

#include "display.h"

int main() {

    display::init();

    while(display::isOpen()){
        display::clear();
        display::update();

        display::checkForClose();
    }
}

