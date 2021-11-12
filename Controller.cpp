#include <iostream>
#include <algorithm>
#include "Controller.h"
using namespace std;
Controller::Controller(Model* ptr_m) : ptr_m_(ptr_m) { }
void Controller::add(View* ptr_v)
	{	
		ptr_v1_ = ptr_v; 
		//cout<<view_vector.size()<<endl;
		
		if (std::find(view_vector.begin(), view_vector.end(), ptr_v) == view_vector.end()) {
		
			view_vector.push_back(ptr_v);
			cout<<"View successfully registered"<<endl;
		
		}
	}

void Controller::update() 
{	
		//cout<<"Inside controller update"<<endl;
		//cout<<typeid(ptr_v1_).name()<<endl;
		/*
		if (count(view_vector.begin(), view_vector.end(), ptr_v1_)){
			ptr_v1_->update();
		} else {
			cout<<"No such view exists. It may have been deregistered or never created."<<endl;
		}
		*/
		
		for(int i = 0; i < view_vector.size(); i++)
			view_vector[i]->update();
}

void Controller::delview(View* ptr_v){
	try {
			if(count(view_vector.begin(), view_vector.end(), ptr_v)){
				 vector <View *>::iterator it = remove(view_vector.begin(), view_vector.end(), ptr_v);
				 view_vector.erase(it, view_vector.end());
				cout<<"Your view has been deregistered successfully"<<endl;
			}
	} catch (...){
		cout<<"There is no such view."<<endl;
	}
}