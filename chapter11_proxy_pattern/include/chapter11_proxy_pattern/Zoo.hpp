#pragma once
#include "chapter11_proxy_pattern/ZooInterface.hpp"
namespace chapter11_proxy_pattern {
    class Zoo: public ZooInterface {
    public:
        // Use rule of zero here.
        void enterZooEarly(ZooPatronInterface* zooPatron) override;
        void attendAnimalShow(ZooPatronInterface* zooPatron) override;
    };

}

