
#pragma once
#include "chapter12_compound_patterns/QuackableInterface.hpp"
#include <memory>
namespace chapter12_compound_patterns {
    class DuckSimulator {
    public:
        static void simulate();
        static void simulate(QuackableInterface* quackable);
    };
}
