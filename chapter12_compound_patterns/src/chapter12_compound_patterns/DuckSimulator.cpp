
#include "chapter12_compound_patterns/DuckSimulator.hpp"
#include "chapter12_compound_patterns/RedheadDuck.hpp"
#include "chapter12_compound_patterns/MallardDuck.hpp"
#include "chapter12_compound_patterns/DuckCall.hpp"
#include "chapter12_compound_patterns/RubberDuck.hpp"
#include "chapter12_compound_patterns/GooseAdapter.hpp"
#include "chapter12_compound_patterns/QuackCounter.hpp"
#include "chapter12_compound_patterns/duck_factory/CountingDuckFactory.hpp"
#include <iostream>
#include <memory>

namespace chapter12_compound_patterns {

    void DuckSimulator::simulate() {
        AbstractDuckFactory *duckFactory = new CountingDuckFactory();
        simulate(duckFactory);
    }

    void DuckSimulator::simulate(AbstractDuckFactory* duckFactory) {
        QuackableInterface* redheadDuck = duckFactory->createRedheadDuck();
        QuackableInterface* mallardDuck = duckFactory->createMallardDuck();
        QuackableInterface* duckCall = duckFactory->createDuckCall();
        QuackableInterface* rubberDuck = duckFactory->createRubberDuck();

        Goose goose = Goose();
        QuackableInterface* gooseDuck = new GooseAdapter(goose);
        std::cout << "Duck Simulator" << std::endl;
        simulate(redheadDuck);
        simulate(mallardDuck);
        simulate(duckCall);
        simulate(rubberDuck);
        simulate(gooseDuck);
        std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;
        delete redheadDuck;
        delete mallardDuck;
        delete duckCall;
        delete rubberDuck;
        delete gooseDuck;
    }

    void DuckSimulator::simulate(QuackableInterface* quackable) {
        quackable->quack();
    }
}