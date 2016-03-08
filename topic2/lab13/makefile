#creates the executable from both the object files
lab13test: lab_13_unit_test.o box.o
	g++ -Wall -g -o lab13test box.o lab_13_unit_test.o
	
#creates the lab13 object file
lab13: box.cpp box.h
	g++ -Wall -g -c box.cpp
	
#creates the unit test object file
lab_13_unit_test: lab_13_unit_test.cpp
	g++ -Wall -g -c lab_13_unit_test.cpp