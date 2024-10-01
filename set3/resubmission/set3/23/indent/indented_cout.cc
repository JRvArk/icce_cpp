#include "indent.ih"

ostream& indented_cout()
{	
	const char* command = "req"; // HB: COAT
	size_t indentation_depth = indent_depth(command);
	for (size_t idx = 0; idx < indentation_depth; idx++) // HB: CANON, PP
	{
		cout << "\t"; // HB: PERL, NAE
	}
	return cout;

}
