CXX = g++-14
CXXFLAGS ?= -std=c++26 -Wall

CXX_LIBSOURCES = $(shell find utils -type f -name \*.cc)
CXX_LIBOBJS = $(patsubst, %.cc, %.o, $(CXX_LIBSOURCES))

# target: prerequisites
#	terminal line..

# $@ : target
# $< : FIRST prerequisites
# $^ : ALL   prerequisites

main: main.o libconv.a
	$(CXX) $(CXXFLAGS) -o main main.o -L. -lconv

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(CXX_LIBOBJS): %.o : %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

libconv.a: person/person1.o person/person2.o
	ar rcs $@ $^

clean:
	rm -f main libconv.a main.o $(CXX_LIBOBJS)
