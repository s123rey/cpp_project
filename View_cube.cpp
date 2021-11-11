#include<iostream>
using namespace std;
#include "View_cube.h"

	void View_cube::update()
	{
		int x = ptr_model_->get_x();
		cout << "Cube : " << x * x * x << "\n";
	}
	void View_cube::get_model(Model *ptr_model)
	{
		ptr_model_ = ptr_model;
	}
	void View_cube::register_view(Controller_base* ptr_c)
	{
		ptr_c->add(this);
	};
	