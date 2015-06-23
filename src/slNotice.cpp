#include "slNotice.h"

slNotice *slNotice::mIns = 0; // inctance()内の条件式のために初期化


slNotice* slNotice::instance(){
    if(!mIns){
        mIns = new slNotice();
    }
    return mIns;
}

slNotice::slNotice(){


	
}

slNotice::~slNotice(){
    
    
}


void slNotice::addEvent(event_type event_name , slObserver *obj){
    
    observer_t o;
    o.name = event_name;
    o.obj = obj;
    
    observers.push_back(o);
    
    
};



void slNotice::notify(event_type tag){
    
    for(int i=0; i<observers.size(); i++){
        
        observer_t *o = &observers[i];
        if(o->name == tag){
            slObserver *tmp = o->obj;
            tmp->event(tag);
        }
        
    }

    
}


void slNotice::notify(event_type tag, void *data_adr){

    for(int i=0; i<observers.size(); i++){
        
        observer_t *o = &observers[i];
        if(o->name == tag){
            slObserver *tmp = o->obj;
            tmp->event(tag, data_adr);
        }
        
    }
    
}


