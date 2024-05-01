
#include "chapter12_compound_patterns/Flock.hpp"

namespace chapter12_compound_patterns {

    void Flock::add(QuackableInterface* quacker) {
        quackers_.push_back(quacker);
    }

    void Flock::quack() {
        for (auto iterator = quackers_.begin(); iterator != quackers_.end(); ++iterator) {
            (*iterator)->quack();
        }
    }

}