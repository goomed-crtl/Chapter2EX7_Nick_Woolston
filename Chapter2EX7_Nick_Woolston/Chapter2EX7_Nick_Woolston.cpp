/* Title: Chapter 2 Exerise 7 - Ocean Levels
File Name : Chapter2EX7_Nick_Woolston.cpp
Programmer : Nicholas Woolston
Date : 27 / 09 / 2024
Requirements:
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of millimeters the ocean level rises per year..
*/

#include <iostream>
using namespace std;
const double oceanRise = 1.5;
const double fiveYears = 5;
const double sevenYears = 7;
const double tenYears = 10;

int main()
{
    cout << "The ocean will rise " << oceanRise * fiveYears << " milimeters in five years, " << oceanRise * sevenYears << " milimeters in seven years, and " << oceanRise * tenYears << " milimeters in ten years.\n";
    cout << "Now enter your own rate for how many milimeters the ocean will rise:\n";
    double userRise;
    cin >> userRise;
    cout << " The ocean will rise " << userRise * fiveYears << " milimeters in five years, " << userRise * sevenYears << " milimeters in seven years, and " << userRise * tenYears << " milimeters in ten years.";
    return 0;
}


