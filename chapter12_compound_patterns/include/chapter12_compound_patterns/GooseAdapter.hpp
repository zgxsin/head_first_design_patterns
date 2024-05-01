
#pragma once
#include "chapter12_compound_patterns/QuackableInterface.hpp"
#include "chapter12_compound_patterns/Goose.hpp"
namespace chapter12_compound_patterns {
    /**
     * @brief GooseAdapter is a class that adapts a Goose to a QuackableInterface.
     */
    class GooseAdapter : public QuackableInterface{
    public:
        explicit GooseAdapter(Goose& goose);
        void quack() override;
    private:
        Goose& goose_;
    };
}
