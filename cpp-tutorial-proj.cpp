// <-- Slashes are comments that you leave yourself or other programmers
#include <iostream> // <-- The C++ compiler will install a bunch of libraries and utilities for you to be able to use the language, you include them 
                    // as you need them. Compiling can take a very long time on larger projects, you reduce that time by only including what you need...
                    // iostream is console reading a writing on the command line
#include <cmath>

#define _USE_MATH_DEFINES

struct CharacterPlayer
{
    CharacterPlayer(int x, int y, char character)
    {
        location_x = x;
        location_y = y;
        position_char = character;
    }
    int location_x;
    int location_y;
    char position_char;
};

std::string raw_gameboard[10] =
{
    {"##########"},
    {"#        #"},
    {"#        #"},
    {"#        #"},
    {"#        #"},
    {"#        #"},
    {"#        #"},
    {"#        #"},
    {"#      * #"},
    {"##########"}
};

struct GameBoard
{
    GameBoard(int lx, int ly, std::string* gameRef)
    {
        len_x = lx;
        len_y = ly;
        gameRefPtr = &gameRef[0];
    }

    const char EMPTY_SPACE = ' ';
    const char ITEM_SPACE = '*';
    const char WALL_SPACE = '#';
    int len_x;
    int len_y;
    std::string* gameRefPtr;
};

class Car
{
public:
    Car(int wCount, int dCount)
    {
        wheelCount = wCount;
        doorCount = dCount;
    }
    void Accelerate(double newVel, double newDirectionRads)
    {
        velocityFPS = newVel;
        directionRads = newDirectionRads;
        positionFtX += velocityFPS * cos(newDirectionRads);
        positionFtY += velocityFPS * sin(newDirectionRads);
    }
    double velocityFPS;
    double directionRads;
    int positionFtX = 0;
    int positionFtY = 0;
    int wheelCount = 4;
    int doorCount = 2;
};

class Challenger : Car
{

};


// All C++ programs have a point of entry that starts at the main() function
int main()
{
    Car blueCar(4, 2);
    CharacterPlayer Jackson (0, 0, 'J');
    CharacterPlayer Caleb (9, 9, 'C');
    // This is a variable that is a number or integer, it tells the computer that you want it to keep track of an integer value
    int input_variable = 1;
    int another_variable = input_variable;
    int* reference_to_input_variable = &input_variable;
    std::cout << "Car Position[" << blueCar.positionFtX << "," << blueCar.positionFtY << "]" << std::endl;
    int vel = 1;
    for (vel; vel < 25; ++vel)
    {
        blueCar.Accelerate(vel, 0);
        std::cout << "Car Position[" << blueCar.positionFtX << "," << blueCar.positionFtY << "]" << std::endl;
    }
    for (vel; vel < 55; ++vel)
    {
        blueCar.Accelerate(vel, 3.14159f / 2.0f);
        std::cout << "Car Position[" << blueCar.positionFtX << "," << blueCar.positionFtY << "]" << std::endl;
    }
    


    // Press the green 'play' button!

    return 0;
}