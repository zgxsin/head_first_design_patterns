#pragma once

#include "chapter11_proxy_pattern/ZooPatronInterface.hpp"

namespace chapter11_proxy_pattern {
    class ZooGuest : public ZooPatronInterface {
    public:
        ZooGuest(std::string name);
        ~ZooGuest() override = default;
        bool hasAnimalShowAccess() const override;

        bool hasZooEarlyAccess() const override;
    };
}

