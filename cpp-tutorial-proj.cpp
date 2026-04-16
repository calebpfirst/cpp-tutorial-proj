// <-- Slashes are comments that you leave yourself or other programmers
#include <iostream> // <-- The C++ compiler will install a bunch of libraries and utilities for you to be able to use the language, you include them 
                    // as you need them. Compiling can take a very long time on larger projects, you reduce that time by only including what you need...
                    // iostream is console reading a writing on the command line

// All C++ programs have a point of entry that starts at the main() function
int main()
{
    // This is a variable that is a number or integer, it tells the computer that you want it to keep track of an integer value
    int integer_variable = 10; // <--I've stored '10' into memory
    std::cout << "Your variable is " << integer_variable; // <-- Write words to the console output, write the variable to the console after the words

    // Press the green 'play' button!

    return 0;
}