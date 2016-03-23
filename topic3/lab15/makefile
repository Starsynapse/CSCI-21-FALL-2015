#creates the executable from both the object files
lab15test: lab_15_unit_test.o lab_15.o
	g++ -Wall -g -o lab15test lab_15.o lab_15_unit_test.o
	
#creates the lab15 object file
lab15: lab_15.cpp lab_15.h
	g++ -Wall -g -c lab_15.cpp
	
#creates the unit test object file
lab_15_unit_test: lab_15_unit_test.cpp
	g++ -Wall -g -c lab_15_unit_test.cpp