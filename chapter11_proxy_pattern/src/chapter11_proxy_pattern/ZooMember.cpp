#include "chapter11_proxy_pattern/ZooMember.hpp"

namespace chapter11_proxy_pattern {


    ZooMember::ZooMember(std::string name) {
        name_ = std::move(name);
    }

    bool ZooMember::hasAnimalShowAccess() const {
        return true;
    }

    bool ZooMember::hasZooEarlyAccess() const {
        return true;
    }

}
