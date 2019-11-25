all: main
main : CircleType.o main.o
	g++ -Wall -g -o main CircleType.o main.o
CircleType.o : CircleType.cpp
	g++ -Wall -g -c CircleType.cpp
main.o : main.cpp
	g++ -Wall -g -c main.cpp
clean :
	rm main *.o
