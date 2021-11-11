#include<iostream>

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model.h"
#include "Controller_base.h"

//class Model;

class Controller : public Controller_base
{
	public:
	Controller(Model* ptr_m);
	virtual void add(View* ptr_v);
	virtual void update();


	private:
	Model* ptr_m_;
	View *ptr_v1_;

};
#endif