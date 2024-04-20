#pragma once

#include "chapter10_state_pattern/State.hpp"
#include "chapter10_state_pattern/GumballMachine.hpp"

namespace chapter10_state_pattern {
    /**
     * @brief WinnerState class. This is very similar to SoldState, but it has a special behavior when the machine is in this state.
     */
    class WinnerState : public State {
    public:
        explicit WinnerState(GumballMachine &gumballMachine);

        virtual ~WinnerState() = default;

        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;

        std::string toString() const override {
            return "Machine State: Winner";
        }

    private:
        GumballMachine &gumballMachine_;

    };
}
