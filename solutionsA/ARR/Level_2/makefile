a.out: supplied.o CS299_main.o CS299_arr.o
	g++ -g *.o -o a.out

CS299_main.o: CS299_main.cpp CS299_arr.h
	g++ -g -c CS299_main.cpp CS299_arr.h

CS299_arr.o: CS299_arr.cpp CS299_arr.h
	g++ -g -c CS299_arr.cpp CS299_arr.h

clean: CS299_main.o CS299_arr.o a.out
	rm CS299_main.o CS299_arr.o a.out
