#creates the executable from both the object files
assignment3test: assign_3_unit_test.o Box.o Prize.o
	g++ -Wall -g -o lab14test Box.o Prize.o assign_3_unit_test.o
	
#creates the Box object file
Box: Box.cpp Box.h
	g++ -Wall -g -c Box.cpp
	
#creates the Prize object file
Prize: Prize.cpp Prize.h
	g++ -Wall -g -c Prize.cpp
	
#creates the unit test object file
assign_3_unit_test: assign_3_unit_test.cpp
	g++ -Wall -g -c assign_3_unit_test.cpp