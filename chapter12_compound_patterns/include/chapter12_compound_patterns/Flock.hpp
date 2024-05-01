
#pragma once

#include "chapter12_compound_patterns/QuackableInterface.hpp"
#include <vector>
#include <memory>

namespace chapter12_compound_patterns {
    /**
     * Composite  Pattern.
     */
    class Flock : public QuackableInterface {
    public:
        void add(QuackableInterface* quacker);

        void quack() override;

    private:
        std::vector<QuackableInterface*> quackers_;
    };
}
