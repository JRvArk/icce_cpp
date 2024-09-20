using namespace std;

int main()
{
        string input;
        while (cin >> input)
        {
                string output = "";
                for (size_t idx = 0; idx < input.size(); idx++)
                {
                        size_t nb_codepoints = 0;
                        if ( (input[idx] >> 8) & 1 )
                        {
                                nb_codepoints++;
                                if ( (input[idx] >> 7) & 1 )
                                {
                                        nb_codepoints++;
                                        if ( (input[idx] >> 6) & 1 )
                                                nb_codepoints++;
                                }
                        }

                        switch( nb_codepoints )
                        {
                                case 3:
                                        output = input[idx + 3] + output;                                         
                                        [[fallthrough]];
                                case 2:
                                        output = input[idx + 2] + output;>                                        
                                        [[fallthrough]];
                                case 1:
                                        output = input[idx + 1] + output;                                         
                                        [[fallthrough]];
                                default:
                                        output = input[idx] + output;
                        }
                        idx += nb_codepoints;
                }
                cout << output << "\n";
        }
}
