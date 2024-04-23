#include "chapter11_proxy_pattern/ZooMember.hpp"
#include "chapter11_proxy_pattern/ZooGuest.hpp"
#include "chapter11_proxy_pattern/Zoo.hpp"
#include "chapter11_proxy_pattern/ZooProxy.hpp"

int main(){
    chapter11_proxy_pattern::Zoo zoo;
    chapter11_proxy_pattern::ZooProxy proxy(&zoo);
    chapter11_proxy_pattern::ZooMember member("John");
    chapter11_proxy_pattern::ZooGuest guest("Jane");


    proxy.enterZooEarly(&member);
    proxy.enterZooEarly(&guest);

    proxy.attendAnimalShow(&member);
    proxy.attendAnimalShow(&guest);

    return 0;
}
