#include <iostream>

#include "display.h"
#include "Application.h"

int main() {
    display::init();

    Application app;
    app.runMainGameLoop();
}

