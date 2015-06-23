#include "slObserver.h"

void slObserver::event(event_type tag){
    std::cout << "foo" << std::endl;
}

void slObserver::event(event_type tag, void *param){
    //using void type EXAMPLE: int *num = (int *)param; <= need space among to int and astarisk in cast.
    std::cout << "foo" << std::endl;
}
