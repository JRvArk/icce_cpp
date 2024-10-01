#include "indent.ih"
#include <string>

size_t indent_depth(const char* command_input, size_t step_input)
{
	static size_t step = 1;
	static size_t indent_depth = 0;
	static size_t nb_calls = 0;
	string command = command_input;
	string str;
   
    // HB: all this if-elsing is TC, whereas other the functions might as well be one-liners.
    // HB: also, please use ++ and -- where you can
	if (command == "inc")
	{
  		indent_depth += step;
		nb_calls += 1;
	}
	else if (command == "dec")
	{
			if (indent_depth >= step) // HB: L
			indent_depth -= step;
		nb_calls += 1;
	}
	else if (command == "rst")
	{
		indent_depth = 0;
		nb_calls += 1;
	}
	else if (command == "set")
	{
		if (nb_calls == 0)	
			step = step_input;
	}
	else
		return indent_depth;

	return 0;
	
}
