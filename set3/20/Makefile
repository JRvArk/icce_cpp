CXXFLAGS = -Wall -Werror --std=c++26

charCount.o: charCount.cc
	g++ -c charCount.cc -o charCount.o

wordCount.o: wordCount.cc
	g++ -c wordCount.cc -o wordCount.o

lineCount.o: lineCount.cc
	g++ -c lineCount.cc -o lineCount.o

checkMode.o: checkMode.cc
	g++ -c checkMode.cc -o checkMode.o

wc.o: wc.cc
	g++ -c wc.cc -o wc.o

all: wc.o charCount.o wordCount.o lineCount.o checkMode.o
	g++ wc.o charCount.o wordCount.o lineCount.o checkMode.o -o wc