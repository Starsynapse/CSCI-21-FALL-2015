#creates the executable from both the object files
lab25test: assignment_5_unit_test.o bst_nodet.o bst_nodet.o
	g++ -Wall -g -o lab25test bst_nodet.o bst_nodet.o assignment_5_unit_test.o
	
#creates the bst_nodet object file
bst_nodet: bst_nodet.cpp bst_nodet.h
	g++ -Wall -g -c bst_nodet.cpp

#creates the bst_nodet object file
bst_nodet: bst_nodet.cpp bst_nodet.h
	g++ -Wall -g -c bst_nodet.cpp
	
#creates the unit test object file
assignment_5_unit_test: assignment_5_unit_test.cpp
	g++ -Wall -g -c assignment_5_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 