#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t nrSims = stoul(argv[1]);
    bool verbose = false;
    
    if (argc == 3)
    {
        string arg2 = argv[2];
        if (arg2.find("r") != string::npos)
            srandom(time(0));
        else
            srandom(0);

        
        if (arg2.find("v") != string::npos)
            verbose = true;
    }

    size_t hits = 0;
    for (size_t i = 0; i != nrSims; i++)
    {
        size_t selected = random() % 3;
        size_t prize= random() % 3;

        size_t opened;
        do
        {
            opened = random() % 3;
        }
        while (opened == prize || opened == selected);
        
        size_t suggested = 3 - opened - selected;

        if (suggested == prize)
            ++hits;

        if (verbose)
        {
            cout << "selected: " << selected
                 << ", prize behind: " << prize
                 << ", opened: " << opened
                 << ", suggested: " << suggested << '\n';
        }
    }

    cout << "#iterations: " << nrSims
         << ", #hits: " << hits
         << ", hit percentage: " << (100.0 * hits / nrSims) << "%" << '\n';
        
}