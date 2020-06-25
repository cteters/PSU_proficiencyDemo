
output: supplied.o CS299_main.o CS299_dlist.o
	g++ -g *.o -o output

CS299_main.o: CS299_main.cpp
	g++ -g -c CS299_main.cpp

CS299_dlist.o: CS299_dlist.cpp CS299_dlist.h 
	g++ -g -c CS299_dlist.cpp

clean:
	rm CS299_main.o CS299_dlist.o
