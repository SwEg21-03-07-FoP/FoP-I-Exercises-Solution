/* A program that find the BMI of a person given height and weight and 
 * determine the level of BMI of for N persons.
 * using while loop stmts
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare required variables to store the weight, height, bmi and gender
    double weight, height, bmi;
    char gender;
    int numPerson;

    cout<<"How many pereson's BMI you want check? ";
    cin>>numPerson;

    // using for loop stmt to iterate the program excution for N persons
    int i = 1;   // initializing the counter
    while ( i <= numPerson) {
      cout<<"Person #"<<i<<" Record:"<<endl;
  
    // Ask the user to enter weight, height, and gender respectively
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    cout << "Enter gender (M/F): ";
    cin >> gender;

    // Calculate the BMI and display it
    bmi = weight / pow(height, 2);
    cout << "Your BMI is " << bmi <<endl;
  
    // Determine weight level based on BMI and gender 
    // Using nested if else if stmts
    if (bmi >= 30) {
        cout << "You are obese. It's recommended to consult with a healthcare professional." << endl;
    }
    if (gender == 'M' || gender == 'm') {
        cout<<"Your gender is Male."<<endl;
        if (bmi < 20.5) {
            cout << "You are underweight. Consider gaining some weight." << endl;
        } else if (bmi >= 20.5 && bmi < 26) {
            cout << "You have a normal weight. Keep it up!" << endl;
        } else {
            cout << "You are overweight. Consider losing some weight." << endl;
        } 
    } else if (gender == 'F' || gender == 'f') {
        cout<<"Your gender is Female."<<endl;
        if (bmi < 18.5) {
            cout << "You are underweight. Consider gaining some weight." << endl;
        } else if (bmi >= 18.5 && bmi < 24) {
            cout << "You have a normal weight. Keep it up!" << endl;
        } else if (bmi >= 24 && bmi < 30) {
            cout << "You are overweight. Consider losing some weight." << endl;
        }
    } else {
        cout << "Invalid gender" <<endl;
    }
      ++i;   //update the counter
  }
    return 0;
}

