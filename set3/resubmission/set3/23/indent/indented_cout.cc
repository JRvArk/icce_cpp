#include "indent.ih"

ostream& indented_cout()
{	
	size_t indentation_depth = indent_depth(REQ);
	for (size_t idx = 0; idx < indentation_depth * INDENT_SPACE_AMT; idx++)
		cout << ' ';
	return cout;
}
