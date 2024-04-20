#pragma once

#include "chapter10_state_pattern/State.hpp"
#include "chapter10_state_pattern/GumballMachine.hpp"
namespace chapter10_state_pattern {
    class SoldOutState : public State {
    public:
        explicit SoldOutState(GumballMachine& gumballMachine);

        virtual ~SoldOutState() = default;
        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;
        std::string toString() const override {
            return "Machine State: Sold Out";
        }
    private:
        GumballMachine &gumballMachine_;
    };
}