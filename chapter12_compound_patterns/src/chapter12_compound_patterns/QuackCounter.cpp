
#pragma once

#include "chapter12_compound_patterns/QuackCounter.hpp"

#include <utility>

namespace chapter12_compound_patterns {
    // Definition of the static variable.
    int QuackCounter::numberOfQuacks = 0;

    QuackCounter::QuackCounter(std::shared_ptr<QuackableInterface> duck) : duck_(std::move(duck)) {}

    void QuackCounter::quack() {
        duck_->quack();
        QuackCounter::numberOfQuacks++;
    }

    int QuackCounter::getQuacks() {
        return QuackCounter::numberOfQuacks;
    }

}
