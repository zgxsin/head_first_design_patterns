
#pragma once

#include <memory>
#include "chapter12_compound_patterns/QuackableInterface.hpp"

namespace chapter12_compound_patterns {
    /**
     * @brief A decorator class that counts the number of quacks.
     */
    class QuackCounter : public QuackableInterface {
    public:
        explicit QuackCounter(std::shared_ptr<QuackableInterface> duck);

        void quack() override;

        static int getQuacks();

    private:
        std::shared_ptr<QuackableInterface> duck_;
        static int numberOfQuacks;
    };
}
