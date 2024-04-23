#pragma once
#include "chapter11_proxy_pattern/ZooPatronInterface.hpp"
namespace chapter11_proxy_pattern {
    class ZooInterface {
    public:
        ZooInterface() = default;

        ZooInterface(const ZooInterface &) = default;

        ZooInterface(ZooInterface &&) = default;

        ZooInterface &operator=(const ZooInterface &) = default;

        ZooInterface &operator=(ZooInterface &&) = default;

        virtual ~ZooInterface() = default;

        virtual void enterZooEarly(ZooPatronInterface* zooPatron) = 0;

        virtual void attendAnimalShow(ZooPatronInterface* zooPatron) = 0;


    };
}

