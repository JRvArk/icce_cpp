CXX = g++-14
CXXFLAGS = --std=c++26 -Wall

CXX_LIBSOURCES = 

CXX = g++-14
CXXFLAGS ?= --std=c++26 -Wall

CXX_LIBSOURCES_CALCULATOR = $(shell find calculator -type f -name \*.cc)
CXX_LIBOBJS_CALCULATOR = $(patsubst %.cc, %.o, $(CXX_LIBSOURCES_CALCULATOR))

CXX_LIBSOURCES_LINE = $(shell find ../28/line -type f -name \*.cc)
CXX_LIBOBJS_LINE = $(patsubst %.cc, %.o, $(CXX_LIBSOURCES_LINE))

CXX_LIBSOURCES_PARSER = $(shell find ../29/parser -type f -name \*.cc)
CXX_LIBOBJS_PARSER = $(patsubst %.cc, %.o, $(CXX_LIBSOURCES_PARSER))

$(CXX_LIBOBJS_CALCULATOR): %.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

main: main.o libcalculator.a libline.a libparser.a
	$(CXX) $(CXXFLAGS) main.o -L. -lcalculator -L. -lparser -L. -lline -o main 

libcalculator.a: $(CXX_LIBOBJS_CALCULATOR)
	ar rcs $@ $^ 

$(CXX_LIBOBJS_LINE): %.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

libline.a: $(CXX_LIBOBJS_LINE)
	ar rcs $@ $^ 

$(CXX_LIBOBJS_PARSER): %.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

libparser.a: $(CXX_LIBOBJS_PARSER)
	ar rcs $@ $^ 

LIBOBJS = $(CXX_LIBOBJS_CALCULATOR) $(CXX_LIBOBJS_LINE) $(CXX_LIBOBJS_PARSER)
LIBS = $(shell find ./ -type f -name \*.a)

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main $(LIBS) main.o $(LIBOBJS)