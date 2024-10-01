#include "indent.ih"

size_t indent_depth(Command const command, size_t step_input)
{
	static size_t step = 1;
	static size_t indent_depth = 0;
	static size_t nb_calls = 0;

	switch (command)
	{
		case (INCREASE):
			++indent_depth;
			++nb_calls;
			break;
		case (DECREASE):
			if (indent_depth >= step)
				indent_depth -= step;
			++nb_calls;
			break;
		case (RESET):
			indent_depth = 0;
			++nb_calls;
			break;
		case (SET):
			if (nb_calls == 0)
				step = step_input;
			break;
		default:
			return indent_depth;
	}
	
	return 0;
}