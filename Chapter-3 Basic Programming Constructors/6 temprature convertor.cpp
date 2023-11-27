// A program that converts temperature in degree celsius into degree  fahrenheit.
#include <iostream>
using namespace std;

int main() {
    // Initialize default temperature in Celsius
    double celsTemperature = 0.0, fahrTemperature;

    // Allow the user to enter temperature in Celsius
    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsiusTemperature;

    // Convert the temperature entered in Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrTemperature = (celsTemperature * 9.0 / 5.0) + 32.0;

    // Display the converted temperature
    cout << "Equivalent temperature in degrees Fahrenheit: " << fahrTemperature <<endl;

    return 0;
}

