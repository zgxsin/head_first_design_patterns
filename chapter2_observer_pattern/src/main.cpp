#include "chapter2_observer_pattern/WeatherData.hpp"
#include "chapter2_observer_pattern/CurrentConditionDisplay.hpp"


int main() {
    chapter2_observer_pattern::WeatherData weatherData;
    chapter2_observer_pattern::CurrentConditionDisplay currentConditionDisplay(&weatherData);
    weatherData.setMeasurements(80, 65, 30.4f);
    weatherData.setMeasurements(82, 70, 29.2f);
    weatherData.setMeasurements(78, 90, 29.2f);
    return 0;
}
