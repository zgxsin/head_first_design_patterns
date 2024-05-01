
#pragma once

#include "chapter12_compound_patterns/QuackableInterface.hpp"

namespace chapter12_compound_patterns {
    class AbstractDuckFactory {
    public:
        virtual QuackableInterface* createMallardDuck() = 0;
        virtual QuackableInterface* createRedheadDuck() = 0;
        virtual QuackableInterface* createDuckCall() = 0;
        virtual QuackableInterface* createRubberDuck() = 0;
    };
}
