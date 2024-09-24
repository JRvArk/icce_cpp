// JB: 0
//JB: NAE: feeding the program even one sentence that goes beyond 80 chars
//JB: results in bogus output.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputText;
    while (getline(cin, inputText))
    {
        //JB: COCO
        size_t inputTextLength = inputText.length();
        //JB: Magic? (*1)
        if (inputTextLength < 80)   // Lines below 80 chars in length are fine.
            cout << inputText << '\n';
        //JB: If you continue into the next iteration here, you can skip the
        //JB: indentation of the rest of the loop. Then again, this makes the
        //JB: branching clearer. Your choice.
        else
        {
            size_t idx = 0;
            //JB: BAK
            //JB: Suppose the line is longer than 80 chars and we enter this loop...
            while(idx <= inputTextLength)
                                    // Test for spaces or tabs at idx after 72
            {                       // characters at each iteration.
                //JB: WHEEL, (*2)
                //JB: n % 72 <= 71 for any n.
                //JB: So as long as we don't encounter spaces, we continue
                //JB: even past the length of the string, well into uncharted
                //JB: memory. I think you did not test your program.
                while(!isspace(inputText[idx]) || idx % 72 <= 71)
                    cout << inputText[idx++];
                cout << '\n';
            }
        }
    }
}
/* JB:
   *1) That 80 is not exactly magic. You mean 80 positions, not 79.
       But think what happens if two years from now you want to adjust it, and
       the program has grown. You'd have to hunt through all the source code
       to find which '80' means the number of positions, and which means
       something else. So give it a symbolic name in an enum already. Then all
       you'll have to do is change a single value.
   *2) For efficiency, put the partial condition that hits most often first.
       Logical operators short-cut in C++, so the other half often won't even
       be evaluated.
 */
