#pragma once

#include "chapter11_proxy_pattern/ZooInterface.hpp"
#include "chapter11_proxy_pattern/Zoo.hpp"

namespace chapter11_proxy_pattern {
    class ZooProxy : public ZooInterface {
    public:
        ZooProxy(Zoo *zoo);

        void enterZooEarly(ZooPatronInterface *zooPatron) override;

        void attendAnimalShow(ZooPatronInterface *zooPatron) override;
    private:
        Zoo* zoo_;
    };

}

