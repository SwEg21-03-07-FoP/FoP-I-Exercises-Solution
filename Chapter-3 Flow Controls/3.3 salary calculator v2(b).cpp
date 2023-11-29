// A program that used to calculate the salary of an employee.

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Declare the required variables
    int workingHours;
    double baseSalary, incometax; bonusPayment = 0.0;

    // Input the details
    cout << "Enter base salary: ";
    cin >> baseSalary;
  
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    // Assume the normal working hours are 40 or less.
    if (weeklyHours > 40) {
          float bonusRate;
          cout << "Enter bonus rate per hour: ";
          cin >> bonusRate;
          // Calculate gross salary and bonus payment
          bonusPayment = weeklyHours * bonusRate;
    }

    // calculate net-salary
     float pension = baseSalary * 0.07;
     float gross_salary = baseSalary + bonusPayment;

     if (gross_salary >= 3500) {
        incometax = gross_salary * 0.3;
     } else if (gross_salary >= 2000)
     {
        incometax = gross_salary * 0.25;
     } else if (gross_salary >= 1200)
     {
        incometax = gross_salary * 0.2;
     } else if (gross_salary >= 600)
     {
        incometax = gross_salary * 0.15;
     } else if (gross_salary >= 200)
     {
        incometax = gross_salary * 0.1;
     } else
     {
        incometax = 0.0;
     }   

     float netSalary = gross_salary - incometax - pension;
  
    // Display results
    cout << "Gross Salary: $" << fixed << setprecision(2) << baseSalary + bonusPayment  << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Income Tax: $"<< incometax <<endl;
    cout << "Pension: $"<< pension <<endl;
    cout <<" Net Salary: $" << netSalary <<endl;

    return 0;
}
