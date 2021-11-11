a : example.o Controller.o Controller_base.o Model.o Model1.o View.o View_sq.o View_cube.o View_digit_sum.o View_bits.o
	g++ example.o Controller.o Controller_base.o Model.o Model1.o View.o View_sq.o View_cube.o View_digit_sum.o View_bits.o

example.o: example.cpp Controller.h Controller_base.h Model.h Model1.h View.h View_sq.h
	g++ -c example.cpp
			
Controller_base.o : Controller_base.cpp Controller_base.h 
	g++ -c Controller_base.cpp

Controller.o : Controller.cpp Controller.h 
	g++ -c Controller.cpp

Model.o : Model.cpp Model.h
	g++ -c Model.cpp


Model1.o : Model1.cpp Model1.h
	g++ -c Model1.cpp

View.o : View.cpp View.h
	g++ -c View.cpp

View_sq.o : View_sq.cpp View_sq.h
	g++ -c View_sq.cpp
	
View_cube.o : View_cube.cpp View_cube.h
	g++ -c View_cube.cpp
	
View_digit_sum.o : View_digit_sum.cpp View_digit_sum.h
	g++ -c View_digit_sum.cpp
	
View_bits.o : View_bits.cpp View_bits.h
	g++ -c View_bits.cpp