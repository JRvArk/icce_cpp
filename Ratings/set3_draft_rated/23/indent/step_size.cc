#include "indent.ih"

void step_size(size_t size)
{
	const char* command = "set";
	indent_depth(command, size);
}
