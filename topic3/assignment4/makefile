#creates the executable from both the object files
assign4test: Driver.cpp dl_node.o dl_list.o
	g++ -Wall -g -o assign4test dl_node.o dl_list.o Driver.cpp
	
#creates the lab18 object file
dl_list: dl_list.cpp dl_list.h
	g++ -Wall -g -c dl_list.cpp
	
#creates the lab18 object file
dl_node: dl_node.cpp dl_node.h
	g++ -Wall -g -c dl_node.cpp
	
#creates the Driver object file
Driver: Driver.cpp
	g++ -Wall -g -c Driver.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 