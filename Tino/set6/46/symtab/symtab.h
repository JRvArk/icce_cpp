#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_

#include <string>
#include "../symbol/symbol.h"

class Symtab
{
    public:
        Symtab();
        Symbol& const find(string const &name) const;

    private:
};
        
#endif
