#include "Display.h"
#include "Application.h"

int main() {
    Display::init();

    //create and start application
    Application app;
    app.runMainGameLoop();
}

