#include<iostream>
#ifndef VIEW_CUBE_H
#define VIEW_CUBE_H
#include "View.h"
//#include "Controller_base.h"
class View_cube : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void register_view(Controller_base* ptr_c);
	private:
	Model *ptr_model_;

};

#endif