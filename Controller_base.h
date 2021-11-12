#include<iostream>

#ifndef CONTROLLER_BASE_H
#define CONTROLLER_BASE_H
#include "View.h"

class View;
class Controller_base 
{
	public:
	virtual ~Controller_base();//destructor
	virtual void update() = 0;//updates the view.
	virtual void add(View* ptr_v) = 0; //sets the view object.
	virtual void delview(View* ptr_v) = 0;// to deregister a view

};

#endif