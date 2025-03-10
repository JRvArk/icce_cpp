// JB: ?
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //JB: COCO
    size_t nrSims = stoul(argv[1]); //JB: BS: use before check.
    //JB: Try to initialize at once, so you can make it const.
    bool verbose = false;
    
    if (argc == 3)
    {
        string arg2 = argv[2];
                                    // Check for the random option (r).
        if (arg2.find("r") != string::npos)
            srandom(time(0)); //JB: FLOW
        else
            srandom(0);

                                    // Check for the verbose option.
        if (arg2.find("v") != string::npos)
            verbose = true;
    }

    size_t hits = 0;
                                    // Run the simulation for nrSims times.
    for (size_t sim = 0; sim < nrSims; ++sim)
    {
        size_t selected = random() % 3; //JB: NSC
        size_t prize = random() % 3;
        size_t opened; //JB: AI.
        do
        {
            opened = random() % 3;
        }
        while (opened == prize || opened == selected);
        
        size_t suggested = 3 - opened - selected; //JB: NSC

        if (suggested == prize)
            ++hits;

        if (verbose)                // Print all info when verbose is selected. 
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
