#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

namespace {

string const usageMsg =
R"RSL(
Provided wrong cml arguments.
Usage: ./a.out nrSims [option]
Where:
    - nrSims:       positive integral that determines number of
                    simulations to run.
    - [option] : [-v/-r/-vr/-rv] 
                    if 'v' is specified in any combination the output
                    is given in verbose style. If so for r, then 
                    the simulation is performed 'randomly'. A
                    new seed is set every program run.
)RSL";

} // usage message that is displayed when argc is not appropriate.

int main(int argc, char *argv[])
{
    if (argc != 2 && argc != 3)     // check whether the desired number
    {                               // of cml arguments is provided,
        cout << usageMsg << '\n';   // so as to prevent out of range indexing.
        return 1;
    }

    size_t const nrSims = stoul(argv[1]);
    
                                    // check whether the -v option is given.
    bool const verbose = (argc == 3 &&
                          string(argv[2]).find("v") != string::npos);
                                    
                                    // check if -r option is specified and
                                    // set seed appropriately.
    if (argc == 3 && string(argv[2]).find("r") != string::npos)
        srandom(time(0));           // Set a new random seed.
    else
        srandom(0);                 // Default seed.
    
    size_t hits = 0;       
                                        // Run the simulation for nrSims times.
    for (size_t sim = 0; sim < nrSims; ++sim)
    {
        size_t selected = random() % 3; // make the selected door by player
        size_t prize = random() % 3;    // and prize door randomly 0, 1, or 2.
        size_t opened = 0;              // First initialize to 0, as AI.
        do
        {
            opened = random() % 3;
        }
        while (opened == prize || opened == selected);
        // Above, the opened door is repeatedly selected to be 0,1, or 2, 
        // until it differs from both prize door and selected door. Note
        // that we can't use the method below, as when selected and prize
        // are equal, opened would get inappropriate results.
        
        size_t suggested = 3 - opened - selected;
        // Above, for any combination of opened and selected, the formula
        // finds the remaining door.

        if (suggested == prize)     // To find the number of times the sugges-
            ++hits;                 // ted change is actually the prize door.

        if (verbose)                // Print all info when verbose is selected. 
        {
            cout << "selected: " << selected
                 << ", prize behind: " << prize
                 << ", opened: " << opened
                 << ", suggested: " << suggested << '\n';
        }
    }
                                        // Print final summary.
    cout << "#iterations: " << nrSims
         << ", #hits: " << hits
         << ", hit percentage: " << (100.0 * hits / nrSims) << "%" << '\n';
        
}
