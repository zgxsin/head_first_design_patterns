
#pragma once

#include "chapter12_compound_patterns/duck_factory/AbstractDuckFactory.hpp"

namespace chapter12_compound_patterns {
    /*
     * This class is a concrete implementation of AbstractDuckFactory.
     */
    class DuckFactory : public AbstractDuckFactory {
    public:
        virtual QuackableInterface *createMallardDuck() override;

        virtual QuackableInterface *createRedheadDuck() override;

        virtual QuackableInterface *createDuckCall() override;

        virtual QuackableInterface *createRubberDuck() override;
    };
}