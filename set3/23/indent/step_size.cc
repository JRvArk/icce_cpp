#include "indent.ih"

void step_size(size_t size)
{
	static size_t indentation_step = 0;
	static bool functions_not_called = true;
	
	if (functions_not_called)
		indentation_step = size;
}
