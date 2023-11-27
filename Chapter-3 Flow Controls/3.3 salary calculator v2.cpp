// A program that used to calculate the salary of an employee.

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Declare the required variables
    int workingHours;
    double bonusRate, baseSalary,  bonusPayment = 0.0;

    // Input the details
    cout << "Enter base salary: ";
    cin >> baseSalary;
  
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    // Assume the normal working hours are 40 or less.
    if (weeklyHours > 40) {
          cout << "Enter bonus rate per hour: ";
          cin >> bonusRate;
          // Calculate gross salary and bonus payment
          bonusPayment = weeklyHours * bonusRate;
    }
  
    // Display results
    cout << "Gross Salary: $" << fixed << setprecision(2) << baseSalary + bonusPayment  << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}
