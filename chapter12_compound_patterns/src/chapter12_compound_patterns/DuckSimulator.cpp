
#include "chapter12_compound_patterns/DuckSimulator.hpp"
#include "chapter12_compound_patterns/RedheadDuck.hpp"
#include "chapter12_compound_patterns/MallardDuck.hpp"
#include "chapter12_compound_patterns/DuckCall.hpp"
#include "chapter12_compound_patterns/RubberDuck.hpp"
#include "chapter12_compound_patterns/GooseAdapter.hpp"
#include "chapter12_compound_patterns/QuackCounter.hpp"
#include "chapter12_compound_patterns/duck_factory/CountingDuckFactory.hpp"
#include "chapter12_compound_patterns/Flock.hpp"
#include <iostream>
#include <memory>

namespace chapter12_compound_patterns {

    void DuckSimulator::simulate() {
        AbstractDuckFactory *duckFactory = new CountingDuckFactory();
        simulate(duckFactory);
    }

    void DuckSimulator::simulate(AbstractDuckFactory* duckFactory) {
        QuackableInterface* redheadDuck = duckFactory->createRedheadDuck();
        QuackableInterface* duckCall = duckFactory->createDuckCall();
        QuackableInterface* rubberDuck = duckFactory->createRubberDuck();
        Goose goose = Goose();
        QuackableInterface* gooseDuck = new GooseAdapter(goose);
        Flock flockOfDucks =  Flock();
        flockOfDucks.add(redheadDuck);
        flockOfDucks.add(duckCall);
        flockOfDucks.add(rubberDuck);
        flockOfDucks.add(gooseDuck);

        Flock flockOfMallards =  Flock();
        QuackableInterface* mallardOne = duckFactory->createMallardDuck();
        QuackableInterface* mallardTwo = duckFactory->createMallardDuck();
        QuackableInterface* mallardThree = duckFactory->createMallardDuck();
        QuackableInterface* mallardFour = duckFactory->createMallardDuck();
        flockOfMallards.add(mallardOne);
        flockOfMallards.add(mallardTwo);
        flockOfMallards.add(mallardThree);
        flockOfMallards.add(mallardFour);

        flockOfDucks.add(&flockOfMallards);
        std::cout << "Duck Simulator: Whole Flock Simulation" << std::endl;
        simulate(&flockOfDucks);
        std::cout << "Duck Simulator: Mallard Flock Simulation" << std::endl;
        simulate(&flockOfMallards);
        std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;
        delete redheadDuck;
        delete duckCall;
        delete rubberDuck;
        delete gooseDuck;
    }

    void DuckSimulator::simulate(QuackableInterface* quackable) {
        quackable->quack();
    }
}