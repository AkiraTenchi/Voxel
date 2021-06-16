#include "Application.h"
#include "Display.h"
#include "states/Playing.h"

#include <memory>

Application::Application() {
    pushState(std::make_unique<State::Playing>(*this));
}

void Application::runMainGameLoop() {
    while(Display::isOpen()){
        Display::clear();

        //get input calculate situation render situation
        m_states.top()->input();
        m_states.top()->update();
        m_states.top()->draw();

        Display::update();
        Display::checkForClose();
    }
}

//changes current GameState by adding
void Application::pushState(std::unique_ptr<State::GameState> state) {
    m_states.push(std::move(state));
}

//ends current game state returns to the one below
void Application::popState() {
    m_states.pop();
}
