
#include "chapter2_observer_pattern/CurrentConditionDisplay.hpp"
#include <iostream>
namespace chapter2_observer_pattern {
    CurrentConditionDisplay::CurrentConditionDisplay(Subject
                                                     *weatherData) {
        weatherData_ = weatherData;
        weatherData_->registerObserver(this);
    }

    void CurrentConditionDisplay::update(float temp, float humidity, float pressure) {
        temperature_ = temp;
        humidity_ = humidity;
        display();
    }

    void CurrentConditionDisplay::display() {
        std::cout << "Current conditions: " << temperature_ << "F degrees and " << humidity_ << "% humidity"
                  << std::endl;
    }

}