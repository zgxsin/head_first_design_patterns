
#pragma once
namespace chapter2_observer_pattern {
    class Observer {
    public:
        virtual void update(float temp, float humidity, float pressure) = 0;

    };
}