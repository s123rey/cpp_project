#include<iostream>
#include <cmath>
using namespace std;
#include "View_bits.h"

	void View_bits::update()  // Function to update the logical
	{
		int x = ptr_model_->get_x();
		unsigned int count = 0;
		if(x>=0){
			
		while (x) {
			count += x & 1;
			x >>= 1;
		}
		cout << "No. bits in number is : " << count << "\n";
		
		}
		else
		{
			cout<<"Given Number is Negative, We will update logic for No. bits for Negative Number"<<"\n";
		}
	}
	void View_bits::get_model(Model *ptr_model)
	{
		ptr_model_ = ptr_model;
	}
	void View_bits::register_view(Controller_base* ptr_c)
	{
		ptr_c->add(this);
	};
	
	void View_bits::deregister_view(Controller_base* ptr_c)
	{
		ptr_c->delview(this);
	}
	
	