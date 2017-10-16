all: functions.o main.o
	gcc -o tester functions.o main.o

functions.o: functions.c headers.h
	gcc -c functions.c

main.o: main.c headers.h
	gcc -c main.c

clean:
	rm *.o
	rm *~;

run: all
	./tester
