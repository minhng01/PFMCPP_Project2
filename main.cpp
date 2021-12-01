#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 double
 char
 bool
 void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int chapter = 2;
    int age = 20;
    int level = 3;

    float result = 9.5f;
    float ratio = 0.4f;
    float randomNum = 490.23f;  
    
    double homeTemperature = 70.5;
    double startNum = 10.0555;
    double endRange = 1000.33333;

    char firstChar = 'a';
    char lastChar = 'z';
    char myChar = 'm';

    bool checked = false;
    bool sorted = false;
    bool repeated = true;

    ignoreUnused(number, chapter, age, level, result, ratio, randomNum, homeTemperature, startNum, endRange, firstChar, lastChar, myChar, checked, sorted, repeated); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool checkInRange(int myNum = 5, int start = 0, int end = 10)
{
    ignoreUnused(myNum, start, end);
    return {};
}

/*
 2)
 */
int rollDice(int numOfDice = 3, int numOfPlayer = 2, bool repeated = false)
{
    ignoreUnused(numOfDice, numOfPlayer, repeated);
    return {};
}

/*
 3)
 */
double calculateRatio(double dividend, double divisor)
{
    ignoreUnused(dividend, divisor);
    return {};
}

/*
 4)
 */
void turnOff(int computerId = 0)
{
    ignoreUnused(computerId);
}

/*
 5)
 */
float sumOfScore(float player1, float player2)
{
    ignoreUnused(player1, player2);
    return {};
}

/*
 6)
 */
char convertNumToChar(int number = 0, bool inRange = true)
{
    ignoreUnused(number, inRange);
    return {};
}

/*
 7)
 */
void cookDinner(int ingredientId = 0, int temperature = 400, char temperatureUnit = 'f', float duration = 3.5f, char durationUnit = 'h')
{
    ignoreUnused(ingredientId, temperature, temperatureUnit, duration, durationUnit);
}

/*
 8)
 */
int getTotalRegistration(int courseId = 0, int numOfStudent = 90, int numOfSession = 2)
{
    ignoreUnused(courseId, numOfStudent, numOfSession);
    return {};
}

/*
 9)
 */
char getLetter(int studentId = 0, int charPosition = 0)
{
    ignoreUnused(studentId, charPosition);
    return {};
}

/*
 10)
 */
bool checkOverSpeedLimit(float carSpeed, float maxSpeed)
{
    ignoreUnused(carSpeed, maxSpeed);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto numberChecked = checkInRange(25, 1, 20);
    //2)
    auto resultDiceNumber = rollDice(1, 1, false);
    //3)
    auto ratio = calculateRatio(9, 100);
    //4)
    turnOff(10);
    //5)
    auto finalScore = sumOfScore(30.5f, 99.2f);
    //6)
    auto resultChar = convertNumToChar(4, true);
    //7)
    cookDinner(2, 375, 'f', 2.5f, 'h');
    //8)
    auto numOfRegistration = getTotalRegistration(23, 40, 3);
    //9)
    auto studentChar = getLetter(4, 0);
    //10)
    auto limitChecked = checkOverSpeedLimit(30.0f, 25.0f);
    
    ignoreUnused(carRented, numberChecked, resultDiceNumber, ratio, finalScore, resultChar, numOfRegistration, studentChar, limitChecked);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
