#pragma once

namespace chapter12_compound_patterns {
    class QuackableInterface {
    public:
        virtual void quack() = 0;
        virtual ~QuackableInterface() = default;
    };
}
