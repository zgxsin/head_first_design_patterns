#include "chapter11_proxy_pattern/Zoo.hpp"
#include <iostream>

namespace chapter11_proxy_pattern {
    void Zoo::enterZooEarly(ZooPatronInterface *zooPatron) {
        std::cout << zooPatron->getName() << " entered the zoo early." << std::endl;
    }

    void Zoo::attendAnimalShow(ZooPatronInterface *zooPatron) {
        std::cout << zooPatron->getName() << " attended the animal show." << std::endl;

    }

}