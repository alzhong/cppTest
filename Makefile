main: Student.o main.o
	g++ Student.o main.o -o main

main.o: main.cpp Student.h
	g++ -c main.cpp

Student.o: Student.h Student.cpp xtra.h
	g++ -c Student.cpp xtra.h

clean:
	rm *.o main
