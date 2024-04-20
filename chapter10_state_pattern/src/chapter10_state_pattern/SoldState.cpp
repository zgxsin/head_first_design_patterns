#include "chapter10_state_pattern/SoldState.hpp"
#include <iostream>
namespace chapter10_state_pattern{
    SoldState::SoldState(GumballMachine &gumballMachine) : gumballMachine_(gumballMachine) {
    }

    void SoldState::insertQuarter() {
        std::cout << "Please wait, we're already giving you a gumball" << std::endl;
    }

    void SoldState::ejectQuarter() {
        std::cout << "Sorry, you already turned the crank" << std::endl;
    }

    void SoldState::turnCrank() {
        std::cout << "Turning twice doesn’t get you another gumball!" << std::endl;
    }

    void SoldState::dispense() {
        gumballMachine_.releaseBall();
        if (gumballMachine_.getNumberOfGumballs() > 0) {
            gumballMachine_.setState(gumballMachine_.getNoQuarterState());
        } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            gumballMachine_.setState(gumballMachine_.getSoldOutState());
        }
    }
}
