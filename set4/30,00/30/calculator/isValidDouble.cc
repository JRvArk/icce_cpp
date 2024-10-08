#include "calculator.ih"
#include <string>
#include <regex>

bool Calculator::isValidDouble(string const &input)
{                               // Create regex that matches double format.
    std::regex pattern(R"(^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$)");
                                // Return true if input matches the format.
    return regex_match(input, pattern);
}