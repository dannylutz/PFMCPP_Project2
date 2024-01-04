#include <iostream>

template <typename... T>
void ignoreUnused(T&&...)
{
}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.

 1) Write down the names of the 6 major primitive types available in C++  here:

 int
 float
 bool
 double
 char
 unsigned int

2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations()
{
    int numberOfSquirrels = 3;
    int numberOfCats = 1;
    int numberOfDogs = 2;

    double magicNumber = 3.14;
    double rootMeanSquare = 1.414;
    double oddsOfRain = 0.5;

    bool isRaining = false;
    bool isSnowing = true;
    bool isSunny = false;

    float priceOfAdmission = 5.25f;
    float priceOfLunch = 12.99f;
    float priceOfCab = 20.75f;

    char favouriteLetter = 'z';
    char favouriteSymbol = '!';
    char favouriteNumber = '4';

    unsigned int planets = 8;
    unsigned int provinces = 10;
    unsigned int territories = 3;

    ignoreUnused(numberOfSquirrels, numberOfCats, numberOfDogs, magicNumber, rootMeanSquare, oddsOfRain, isRaining, isSnowing, isSunny, priceOfAdmission, priceOfLunch, priceOfCab, favouriteLetter, favouriteNumber, favouriteSymbol, planets, provinces, territories);
}

/*
 10 functions
 */

/*
 1)
 */
int getNumberOfAnimals(int lions, int bears, double unicorns = 0.707)
{
    ignoreUnused(lions, bears, unicorns);
    return {};
}

/*
 2)
 */
float getCostOfOuting(float priceOfLunch, float priceOfAdmission, float priceOfCab)
{
    ignoreUnused(priceOfLunch, priceOfAdmission, priceOfCab);
    return {};
}

/*
 3)
 */
bool confirmNiceWeather(int temperature, unsigned int humidity, int pop, unsigned int wind, bool sunny = true)
{
    ignoreUnused(temperature, humidity, pop, wind, sunny);
    return {};
}

/*
 4)
 */
void printTripDetails(unsigned int numberOfpassengers = 3,
                      double numberOfKilometers = 120,
                      unsigned int month = 1,
                      unsigned int day = 1,
                      int year = 2024)
{
    ignoreUnused(numberOfpassengers, numberOfKilometers, month, day, year);
}

/*
 5)
 */
void recordExpenses(float priceOfLunch, float priceOfAdmission, float priceOfCab, int jobId = 1010, char clientId = 'c')
{
    ignoreUnused(priceOfLunch, priceOfAdmission, priceOfCab, jobId, clientId);
}

/*
 6)
 */
void addInitialsToForm(char firstInitial, char middleInitial, char lastInitial)
{
    ignoreUnused(firstInitial, middleInitial, lastInitial);
}

/*
 7)
 */
void setPosition(double x = 0.0, double y = 0.0, double z = 0.0)
{
    ignoreUnused(x, y, z);
}

/*
 8)
 */
unsigned int getCandyCost(unsigned int numberOfCandies,
                              unsigned int numberOfPeople,
                              unsigned int numberOfCandyPerPerson = 1,
                              float costPerPiece = 0.42f)
{
    ignoreUnused(numberOfCandies, numberOfPeople, numberOfCandyPerPerson, costPerPiece);
    return {};
}

/*
 9)
 */
char getLetterByPosition(unsigned int letterPositionInAlphabet)
{
    ignoreUnused(letterPositionInAlphabet);
    return {};
}

/*
 10)
 */
bool getTrackArmState(int trackIndex = 1, bool absolute = true)
{
    ignoreUnused(trackIndex, absolute);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a
 single message.

 send me a DM to review your pull request when the project is ready for
 review.

 Wait for my code review.
 */

int main()
{
    // example of calling that function, storing the value, and passing it to
    // ignoreUnused at the end of main()

    // 1)
    auto animals = getNumberOfAnimals(3, 1);

    // 2)
    auto cost = getCostOfOuting(12.99f, 5.25f, 20.75f);

    // 3)
    auto weatherIsNice = confirmNiceWeather(80, 50, 100, 0, false);

    // 4)
    printTripDetails(4, 180, 1, 2, 2024);

    // 5)
    recordExpenses(12.99f, 5.25f, 20.75f, 1010, 'd');

    // 6)
    addInitialsToForm('c', 'a', 't');

    // 7)
    setPosition(1.1, 2.2, 3.3);

    // 8)
    auto candyBudget = getCandyCost(10, 5, 2, 0.42f);

    // 9)
    auto letterPosition = getLetterByPosition(3);

    // 10)
    auto trackArmState = getTrackArmState(12, false);

    ignoreUnused(animals, cost, weatherIsNice, candyBudget, letterPosition, trackArmState);

    std::cout << "good to go!" << std::endl;
    return 0;
}
