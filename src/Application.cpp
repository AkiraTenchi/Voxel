// Created by akira on 15-06-21.

#include "Application.h"
#include "display.h"
#include "states/Playing.h"

#include <memory>

Application::Application() {
    pushState(std::make_unique<State::Playing>(*this));
}

void Application::runMainGameLoop() {
    while(display::isOpen()){
        display::clear();

        m_states.top()->input();
        m_states.top()->update();
        m_states.top()->draw();

        display::update();
        display::checkForClose();
    }
}

void Application::pushState(std::unique_ptr<State::GameState> state) {
    m_states.push(std::move(state));
}

void Application::popState() {
    m_states.pop();
}
