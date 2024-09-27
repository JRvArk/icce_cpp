#!/home/hw/exercise23

main.o: main.cc
	g++-14 -Wall -std=c++2b -o main.o -c main.cc

indent/step_size.o: indent/step_size.cc
	g++-14 -Wall -std=c++2b -o indent/step_size.o -c indent/step_size.cc

indent/indented_cout.o: indent/indented_cout.cc
	g++-14 -Wall -std=c++2b -o indent/indented_cout.o -c indent/indented_cout.cc

indent/indent_less.o: indent/indent_less.cc
	g++-14 -Wall -std=c++2b -o indent/indent_less.o -c indent/indent_less.cc

indent/indent_more.o: indent/indent_more.cc
	g++-14 -Wall -std=c++2b -o indent/indent_more.o -c indent/indent_more.cc

indent/reset_indent.o: indent/reset_indent.cc
	g++-14 -Wall -std=c++2b -o indent/reset_indent.o -c indent/reset_indent.cc

indent/indent_depth_handler.o: indent/indent_depth_handler.cc
	g++-14 -Wall -std=c++2b -o indent/indent_depth_handler.o -c indent/indent_depth_handler.cc
	
libindent.a: indent/indent_less.o indent/indent_more.o indent/reset_indent.o indent/indented_cout.o indent/step_size.o indent/indent_depth_handler.o
	ar rvs libindent.a indent/indent_less.o indent/indent_more.o indent/reset_indent.o indent/indented_cout.o indent/step_size.o indent/indent_depth_handler.o

main: main.o libindent.a
	g++-14 -Wall -std=c++2b -o main main.o -L. -lindent
