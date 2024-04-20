#include "chapter10_state_pattern/GumballMachine.hpp"
#include <iostream>

int main(int argc, char **argv) {
    chapter10_state_pattern::GumballMachine gumballMachine(5);
    std::cout << gumballMachine << std::endl;
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();

    std::cout << gumballMachine << std::endl;

    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();

    std::cout << gumballMachine << std::endl;
    return 0;


}

