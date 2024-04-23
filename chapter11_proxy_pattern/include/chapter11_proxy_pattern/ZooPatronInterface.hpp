#pragma once

#include <string>

namespace chapter11_proxy_pattern {
    class ZooPatronInterface {
    public:
        // Constructor
        ZooPatronInterface(std::string name);
        /** Rule of Six, Rule of Zero **/
        // Default Constructor
        ZooPatronInterface() = default;

        // Copy Constructor
        ZooPatronInterface(const ZooPatronInterface &) = default;

        // Move Constructor
        ZooPatronInterface(ZooPatronInterface &&) = default;

        // Copy Assignment
        ZooPatronInterface &operator=(const ZooPatronInterface &) = default;

        // Move Assignment
        ZooPatronInterface &operator=(ZooPatronInterface &&) = default;

        // Destructor
        virtual ~ZooPatronInterface() = default;

        virtual bool hasAnimalShowAccess() const = 0;

        virtual bool hasZooEarlyAccess() const = 0;

        std::string getName() const;

    protected:
        std::string name_;

    };
}
