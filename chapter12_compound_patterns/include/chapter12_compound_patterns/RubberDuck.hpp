#pragma once
#include "chapter12_compound_patterns/QuackableInterface.hpp"
namespace chapter12_compound_patterns {
    class RubberDuck: public QuackableInterface {
    public:
        void quack() override;
    };
}