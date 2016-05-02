#creates the executable from both the object files
lab25test: assignment_5_unit_test.o bst_node.o bs_tree.o
	g++ -Wall -g -o lab25test bst_node.o bs_tree.o assignment_5_unit_test.o
	
#creates the bst_node object file
bst_node: bst_node.cpp bst_node.h
	g++ -Wall -g -c bst_node.cpp

#creates the bs_tree object file
bs_tree: bs_tree.cpp bs_tree.h
	g++ -Wall -g -c bs_tree.cpp
	
#creates the unit test object file
assignment_5_unit_test: assignment_5_unit_test.cpp
	g++ -Wall -g -c assignment_5_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 