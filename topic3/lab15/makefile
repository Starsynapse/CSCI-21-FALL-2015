#creates the executable from both the object files
lab15test: lab_15_unit_test.o sl_node.o
	g++ -Wall -g -o lab15test sl_node.o lab_15_unit_test.o
	
#creates the lab15 object file
lab15: sl_node.cpp sl_node.h
	g++ -Wall -g -c sl_node.cpp
	
#creates the unit test object file
lab_15_unit_test: lab_15_unit_test.cpp
	g++ -Wall -g -c lab_15_unit_test.cpp