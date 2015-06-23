#pragma once
#include "slNotice.h"


using namespace std;

 class TestClass : public slObserver {
//class TestClass {

	public:
		TestClass(){
            notice = slNotice::instance();
            notice->addEvent("foo",this);
  		}

        void testFunc(){

			cout << "foo" << endl;

		}

		void event(event_type tag, void *data){
            
            int *num = (int *)data;            
			cout << tag << " :event was invoked" << *num << endl;

		}

		slNotice *notice;


};