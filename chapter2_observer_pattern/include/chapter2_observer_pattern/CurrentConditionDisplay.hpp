
#pragma once

#include "chapter2_observer_pattern/DisplayElement.hpp"
#include "chapter2_observer_pattern/Observer.hpp"
#include "chapter2_observer_pattern/Subject.hpp"

namespace chapter2_observer_pattern {
    class CurrentConditionDisplay : public Observer, public DisplayElement {
    public:
        CurrentConditionDisplay(Subject *weatherData);
        void update(float temp, float humidity, float pressure) override;
        void display() override;
    private:
        Subject *weatherData_;
        float temperature_;
        float humidity_;
    };
}
