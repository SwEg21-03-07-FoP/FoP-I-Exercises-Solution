/* A program that find the BMI of a person given height and weight and 
 * determine the level of BMI of the person.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare required variables to store the weight, height, bmi and gender
    double weight, height, bmi;
    char gender;

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
    cout<<"Your gender is "<<gender<<endl;
  
    // Determine weight level based on BMI and gender 
    // Using if else if stmts
    if (bmi >= 30) {
        cout << "You are obese. It's recommended to consult with a healthcare professional." << endl;
    }
    else if ((gender == 'M' || gender == 'm') && bmi < 20.5) {
       cout << "You are underweight. Consider gaining some weight." << endl;
   } else if ((gender == 'M' || gender == 'm') && bmi >= 20.5 && bmi < 26) {
       cout << "You have a normal weight. Keep it up!" << endl;
   } else if ((gender == 'M' || gender == 'm') && bmi >= 26 && bmi < 30){
       cout << "You are overweight. Consider losing some weight." << endl; 
    } else if ((gender == 'F' || gender == 'f') && bmi < 18.5) {
       cout << "You are underweight. Consider gaining some weight." << endl;
   } else if ((gender == 'F' || gender == 'f') && bmi >= 18.5 && bmi < 24) {
       cout << "You have a normal weight. Keep it up!" << endl;
   } else if ((gender == 'F' || gender == 'f') && bmi >= 24 && bmi < 30){
       cout << "You are overweight. Consider losing some weight." << endl; 
  } else {
        cout << "Invalid gender" <<endl;
  }

    return 0;
}
