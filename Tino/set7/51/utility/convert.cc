#include "utility.h"

#include <fstream>
#include <iostream>
#include <ios>

void convert(const string &name) {
                                    // Open file for reading and writing.
    fstream file(name, ios::out | ios::in | ios::ate);

    if (!file.is_open()) {          // Check if file is opened.
        cout << "Failed to open file.\n";
        return;
    }

    file.seekg(0);                  // Set read pointer to start.
    string output;                  // Will hold (modified) content.
    string line;
    bool firstLine = true;
    while (getline(file, line))
    {                               // Check if line is email line.
        if (!firstLine)             // Append newline after every line..
            output += "\n";
        else                        // ..except first line.
            firstLine = false;
        if (line.substr(0, 7) == "email: ")
            line = lowercase(line);
        output += line;
    }

    file.clear();                   // Clear state.
    file.seekp(0);                  // Rewrite file from start.
    file << output;                 // Replace file content with output.
    file.close();                   // Close file stream.
}