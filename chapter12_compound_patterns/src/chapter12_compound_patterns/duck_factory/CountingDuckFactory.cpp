
#include "chapter12_compound_patterns/duck_factory/CountingDuckFactory.hpp"

#include "chapter12_compound_patterns/QuackCounter.hpp"
#include "chapter12_compound_patterns/MallardDuck.hpp"
#include "chapter12_compound_patterns/RedheadDuck.hpp"
#include "chapter12_compound_patterns/DuckCall.hpp"
#include "chapter12_compound_patterns/RubberDuck.hpp"
#include <memory>

namespace chapter12_compound_patterns {

    QuackableInterface *CountingDuckFactory::createMallardDuck() {
        return new QuackCounter(std::make_shared<MallardDuck>(MallardDuck()));
    }

    QuackableInterface *CountingDuckFactory::createRedheadDuck() {
        return new QuackCounter(std::make_shared<RedheadDuck>(RedheadDuck()));

    }

    QuackableInterface *CountingDuckFactory::createDuckCall() {
        return new QuackCounter(std::make_shared<DuckCall>(DuckCall()));
    }

    QuackableInterface *CountingDuckFactory::createRubberDuck() {
        return new QuackCounter(std::make_shared<RubberDuck>(RubberDuck()));
    }

}
