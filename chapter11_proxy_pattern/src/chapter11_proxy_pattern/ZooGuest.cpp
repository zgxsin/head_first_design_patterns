#include "chapter11_proxy_pattern/ZooGuest.hpp"

namespace chapter11_proxy_pattern {


    ZooGuest::ZooGuest(std::string name) : ZooPatronInterface(std::move(name)) {}


    bool ZooGuest::hasAnimalShowAccess() const {
        return false;
    }

    bool ZooGuest::hasZooEarlyAccess() const {
        return false;
    }

}
