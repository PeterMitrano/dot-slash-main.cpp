main: main.o lib.a
	ld -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/5/crtbegin.o -L/usr/lib/gcc/x86_64-linux-gnu/5 -L/usr/lib/x86_64-linux-gnu  -L/usr/lib/ main.o lib.a -lstdc++ -lc /usr/lib/gcc/x86_64-linux-gnu/5/crtend.o /usr/lib/x86_64-linux-gnu/crtn.o -o main

lib.a: foo.o bar.o
	ar r lib.a foo.o bar.o

main.o: main.s
	as main.s -o main.o

foo.o: foo.s
	as foo.s -o foo.o

bar.o: bar.s
	as bar.s -o bar.o

main.s: main.ii
	/usr/lib/gcc/x86_64-linux-gnu/5/cc1plus main.ii -o main.s

foo.s: foo.ii
	/usr/lib/gcc/x86_64-linux-gnu/5/cc1plus foo.ii -o foo.s

bar.s: bar.ii
	/usr/lib/gcc/x86_64-linux-gnu/5/cc1plus bar.ii -o bar.s

main.ii: main.cpp foo.h bar.h
	cpp main.cpp -E -o main.ii

foo.ii: foo.cpp foo.h
	cpp foo.cpp -E -o foo.ii

bar.ii: bar.cpp bar.h
	cpp bar.cpp -E -o bar.ii

clean:
	rm -f *.ii *.s *.o *.a main
