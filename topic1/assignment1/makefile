#creates the executable from both the object files
assignment1test: assignment_1_unit_test.o assignment_1.o
	g++ -Wall -g -std=c++11 -o assignment1test assignment_1.o assignment_1_unit_test.o
	
#creates the assignment1 object file
assignment1: assignment_1.cpp assignment_1.h
	g++ -Wall -g -std=c++11 -c assignment_1.cpp
	
#creates the unit test object file
assignment_1_unit_test: assignment_1_unit_test.cpp
	g++ -Wall -g -std=c++11 -c assignment_1_unit_test.cpp