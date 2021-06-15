// Created by akira on 15-06-21.

#include <iostream>
#include "states/Playing.h"

namespace State{
    Playing::Playing(Application& app) : GameState(app) {

    }

    void Playing::input() {

    }

    void Playing::update() {

    }

    void Playing::draw() {
        std::cout<<"Drawing in Playing"<<std::endl;
    }
}