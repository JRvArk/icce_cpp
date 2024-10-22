CXX = g++-14
CXXFLAGS = --std=c++26 -Wall

CXX = g++-14
CXXFLAGS ?= --std=c++26 -Wall

CXX_LIBSOURCES_CHARCOUNT = $(shell find charcount -type f -name \*.cc)
CXX_LIBOBJS_CHARCOUNT = $(patsubst %.cc, %.o, $(CXX_LIBSOURCES_CHARCOUNT))

$(CXX_LIBOBJS_CHARCOUNT): %.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

main: main.o libcharcount.a
	$(CXX) $(CXXFLAGS) main.o -L. -lcharcount -o main 

libcharcount.a: $(CXX_LIBOBJS_CHARCOUNT)
	ar rcs $@ $^ 

LIBOBJS = $(CXX_LIBOBJS_CHARCOUNT)
LIBS = $(shell find ./ -type f -name \*.a)

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main $(LIBS) main.o $(LIBOBJS)