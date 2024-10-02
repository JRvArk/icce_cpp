// HB: rating: ?

#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        usageMsg();
        return 1;
    }
    
    if (!structCall(argc, argv))
        return 1;
    boundCall(argc, argv);
}
