main_working: main.cpp lib.o
	g++ main.cpp lib.o -o main_working

main_broken: main.cpp
	g++ main.cpp -o main_broken

vtable: vtable.cpp class.cpp
	g++ vtable.cpp class.cpp -o vtable

lib.o: lib.cpp lib.h
	g++ lib.cpp -c -o lib.o

clean:
	rm -f main_broken main_working lib.o
