app2:app2.c add.c sub.c mul.c div.c mod.c Arith.h
	gcc -I /home/phytec/workspace/Day4/operations/dymic app2.c -o app2 libArith.so.1

add.o:add.c
	gcc -c add.c -o add.o

sub.o:sub.c
	gcc -c sub.c -o sub.o

div.o:div.c
	gcc -c div.c -o div.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

mod.o:mod.c
	gcc -c mod.c -o mod.o
	
clean:
	rm *.o


