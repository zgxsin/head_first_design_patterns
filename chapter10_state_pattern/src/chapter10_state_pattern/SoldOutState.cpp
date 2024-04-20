#include "chapter10_state_pattern/SoldOutState.hpp"
#include <iostream>

namespace chapter10_state_pattern {
    SoldOutState::SoldOutState(GumballMachine &gumballMachine) : gumballMachine_(gumballMachine) {}

    void SoldOutState::insertQuarter() {
        std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
    }

    void SoldOutState::ejectQuarter() {
        std::cout << "Quarter returned" << std::endl;
    }

    void SoldOutState::turnCrank() {
        std::cout << "You turned, but there are no gumballs" << std::endl;
    }

    void SoldOutState::dispense() {
        std::cout << "No gumball dispensed" << std::endl;
    }
}
