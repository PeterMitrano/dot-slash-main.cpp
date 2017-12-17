main_broken: main.cpp lib.cpp bil.cpp
	g++ main.cpp lib.cpp bil.cpp -o main_broken

main: main.cpp lib.o bil.o bar.cpp
	g++ main.cpp bar.cpp lib.cpp bil.cpp -DFIXED -o main

lib.o: lib.cpp bar.h
	g++ lib.cpp -c -o lib.o

bil.o: bil.cpp bar.h
	g++ bil.cpp -c -o bil.o

clean:
	rm -f *.o main
