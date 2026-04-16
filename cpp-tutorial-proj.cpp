// <-- Slashes are comments that you leave yourself or other programmers
#include <iostream> // <-- The C++ compiler will install a bunch of libraries and utilities for you to be able to use the language, you include them 
                    // as you need them. Compiling can take a very long time on larger projects, you reduce that time by only including what you need...
                    // iostream is console reading a writing on the command line

// All C++ programs have a point of entry that starts at the main() function
int main()
{
    // This is a variable that is a number or integer, it tells the computer that you want it to keep track of an integer value
    int integer_variable = 10; // <--I've stored '10' into memory
    std::cout << "Your variable is " << integer_variable << std::endl; // <-- Write words to the console output, write the variable to the console after the words

    // This is a loop, it will just create a variable inside of it and loop as many times as you specify
    // for (create a variable 'counter' and set it = 1;
    // loop until the counter is no longer less than the 'integer_variable';
    // 'counter++' is the same as saying "counter = counter + 1" for each time it loops)
    for (int counter = 1; counter < integer_variable; counter++)
    {
        std::cout << "Loop Count = " << counter << std::endl;   //  <-- std::endl is telling the console that we want a new line after we right each time
    }



    // Press the green 'play' button!

    return 0;
}