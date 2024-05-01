
#include "chapter12_compound_patterns/DuckSimulator.hpp"
#include "chapter12_compound_patterns/RedheadDuck.hpp"
#include "chapter12_compound_patterns/MallardDuck.hpp"
#include "chapter12_compound_patterns/DuckCall.hpp"
#include "chapter12_compound_patterns/RubberDuck.hpp"
#include "chapter12_compound_patterns/GooseAdapter.hpp"
#include "chapter12_compound_patterns/QuackCounter.hpp"
#include <iostream>
#include <memory>

namespace chapter12_compound_patterns {

    void DuckSimulator::simulate() {
        // The fundamental of polymorphism in C++:
        // - A pointer or reference of a base class type can refer to objects of its derived classes.
        // - An object of a base class cannot directly refer to an object of its derived class.
        // - Derived object contains a Base part and a Derived part.
        QuackableInterface* redheadDuck = new QuackCounter(std::make_shared<RedheadDuck>(RedheadDuck()));
        QuackableInterface* mallardDuck = new QuackCounter(std::make_shared<MallardDuck>(MallardDuck()));
        QuackableInterface* duckCall = new QuackCounter(std::make_shared<DuckCall>(DuckCall()));
        QuackableInterface* rubberDuck = new QuackCounter(std::make_shared<RubberDuck>(RubberDuck()));

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