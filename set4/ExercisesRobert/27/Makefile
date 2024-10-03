CXX = g++-14
CXXFLAGS ?= --std=c++26 -Wall

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

readPersons.o: readPersons.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

writePersons.o: writePersons.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

main: main.o readPersons.o writePersons.o
	$(CXX) $(CXXFLAGS) $^ -L../26/ -lconv -o $@

