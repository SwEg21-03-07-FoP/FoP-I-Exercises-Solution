/* This program prompts the fuel tank capacity in gallons of an automobile and the miles per gallons the automobiles can be driven.
*  Then it outputs the number miles the automobile cam be driven without refueling.
*/
#include <iostream>
using namespace std;

int main() {
    // Declare the neccessary variables
    double tank_capacity, miles_per_Gallon, miles_driven;

    // Input tank capacity in gallons and miles per gallon
    cout << "Enter the capacity of the fuel tank of an automobile in gallons: ";
    cin >> tank_capacity;
    cout << "Enter the miles per gallon of the automobile can be driven: ";
    cin >> miles_per_Gallon;

    // Calculate miles the automobile can be driven and display it
    miles = tank_capacity * miles_per_Gallon;
    cout << "The automobile can be driven " << miles << " miles without refueling." << endl;

    return 0;
}
