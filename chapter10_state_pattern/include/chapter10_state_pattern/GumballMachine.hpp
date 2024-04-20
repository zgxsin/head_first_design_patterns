#pragma once

#include "chapter10_state_pattern/State.hpp"
#include <memory>

namespace chapter10_state_pattern {

    class GumballMachine {
    public:
        explicit GumballMachine(int numberOfGumballs);

        void insertQuarter();

        void ejectQuarter();

        void turnCrank();

        void setState(const std::shared_ptr<State> &state);

        std::shared_ptr<State> getSoldOutState();

        std::shared_ptr<State> getNoQuarterState();

        std::shared_ptr<State> getHasQuarterState();

        std::shared_ptr<State> getSoldState();

        std::shared_ptr<State> getWinnerState();

        /**
         * @brief Release a gumball
         * @remark This method is a helper method and doesn't change the state.
         */
        bool releaseBall();

        int getNumberOfGumballs() const;

        friend std::ostream &operator<<(std::ostream &os, const GumballMachine &gumballMachine);

    private:
        int numberOfGumballs_;
        std::shared_ptr<State> currentState_;
        std::shared_ptr<State> soldOutState_;
        std::shared_ptr<State> noQuarterState_;
        std::shared_ptr<State> hasQuarterState_;
        std::shared_ptr<State> soldState_;
        std::shared_ptr<State> winnerState_;
    };

} // chapter10_state_pattern
