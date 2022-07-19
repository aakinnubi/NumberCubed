// NumberCubed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Function Declaration
void PrintMyArgument(string argument);
int AddUpLevelUpU(int previousLevel, int currentLevel, int nextLevel);
float maxNumberDetector(float param[]);
int PassByReference(int &x, int &y);
//pass by reference 
int Cubbed(int number);
int Cubbed(int number, int power);

//end of declaring pass by reference
int main()
{
    std::cout << "Hello World!\n";
    PrintMyArgument("Argument Level Up U");
    int previousLevel = 2;
    int currentLevel = 4;
    int nextLevel = 10;
    cout << "Your previous level is " << previousLevel << " and your current level is " << currentLevel << " your next level is " << nextLevel << " Therefore you have Level Up U " << AddUpLevelUpU(previousLevel, currentLevel, nextLevel) << endl;
    float arr[] = { 12,13,16 };
    cout << endl << maxNumberDetector(arr) << endl;

    int newX = 30;
    int newY = 40;
    cout << "previous value is :" << newX << " " << newY << " and new value is  " << endl;
    PassByReference(newX, newY);
    cout << " " << newX << " " << newY << endl;
    cout << "Please enter the number you want to cubed: " << endl;
    int number;
    cin >> number;
    cout << "the powered cubbed is : " << Cubbed(number) << endl;
}

// functions with return type Demo
void PrintMyArgument(string argument) {
    cout << argument << endl;
}
int AddUpLevelUpU(int previousLevel, int currentLevel, int nextLevel)
{
    return previousLevel+currentLevel+nextLevel;
}
float maxNumberDetector(float param[])
{
    int f = sizeof(param);
    float max = 0.0f;
    for (int i = 0; i < sizeof(param); i++)
    {
        if (param[i] > max) {
            max = param[i];
        }
    }
    return max;
}
int PassByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return 0;
}
int Cubbed(int number)
{
    return Cubbed(number,3);
}
int Cubbed(int number, int power)
{
    if (power == 1) {
        return number;
    }
    else {
        return number * Cubbed(number, power - 1);
    }

}
//End of function with return type demo

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
