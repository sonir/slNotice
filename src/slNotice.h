
#ifndef SL_NOTICE
#define SL_NOTICE

#include <iostream>
#include <vector>
#include "slObserver.h"

//Examples of Instanciate
//notice = slNotice::instance();

typedef struct observer_t {
    
    std::string name;
    slObserver *obj;
    
}observer_t;


class slNotice {

	public:
        static slNotice* instance();
        void addEvent(event_type event_name , slObserver *obj);
        void notify(event_type tag);
        void notify(event_type tag, void *);
        void addFunc(event_type func_name , void *pt);
    
        std::vector<observer_t>observers;
    
    
    protected:
        slNotice();
        slNotice(const slNotice&);
        ~slNotice();
        static slNotice* mIns; // 唯一のインスタンス
};

#endif
