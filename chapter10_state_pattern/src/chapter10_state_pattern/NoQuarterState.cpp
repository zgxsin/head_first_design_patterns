#include "chapter10_state_pattern/NoQuarterState.hpp"
#include <iostream>

namespace chapter10_state_pattern {
    NoQuarterState::NoQuarterState(GumballMachine &gumballMachine) : gumballMachine_(gumballMachine) {
    }

    void NoQuarterState::insertQuarter() {
        std::cout << "You inserted a quarter" << std::endl;
        gumballMachine_.setState(gumballMachine_.getHasQuarterState());
    }

    void NoQuarterState::ejectQuarter() {
        std::cout << "You haven't inserted a quarter" << std::endl;
    }

    void NoQuarterState::turnCrank() {
        std::cout << "You turned, but there is no quarter" << std::endl;
    }

    void NoQuarterState::dispense() {
        std::cout << "You need to pay first" << std::endl;
    }
}
