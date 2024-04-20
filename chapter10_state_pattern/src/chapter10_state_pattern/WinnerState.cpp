#include "chapter10_state_pattern/WinnerState.hpp"
#include <iostream>

namespace chapter10_state_pattern {
    WinnerState::WinnerState(GumballMachine &gumballMachine) : gumballMachine_(gumballMachine) {
    }

    void WinnerState::insertQuarter() {
        std::cout << "Please wait, we're already giving you gumball(s)" << std::endl;
    }

    void WinnerState::ejectQuarter() {
        std::cout << "Sorry, you already turned the crank" << std::endl;
    }

    void WinnerState::turnCrank() {
        std::cout << "Turning twice doesn’t get you another gumball!" << std::endl;
    }

    void WinnerState::dispense() {
        if (gumballMachine_.releaseBall()) {
            if (gumballMachine_.releaseBall()) {
                gumballMachine_.setState(gumballMachine_.getNoQuarterState());
            } else {
                std::cout << "Oops, out of gumballs!" << std::endl;
                gumballMachine_.setState(gumballMachine_.getSoldOutState());
            }
        } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            gumballMachine_.setState(gumballMachine_.getSoldOutState());
        }

    }
}
