#include "chapter11_proxy_pattern/ZooPatronInterface.hpp"

namespace chapter11_proxy_pattern {
    ZooPatronInterface::ZooPatronInterface(std::string name) : name_(std::move(name)) {}

    std::string ZooPatronInterface::getName() const {
        return name_;
    }
}