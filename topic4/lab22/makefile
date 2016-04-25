#creates the executable from both the object files
lab22test: lab_22_unit_test.o bst_node.o bs_tree.o
	g++ -Wall -g -o lab22test bst_node.o bs_tree.o lab_22_unit_test.o
	
#creates the bst_node object file
bst_node: bst_node.cpp bst_node.h
	g++ -Wall -g -c bst_node.cpp

#creates the bs_tree object file
bs_tree: bs_tree.cpp bs_tree.h
	g++ -Wall -g -c bs_tree.cpp
	
#creates the unit test object file
lab_22_unit_test: lab_22_unit_test.cpp
	g++ -Wall -g -c lab_22_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 