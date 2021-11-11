#include<iostream>
#ifndef Model1_H
#define Model1_H
#include "Controller_base.h"
class Controller_base;
class Model 
{
	public:
	virtual ~Model();
	virtual void set_controller(Controller_base* ptr_c) = 0;
	virtual void change(int) = 0;
	virtual int get_x() = 0;
};

#endif