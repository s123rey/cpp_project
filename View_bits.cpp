#include<iostream>
#include <cmath>
using namespace std;
#include "View_bits.h"

	void View_bits::update()
	{
		int x = ptr_model_->get_x();
		int bits=(int)log2(x)+1;
		cout << "No. bits in number is : " << bits << "\n";
	}
	void View_bits::get_model(Model *ptr_model)
	{
		ptr_model_ = ptr_model;
	}
	void View_bits::register_view(Controller_base* ptr_c)
	{
		ptr_c->add(this);
	};
	