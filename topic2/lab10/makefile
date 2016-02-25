#creates the executable from both the object files
lab10test: lab_10_unit_test.o lab_10.o
	g++ -Wall -g -o lab10test lab_10.o lab_10_unit_test.o
	
#creates the lab10 object file
lab10: lab_10.cpp lab_10.h
	g++ -Wall -g -c lab_10.cpp
	
#creates the unit test object file
lab_10_unit_test: lab_10_unit_test.cpp
	g++ -Wall -g -c lab_10_unit_test.cpp