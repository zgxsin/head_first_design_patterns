
#include "chapter12_compound_patterns/GooseAdapter.hpp"
#include <iostream>

namespace chapter12_compound_patterns {
    GooseAdapter::GooseAdapter(Goose& goose) : goose_(goose) {}

    void GooseAdapter::quack() {
        goose_.quack();
    }

}
