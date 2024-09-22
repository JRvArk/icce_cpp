CXXFLAGS = -Wall -Werror --std=c++26

main.o: main.cc
	g++ -c main.cc -o main.o

sum2.o: sum2.cc
	g++ -c sum2.cc -o sum2.o

sum1.o: sum1.cc
	g++ -c sum1.cc -o sum1.o

hasDoubleArgument.o: hasDoubleArgument.cc
	g++ -c hasDoubleArgument.cc -o hasDoubleArgument.o

all: main.o sum1.o sum2.o hasDoubleArgument.o
	g++ main.o sum1.o sum2.o hasDoubleArgument.o -o main

clean:
	rm *.o main