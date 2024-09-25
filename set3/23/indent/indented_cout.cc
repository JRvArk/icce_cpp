#include "indent.ih"

void indented_cout ()
{
	static bool function_not_called = true;
	static size_t indentation_depth = 0;
	if (function_not_called)
                function_not_called = false;
	const char str
	cout << string(indent_depth, "\t") << str << "\n";

}
