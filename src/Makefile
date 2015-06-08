main: Student.o main.o 
	g++ Student.o main.o -o main

main.o: main.cpp Student.h xtra.h
	g++ -c main.cpp

Student.o: Student.h Student.cpp
	g++ -c Student.cpp

clean:
	rm *.o main
