#pragma once

#include "chapter10_state_pattern/State.hpp"
#include "chapter10_state_pattern/GumballMachine.hpp"

namespace chapter10_state_pattern {
    class NoQuarterState : public State {
    public:
        explicit NoQuarterState(GumballMachine& gumballMachine);
        virtual ~NoQuarterState() = default;
        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;
        std::string toString() const override {
            return "Machine State: No Quarter";
        }
    private:
        GumballMachine &gumballMachine_;
    };
}
