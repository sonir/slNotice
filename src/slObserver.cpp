#include "slObserver.h"

virtual void event(event_type tag){
    std::cout << "foo" << std::endl;
}

virtual void event(event_type tag, void *param){
    //using void type EXAMPLE: int *num = (int *)param;
    std::cout << "foo" << std::endl;
}
