all: main
main : StudentType.o main.o
	g++ -Wall -g -o main StudentType.o main.o
StudentType.o : StudentType.cpp
	g++ -Wall -g -c StudentType.cpp
main.o : main.cpp
	g++ -Wall -g -c main.cpp
clean :
	rm main *.o
