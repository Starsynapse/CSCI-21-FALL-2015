#creates the executable from both the object files
lab12test: lab_22_unit_test.o lab_22.o
	g++ -Wall -g -o lab22test lab_22.o lab_22_unit_test.o
	
#creates the lab_22 object file
lab_22: lab_22.cpp lab_22.h
	g++ -Wall -g -c lab_22.cpp
	
#creates the unit test object file
lab_22_unit_test: lab_22_unit_test.cpp
	g++ -Wall -g -c lab_22_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 