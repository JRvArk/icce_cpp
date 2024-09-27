#include "indent.ih"

void reset_indentation()
{	
	const char* command = "rst";
	indent_depth(command);
}
