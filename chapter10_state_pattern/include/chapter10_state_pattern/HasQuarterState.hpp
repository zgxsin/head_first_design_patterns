#pragma once

#include "chapter10_state_pattern/State.hpp"
#include "chapter10_state_pattern/GumballMachine.hpp"
#include <random>

namespace chapter10_state_pattern {
    class HasQuarterState : public State {
    public:
        explicit HasQuarterState(GumballMachine &gumballMachine);

        virtual ~HasQuarterState() = default;

        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;

        std::string toString() const override {
            return "Machine State: Has Quarter";
        }

    private:
        // Seed
        std::random_device rd_;
        // Random number engine
        std::mt19937 gen_;

        GumballMachine &gumballMachine_;

    };
}