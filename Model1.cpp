#include<iostream>
#include "Model1.h"
//#include "Controller_base.h"
/*class Model1 : public Model 
{
	public:*/
	Model1::Model1(int x) : x_(x) { }
	void Model1::set_controller(Controller_base* ptr_c)
	{
		ptr_c_ = ptr_c;
	}
	void Model1 :: change(int x) 
	{
		x_ = x;
		ptr_c_->update();
	}
	int Model1 :: get_x()
	{
		return x_;
	}
	/*private:
	Controller_base* ptr_c_;
	int x_;
	
};*/
