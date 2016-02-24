#creates the executable from both the object files
lab9test: lab_9_unit_test.o lab_9.o
	g++ -Wall -g -o lab9test lab_9.o lab_9_unit_test.o
	
#creates the lab9 object file
lab9: lab_9.cpp lab_9.h
	g++ -Wall -g -c lab_9.cpp
	
#creates the unit test object file
lab_9_unit_test: lab_9_unit_test.cpp
	g++ -Wall -g -c lab_9_unit_test.cpp