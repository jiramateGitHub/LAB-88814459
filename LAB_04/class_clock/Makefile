all: main
main : ClockType.o main.o
	g++ -Wall -g -o main ClockType.o main.o
ClockType.o : ClockType.cpp
	g++ -Wall -g -c ClockType.cpp
main.o : main.cpp
	g++ -Wall -g -c main.cpp
clean :
	rm main *.o
