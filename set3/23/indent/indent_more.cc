#include "indent.ih"

void indent_more()
{
	static bool function_not_called = true;
	static size_t indentation_step = 1;
	static size_t indentation_depth = 0;
	if (function_not_called)
                function_not_called = false;
	indentation_depth += indentation_step;
}
