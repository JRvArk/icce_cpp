#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>
#include <cstddef>

struct CharCount
{
    enum Action                     // enum to decide action
    { 
        APPEND,
        INC,
        INSERT
    };

    struct Char
    {
        char ch;                    // the character itself
        size_t count;               // amount of occurences of char
    };

    struct CharInfo                 // char frequency of all chars
    {
        Char *charPtr = 0;          // points to Char objects
        size_t nCharObj = 0;        // number of Char objects stored
    };

    CharInfo d_charInfo;
    size_t d_capacity;

    public:
        CharCount();
        ~CharCount();
        void count(std::istream &in);   // count occurences of characters
        CharInfo const info();          // return d_charInfo
        inline size_t capacity() const
        {
            return d_capacity;
        }
    
    private:
        Action locate(char ch);         // return Action for character
        void append(char ch);           // append character to end of charPtr
        void insert(char ch);           // insert character in charPtr
        void increment(char ch);        // increment the count of character
        void checkSize();               // check size and resize if needed
        void resize();                  // double capacity
};

#endif