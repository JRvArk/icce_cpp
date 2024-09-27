#ifndef INDENT_H_

#define INDENT_H_

void indent_less();

void indent_more();

void reset_indentation();

size_t indent_depth(const char* command, size_t step_input = 1);

std::ostream& indented_cout();

void step_size(int size);
#endif
