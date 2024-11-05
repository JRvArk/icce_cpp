// JB: 0
#include "utility.h"

#include <fstream>
#include <iostream>
#include <ios>

void convert(const string &name) {
                                    // Open file for reading and writing.
    fstream file(name, ios::out | ios::in | ios::ate);

    if (!file.is_open()) {          // Check if file is opened.
        cout << "Failed to open file.\n";
        //JB: I'd write to cerr. But yes, a check is good, and returning is,
        //JB: for the moment, the best you can do.
        return;
    }

    file.seekg(0);                  // Set read pointer to start.
    string output;                  // Will hold (modified) content.
    //JB: AU/RAM overflow. You're loading the entire file into memory.
    //JB: That's bad, especially if it doesn't fit.
    //JB: It's also Q as it circumvents the entire purpose of the exercise.
    //JB: Moreover, if you do that, then why bother with the per-line approach?
    string line;
    bool firstLine = true; //JB: Try to avoid state variables if possible.
    while (getline(file, line))
    {                               // Check if line is email line.
        if (!firstLine)             // Append newline after every line..
            output += "\n";
        else                        // ..except first line.
            firstLine = false;
        
        if (line.substr(0, 7) == "email: ") //JB: IRE. (Substr makes a copy.)
            line = lowercase(line);
        output += line;
    }

    file.clear();                   // Clear state.
    file.seekp(0);                  // Rewrite file from start.
    file << output;                 // Replace file content with output.
    file.close();                   // Close file stream.
}
