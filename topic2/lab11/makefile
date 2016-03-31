#creates the executable from both the object files
lab11test: lab_11_unit_test.o money.o
	g++ -Wall -g -o lab11test money.o lab_11_unit_test.o
	
#creates the lab11 object file
lab11: money.cpp money.h
	g++ -Wall -g -c money.cpp
	
#creates the unit test object file
lab_11_unit_test: lab_11_unit_test.cpp
	g++ -Wall -g -c lab_11_unit_test.cpp