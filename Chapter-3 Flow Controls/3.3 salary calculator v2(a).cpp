// A program that used to calculate the salary of an employee.

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Declare the required variables
    int workingHours;
    double bonusRate, baseSalary,  pension, incometax, bonusPayment = 0.0;

    // Input the details
    cout << "Enter base salary: ";
    cin >> baseSalary;
  
    cout << "Enter weekly working hours: ";
    cin >> workingHours;

    // Assume the normal working hours are 40 or less.
    if (workingHours > 40) {
          cout << "Enter bonus rate per hour: ";
          cin >> bonusRate;
          // Calculate gross salary and bonus payment
          bonusPayment = workingHours * bonusRate;
    }

    cout<<"Enter income tax rate: ";
    cin>>incometax;

    // calculate net-salary
     pension = baseSalary * 0.07;
     float netSalary = (baseSalary + bonusPayment) * incometax;
  
    // Display results
    cout << "Gross Salary: $" << fixed << setprecision(2) << baseSalary + bonusPayment  << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout <<"Net Salary: $" << netSalary <<endl;

    return 0;
}
