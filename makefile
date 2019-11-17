CC=gcc


all: power.o basicMath.o mymaths mymathd mains maind
	$(CC) -ansi -g -Wall main.o basicMath.o power.o -o progmain 

basicMath.o: basicMath.c 
	$(CC) -ansi -g -Wall -c basicMath.c

power.o: power.c
	$(CC) -ansi -g -Wall -c power.c

main.o: main.c
	$(CC) -ansi -pedantic -Wall -c main.c

mymaths: power.o basicMath.o 
	ar rcs libmylib.a power.o basicMath.o


mymathd: power.o basicMath.o 
	$(CC) -g -Wall -shared power.o basicMath.o -o libmylib.so

mains: main.c mymaths
	$(CC) -g -Wall -c main.c -o main.o -I.

maind: main.c mymathd
	$(CC) -g -Wall -c main.c -o main.o -I.

clean:
	rm -f *.o *.so mymathd shani mymaths 








