#pragma once

#include "chapter10_state_pattern/State.hpp"
#include "chapter10_state_pattern/GumballMachine.hpp"
namespace chapter10_state_pattern {
    class SoldState : public State {
    public:
        explicit SoldState(GumballMachine &gumballMachine);

        virtual ~SoldState() = default;

        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;

        std::string toString() const override {
            return "Machine State: Sold";
        }

    private:
        GumballMachine &gumballMachine_;
    };
}
