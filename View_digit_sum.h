#include<iostream>
#ifndef VIEW_DIGIT_SUM_H
#define VIEW_DIGIT_SUM_H
#include "View.h"
//#include "Controller_base.h"
class View_digit_sum : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void register_view(Controller_base* ptr_c);
	virtual void deregister_view(Controller_base* ptr_c);
	private:
	Model *ptr_model_;

};

#endif