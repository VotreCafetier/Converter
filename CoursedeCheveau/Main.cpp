#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;

int main(int argc, char** argv)
{
    // init converter
    Converter converter;

    // list all the function
    const string Converters [10] = {
        "Pounds to Kilo",
        "Kilo to Pounds",
        "Fahrenheit to Celsius",
        "Celsius to Fahrenheit",
        "Meters to Feets",
        "Feets to Meters",
        "CM to Inches",
        "Inches to CM",
        "Liters to Gallons",
        "Gallons to Liters"
    };
    int lengthC = sizeof(Converters) / sizeof(Converters[0]);

    // print the main menu
    cout << "____________Menu____________\n";
    for (int i = 0; i < lengthC; i++)
        cout << to_string(i) + ". " + Converters[i] << endl;

    // waiting for input
    cout << "\nWhat do you want to do : ";
    int menuitem;
    cin >> menuitem;

    // while it is not an int and not in the range of the menu item
    while (cin >> menuitem)
    {
        cout << "\nPlease enter a valid item : ";
        cin >> menuitem;
    }

    // print the result chosen
    cout << "You chose " + Converters[menuitem] << endl;

    // asks for the number to convert
    double number;
    cout << "\nWhat is the number you want to convert : ";
    cin >> number;
    while (cin >> number)
    {
        cout << "\nPlease enter a valid number : ";
        cin >> number;
    }

    double fNumber;
    // launch the method
    switch (menuitem)
    {
        case 1:
            fNumber = converter.PoundKilo(number);
            break;
        case 2:
            fNumber = converter.KiloPound(number);
            break;
        case 3:
            fNumber = converter.FahrenheitCelsius(number);
            break;
        case 4:
            fNumber = converter.CelsiusFahrenheit(number);
            break;
        case 5:
            fNumber = converter.MeterFeet(number);
            break;
        case 6:
            fNumber = converter.FeetMeter(number);
            break;
        case 7:
            fNumber = converter.CmInches(number);
            break;
        case 8:
            fNumber = converter.InchesCm(number);
            break;
        case 9:
            fNumber = converter.LiterGallons(number);
            break;
        default:
            fNumber = converter.GallonsLiters(number);
            break;
    }

    // print the result
    cout << to_string(number)+" is "+to_string(fNumber) << endl;
}
