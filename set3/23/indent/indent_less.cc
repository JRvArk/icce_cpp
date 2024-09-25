#include "indent.ih"

void indent_less()
{
	static bool function_not_called = true;
	static size_t indentation_step = 1;
	static size_t indentation_depth = 0;
        if (function_not_called)
                function_not_called = false;
	if (indentation_depth - indentation_step > 0)
		indentation_depth -= indentation_step;

