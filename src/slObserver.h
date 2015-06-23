#ifndef SL_OBSERVER
#define SL_OBSERVER
#include <iostream>

typedef std::string event_type;

class slObserver {

	public:
        virtual void event(event_type tag){
            std::cout << "foo" << std::endl;
        }

        virtual void event(event_type tag, void *param){
                //using void type EXAMPLE: int *num = (int *)param;
                std::cout << "foo" << std::endl;
		}

        void (*eventFunc)();
    
};


#endif
