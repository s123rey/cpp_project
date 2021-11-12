#include<iostream>
#include <vector>
#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model.h"
#include "Controller_base.h"
using namespace std;
//class Model;

class Controller : public Controller_base
{
	public:
	Controller() = default;  // constructor
	Controller(Model* ptr_m);// Constructore with one argument which is model class pointer
	virtual void add(View* ptr_v);// Adding/setting view to controller
	virtual void update();
	vector <View *> view_vector; // Vector of view which are registered with this Controller
	virtual void delview(View* ptr_v); // Deleting view
	private:
	Model* ptr_m_;
	View *ptr_v1_;

};
#endif