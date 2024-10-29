#include "utility.h"

#include <fstream>
#include <iostream>
#include <ios>

void convert(const string &name) {
                                    // Open file for reading and writing.
    fstream file(name, ios::out | ios::in);

    if (!file.is_open()) {          // Check if file is opened.
        cout << "Failed to open file.\n";
        return;
    }

    string output;                  // Will hold (modified) content.
    string line;
    while (getline(file, line))
    {                               // Check if line is email line.
        if (line.substr(0, 7) == "email: ")
            line = lowercase(line);
        output += line + "\n";
    }

    file.seekp(0);                  // Rewrite file from start.
    file << output;                 // Replace file content with output.
    file.close();                   // Close file stream
}