a.out: supplied.o CS299_main.o CS299_clist.o
	g++ -g *.o -o a.out

CS299_main.o: CS299_main.cpp CS299_clist.h
	g++ -g -c CS299_main.cpp *.h

CS299_clist.o: CS299_clist.cpp CS299_clist.h
	g++ -g -c CS299_clist.cpp *.h

clean: CS299_main.o CS299_clist.o
	rm CS299_main.o CS299_clist.o a.out
