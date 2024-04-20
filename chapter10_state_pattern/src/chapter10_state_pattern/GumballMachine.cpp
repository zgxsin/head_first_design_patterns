#include "chapter10_state_pattern/GumballMachine.hpp"
#include "chapter10_state_pattern/NoQuarterState.hpp"
#include "chapter10_state_pattern/SoldOutState.hpp"
#include "chapter10_state_pattern/HasQuarterState.hpp"
#include "chapter10_state_pattern/SoldState.hpp"
#include "chapter10_state_pattern/WinnerState.hpp"
#include <memory>
#include <iostream>

namespace chapter10_state_pattern {

    GumballMachine::GumballMachine(int numberGumballs) : numberOfGumballs_(numberGumballs) {
        soldOutState_ = std::make_shared<SoldOutState>(*this);
        noQuarterState_ = std::make_shared<NoQuarterState>(*this);
        hasQuarterState_ = std::make_shared<HasQuarterState>(*this);
        soldState_ = std::make_shared<SoldState>(*this);
        winnerState_ = std::make_shared<WinnerState>(*this);
        if (numberOfGumballs_ > 0) {
            currentState_ = noQuarterState_;
        } else {
            currentState_ = soldOutState_;
        }

    }

    void GumballMachine::insertQuarter() {
        currentState_->insertQuarter();
    }

    void GumballMachine::ejectQuarter() {
        currentState_->ejectQuarter();
    }

    void GumballMachine::turnCrank() {
        currentState_->turnCrank();
        currentState_->dispense();
    }

    void GumballMachine::setState(const std::shared_ptr<State>& state) {
        currentState_ = state;
    }

    bool GumballMachine::releaseBall() {
        if (numberOfGumballs_ > 0) {
            --numberOfGumballs_;
            std::cout << "A gumball comes rolling out the slot...\n" << std::endl;
            return true;
        }
        std::cout << "The Gumball Machine run out oif the gumballs" << std::endl;
        return false;
    }

    std::shared_ptr<State> GumballMachine::getSoldOutState() {
        return soldOutState_;
    }

    std::shared_ptr<State> GumballMachine::getNoQuarterState() {
        return noQuarterState_;
    }

    std::shared_ptr<State> GumballMachine::getHasQuarterState() {
        return hasQuarterState_;
    }

    std::shared_ptr<State> GumballMachine::getSoldState() {
        return soldState_;
    }

    std::shared_ptr<State> GumballMachine::getWinnerState() {
        return winnerState_;
    }

    int GumballMachine::getNumberOfGumballs() const {
        return numberOfGumballs_;
    }

    std::ostream &operator<<(std::ostream &os, const GumballMachine &gumballMachine) {
        os << "Mighty Gumball, Inc.\nC++-enabled Standing Gumball Model #2024\nInventory: "
           << gumballMachine.numberOfGumballs_ << " gumballs\n";
        os << "Machine is " << gumballMachine.currentState_->toString() << "\n";
        return os;
    }
}