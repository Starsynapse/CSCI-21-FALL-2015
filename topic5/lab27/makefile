#creates the executable from both the object files
lab27test: lab_27_unit_test.o lab_27.o
	g++ -Wall -g -o lab27test lab_27.o lab_27_unit_test.o
	
#creates the lab27 object file
lab27: lab_27.cpp lab_27.h
	g++ -Wall -g -c lab_27.cpp
	
#creates the unit test object file
lab_27_unit_test: lab_27_unit_test.cpp
	g++ -Wall -g -c lab_27_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 