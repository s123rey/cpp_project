#ifndef VIEW_H
#define VIEW_H

#include "../Controller/Controller_base.h"
#include "../Model/Model.h"

class View 
{
	public:
		virtual ~View() { }
		virtual void register_view(Controller_base* ptr_c) = 0;
		virtual void update() = 0;
		virtual void get_model(Model *ptr_model) = 0;
};

#endif