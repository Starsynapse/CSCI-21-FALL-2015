#creates the executable from both the object files
lab7test: lab_7_unit_test.o lab_7.o
	g++ -Wall -g -o lab7test lab_7.o lab_7_unit_test.o
	
#creates the unit test object file
lab_7_unit_test: lab_7_unit_test.cpp
	g++ -Wall -g -c lab_7_unit_test.cpp

#creates the executable from both the object files
lab8test: lab_8_unit_test.o lab_7.o
	g++ -Wall -g -o lab8test lab_7.o lab_8_unit_test.o
	
#creates the lab8 object file
lab7: lab_7.cpp lab_7.h
	g++ -Wall -g -c lab_7.cpp
	
#creates the unit test object file
lab_8_unit_test: lab_8_unit_test.cpp
	g++ -Wall -g -c lab_8_unit_test.cpp