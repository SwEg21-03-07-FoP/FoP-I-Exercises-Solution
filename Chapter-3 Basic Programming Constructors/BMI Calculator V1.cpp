#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the weight, height, bmi.
    double weight, height, bmi;

    // Accept the input: weight and height from the user
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI and display it
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}
