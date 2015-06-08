main: ArrayList.o main.o
	g++ ArrayList.o main.o -o main

main.o: main.cpp ArrayList.h
	g++ -c main.cpp

ArrayList.o: ArrayList.h ArrayList.cpp
	g++ -c ArrayList.cpp

clean:
	rm *.o main
