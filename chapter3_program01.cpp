/*
Dillon Fleharty
COSC 1337 - Spring 2022
Chapter 3 - Program 1
Miles Per Gallon
-----------------------------------------------------------------------
Write a program that calculates a car's gas mileage. The program should
ask the user to enter the number of gallons of gas the car can hold and
the number of miles it can be driven on a full tank. It should then
calculate and display the number of miles per gallon the car gets.
------------------------------------------------------------------------

*/
#include <iostream>

using namespace std;

int main() {
    
    cout << "\n-----------------------------------------------------\n";

    double range, gallons, miles;

    cout << "How many gallons is your gas tank: ";
    cin >> gallons;

    cout << "How many miles can you drive on a tank of gas? ";
    cin >> miles;

    range = miles / gallons;

    cout << "You car gets " << range << " miles per gallon.\n";

    cout << "-----------------------------------------------------\n";
    cout << "\n***End Program***\n\n";
    

    return 0;
}
