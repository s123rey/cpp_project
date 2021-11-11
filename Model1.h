#include<iostream>
#ifndef MODEL1_H
#define MODEL1_H
#include "Model.h"

class Controller_base;


class Model1 : public Model 
{
	public:
	Model1(int x);
	virtual void set_controller(Controller_base* ptr_c);
	void change(int x);
	int get_x();
	private:
	Controller_base* ptr_c_;
	int x_;
	
};

#endif