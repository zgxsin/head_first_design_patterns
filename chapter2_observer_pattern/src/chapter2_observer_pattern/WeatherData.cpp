
#include "chapter2_observer_pattern/WeatherData.hpp"
#include <algorithm>

namespace chapter2_observer_pattern {

    void WeatherData::registerObserver(Observer *observer) {
        observers_.push_back(observer);
    }

    void WeatherData::removeObserver(Observer *observer) {
        auto it = std::find(observers_.begin(), observers_.end(), observer);
        if (it != observers_.end()) {
            observers_.erase(it);
        }
    }

    void WeatherData::notifyObservers() {
        // If you want to “push” data to the observers you can pass the data as a data object to the notifyObserver(arg)
        // method. If not, then the Observer has to “pull” the data it wants from the Observable object passed to it.
        for (auto observer: observers_) {
            observer->update(temperature_, humidity_, pressure_);
        }
    }

    void WeatherData::measurementsChanged() {
        notifyObservers();
    }

    void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        measurementsChanged();
    }


}
