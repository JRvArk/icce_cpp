#!/home/hw/exercise24

main.o: main.cc
	g++-14 -Wall -std=c++2b -o main.o -c main.cc

utils/callRef.o: utils/callRef.cc
	g++-14 -Wall -std=c++2b -o utils/callRef.o -c utils/callRef.cc

utils/callValue.o: utils/callValue.cc
	g++-14 -Wall -std=c++2b -o utils/callValue.o -c utils/callValue.cc

utils/fun.o: utils/fun.cc
	g++-14 -Wall -std=c++2b -o utils/fun.o -c utils/fun.cc

utils/fun2.o: utils/fun2.cc
	g++-14 -Wall -std=c++2b -o utils/fun2.o -c utils/fun2.cc

libutils.a: utils/callRef.o utils/callValue.o utils/fun.o utils/fun2.o
	ar rvs libutils.a utils/callRef.o utils/callValue.o utils/fun.o utils/fun2.o

main: main.o libutils.a
	g++-14 -O2 -pg -o main main.o -L. -lutils
