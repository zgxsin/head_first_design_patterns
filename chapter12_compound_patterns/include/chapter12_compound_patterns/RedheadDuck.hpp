#pragma once

#include "chapter12_compound_patterns/QuackableInterface.hpp"

namespace chapter12_compound_patterns {
    class RedheadDuck : public QuackableInterface {
    public:
        void quack() override;
    };
}
