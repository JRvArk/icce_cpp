#include "indent.ih"

void reset_indentation()
{	
	const char* command = "rst"; // HB: COAT, IRE
	indent_depth(command);
}
