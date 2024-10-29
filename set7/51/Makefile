CXX = g++-14
CXXFLAGS = --std=c++26 -Wall

CXX_LIBSOURCES_UTILITY = $(shell find utility -type f -name \*.cc)
CXX_LIBOBJS_UTILITY = $(patsubst %.cc, %.o, $(CXX_LIBSOURCES_UTILITY))

main: main.o libutility.a
	$(CXX) $(CXXFLAGS) main.o -L. -lutility -o main

$(CXX_LIBOBJS_UTILITY) : %.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

libutility.a: $(CXX_LIBOBJS_UTILITY)
	ar rcs $@ $^

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main main.o $(CXX_LIBOBJS_UTILITY)