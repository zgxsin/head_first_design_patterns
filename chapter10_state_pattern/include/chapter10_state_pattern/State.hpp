#pragma once
#include <memory>
#include <string>

namespace chapter10_state_pattern {
    /**
     * @brief State interface
     * @remarks This class is the interface for all the states. This class should not depend on GumballMachine.
     * Otherwise, it will create a circular dependency since GumballMachine depends on this class.
     */
    class State {
    public:
        State() = default;

        virtual ~State() = default;

        virtual void insertQuarter() = 0;

        virtual void ejectQuarter() = 0;

        virtual void turnCrank() = 0;

        virtual void dispense() = 0;

        virtual std::string toString() const = 0;
    };
}
