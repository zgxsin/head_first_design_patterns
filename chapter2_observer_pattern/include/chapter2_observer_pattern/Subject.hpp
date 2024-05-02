
#pragma once
#include "chapter2_observer_pattern/Observer.hpp"

namespace chapter2_observer_pattern {
    class Subject {
    public:
        virtual void registerObserver(Observer* observer) = 0;
        virtual void removeObserver(Observer* observer) = 0;
        virtual void notifyObservers()=0;

    };
}

