#include "chapter10_state_pattern/HasQuarterState.hpp"
#include <iostream>
#include <random>

namespace chapter10_state_pattern {
    HasQuarterState::HasQuarterState(GumballMachine &gumballMachine) : gen_(std::random_device()()), gumballMachine_(gumballMachine) {
    }

    void HasQuarterState::insertQuarter() {
        std::cout << "You can't insert another quarter" << std::endl;
    }

    void HasQuarterState::ejectQuarter() {
        std::cout << "Quarter returned" << std::endl;
        gumballMachine_.setState(gumballMachine_.getNoQuarterState());
    }

    void HasQuarterState::turnCrank() {
        std::cout << "You turned..." << std::endl;
        // It seems that you cannot add the line below as a member variable.
        std::uniform_int_distribution<> distribution(1, 10);
        auto generatorNumber = distribution(gen_);
        if (generatorNumber == 1 && gumballMachine_.getNumberOfGumballs() > 1) {
            gumballMachine_.setState(gumballMachine_.getWinnerState());
        } else {
            gumballMachine_.setState(gumballMachine_.getSoldState());
        }
    }

    void HasQuarterState::dispense() {
        std::cout << "No gumball dispensed" << std::endl;
    }
}
