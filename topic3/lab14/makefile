#creates the executable from both the object files
lab14test: lab_14_unit_test.o lab_14.o
	g++ -Wall -g -o lab14test lab_14.o lab_14_unit_test.o
	
#creates the lab14 object file
lab14: lab_14.cpp lab_14.h
	g++ -Wall -g -c lab_14.cpp
	
#creates the unit test object file
lab_14_unit_test: lab_14_unit_test.cpp
	g++ -Wall -g -c lab_14_unit_test.cpp