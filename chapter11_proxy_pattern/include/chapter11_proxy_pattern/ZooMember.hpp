#pragma once
#include "chapter11_proxy_pattern/ZooPatronInterface.hpp"
namespace chapter11_proxy_pattern {
    class ZooMember: public ZooPatronInterface {
    public:
        ZooMember(std::string name);
        bool hasAnimalShowAccess() const override;
        bool hasZooEarlyAccess() const override;
    };
}

