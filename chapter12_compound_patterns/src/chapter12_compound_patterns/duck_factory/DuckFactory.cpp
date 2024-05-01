
#include "chapter12_compound_patterns/duck_factory/DuckFactory.hpp"
#include "chapter12_compound_patterns/MallardDuck.hpp"
#include "chapter12_compound_patterns/RedheadDuck.hpp"
#include "chapter12_compound_patterns/DuckCall.hpp"
#include "chapter12_compound_patterns/RubberDuck.hpp"

namespace chapter12_compound_patterns {

    QuackableInterface *DuckFactory::createMallardDuck() {
        return new MallardDuck();
    }

    QuackableInterface *DuckFactory::createRedheadDuck() {
        return new RedheadDuck();

    }

    QuackableInterface *DuckFactory::createDuckCall() {
        return new DuckCall();
    }

    QuackableInterface *DuckFactory::createRubberDuck() {
        return new RubberDuck();
    }

}