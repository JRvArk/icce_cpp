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

$(CXX_LIBOBJS_CALCULATOR): $(CXX_LIBSOURCES_CALCULATOR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

libcalculator.a: $(CXX_LIBOBJS_CALCULATOR)
	ar rcs $@ $^

$(CXX_LIBOBJS_LINE): $(CXX_LIBSOURCES_LINE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

libline.a: $(CXX_LIBOBJS_LINE)
	ar rcs $@ $^

$(CXX_LIBOBJS_PARSER): $(CXX_LIBSOURCES_PARSER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

libparser.a: $(CXX_LIBOBJS_PARSER)
	ar rcs $@ $^

main: main.o libcalculator.a libline.a libparser.a
	$(CXX) $(CXXFLAGS) main.o -L. -lcalculator -L. -lline -L. -lparser -o main 

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# clean:
# 	rm -f main libconv.a main.o $(CXX_LIBOBJS)