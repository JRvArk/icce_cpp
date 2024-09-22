CXXFLAGS = -Wall -Werror --std=c++26

boundCall.o: boundCall.cc
	g++ -c boundCall.cc -o boundCall.o

structCall.o: structCall.cc
	g++ -c structCall.cc -o structCall.o

usageMsg.o: usageMsg.cc
	g++ -c usageMsg.cc -o usageMsg.o

printCall.o: printCall.cc
	g++ -c printCall.cc -o printCall.o

combine.o: combine.cc
	g++ -c combine.cc -o combine.o

main.o: main.cc
	g++ -c main.cc -o main.o

all: main.o combine.o printCall.o usageMsg.o structCall.o boundCall.o
	g++ main.o combine.o printCall.o usageMsg.o structCall.o boundCall.o -o main