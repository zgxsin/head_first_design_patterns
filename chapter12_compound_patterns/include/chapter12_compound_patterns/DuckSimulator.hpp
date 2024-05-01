
#pragma once
#include "chapter12_compound_patterns/QuackableInterface.hpp"
#include "chapter12_compound_patterns/duck_factory/AbstractDuckFactory.hpp"
#include <memory>
namespace chapter12_compound_patterns {
    class DuckSimulator {
    public:
        static void simulate();
        static void simulate(AbstractDuckFactory* duckFactory);
        static void simulate(QuackableInterface* quackable);
    };
}
