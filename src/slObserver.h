#ifndef SL_OBSERVER
#define SL_OBSERVER
#include <iostream>

typedef std::string event_type;

class slObserver {

	public:
        virtual void event(event_type tag);
        virtual void event(event_type tag, void *param);
        void (*eventFunc)();
    
};


#endif
