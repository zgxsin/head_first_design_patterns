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

        /**
         * @brief This is an overload of the << operator for the GumballMachine class. The purpose of overloading this
         * operator is to allow the GumballMachine class objects to be output to an output stream (std::ostream)
         * using the familiar syntax std::cout << gumballMachine;
         * @remark This method is a friend function. The friend keyword is used to declare this function
         * as a friend of the GumballMachine class. A friend function is a function that is not a member of a class
         * but has access to the private and protected members of that class.
         *
         * Declaration and Definition of Friend Functions:
         * Friend functions are declared inside the class whose members they are allowed to access.
         * Friend functions can be declared in the public, private, or protected section of the class.
         * Friend functions are defined outside the class, just like any other non-member function.
         * However, they have access to the private and protected members of the class.
         *
         * @param os The output stream
         * @param gumballMachine  The GumballMachine object
         * @return The output stream
         */
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
