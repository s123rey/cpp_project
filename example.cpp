#include <iostream>
using namespace std;
#include "Controller.h"
#include "Controller_base.h"
#include "View_sq.h"
#include "View.h"
#include "Model1.h"
#include "Model.h"
#include "View_cube.h"
#include "View_digit_sum.h"
#include "View_bits.h"

int main()
{
	Model1 m(10);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	
	/*View_cube view_cube;
	view_cube.register_view(&c);
	view_cube.get_model(&m);*/
	
	/*View_bits view_bits;
	view_bits.register_view(&c);
	view_bits.get_model(&m);*/
	
	/*View_digit_sum view_digit_sum;
	view_digit_sum.register_view(&c);
	view_digit_sum.get_model(&m);*/
	
	
	m.change(20);
	
	
	
	
}

