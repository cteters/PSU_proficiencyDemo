
a.out: CS299_bst.o CS299_main.o supplied.o 
	g++ -g *.o -o a.out

CS299_bst.o: CS299_bst.cpp
	g++ -g -c CS299_bst.cpp CS299_bst.h

CS299_main.o: CS299_main.cpp CS299_bst.h
	g++ -g -c CS299_main.cpp CS299_bst.h

clean: CS299_main.o CS299_bst.o
	rm CS299_main.o CS299_bst.o a.out

