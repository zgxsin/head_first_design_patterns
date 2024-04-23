#include "chapter11_proxy_pattern/ZooProxy.hpp"
#include <iostream>

namespace chapter11_proxy_pattern {
    ZooProxy::ZooProxy(Zoo *zoo) {
        zoo_ = zoo;
    }

    void ZooProxy::enterZooEarly(ZooPatronInterface *zooPatron) {
        if (zooPatron->hasZooEarlyAccess()) {
            zoo_->enterZooEarly(zooPatron);
        } else {
            std::cout << zooPatron->getName() << " does not have early access to the zoo." << std::endl;
        }
    }


    void ZooProxy::attendAnimalShow(ZooPatronInterface *zooPatron) {
        if (zooPatron->hasAnimalShowAccess()) {
            zoo_->attendAnimalShow(zooPatron);
        } else {
            std::cout << zooPatron->getName() << " does not have access to the animal show." << std::endl;
        }

    }

}
