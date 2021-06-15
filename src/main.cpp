#include <iostream>

#include "display.h"
#include "Application.h"

int main() {
    display::init();

    //create and start application
    Application app;
    app.runMainGameLoop();
}

