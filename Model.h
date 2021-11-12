#include<iostream>
#ifndef Model1_H
#define Model1_H
#include "Controller_base.h"
class Controller_base;
class Model 
{
	public:
	virtual ~Model(); //destructor
	virtual void set_controller(Controller_base* ptr_c) = 0;// set controller to model object
	virtual void change(int) = 0; // Changing the value of variable
	virtual int get_x() = 0; // Getter for variable
};

#endif