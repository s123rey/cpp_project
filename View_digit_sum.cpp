#include<iostream>
using namespace std;
#include "View_digit_sum.h"

	void View_digit_sum::update()
	{
		int n,sum=0,m;
		int x = ptr_model_->get_x();
		while(x>0)    
		{    
		m=x%10;    
		sum=sum+m;    
		x=x/10;    
		}    
		cout << "Sum of digits is : " << sum << "\n";
	}
	void View_digit_sum::get_model(Model *ptr_model)
	{
		ptr_model_ = ptr_model;
	}
	void View_digit_sum::register_view(Controller_base* ptr_c)
	{
		ptr_c->add(this);
	};
	