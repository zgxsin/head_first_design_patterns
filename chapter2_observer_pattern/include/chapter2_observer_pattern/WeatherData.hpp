
#pragma once

#include "chapter2_observer_pattern/Subject.hpp"
#include <vector>
namespace chapter2_observer_pattern {
    class WeatherData : public Subject {
    public:
        void registerObserver(Observer *observer) override;

        void removeObserver(Observer *observer) override;

        void notifyObservers() override;

        void measurementsChanged();

        void setMeasurements(float temperature, float humidity, float pressure);

    private:
        std::vector<Observer *> observers_;
        float temperature_;
        float humidity_;
        float pressure_;

    };
}