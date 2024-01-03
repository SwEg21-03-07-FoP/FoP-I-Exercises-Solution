
// A program that used to calculate the salary of an employee.
// The program will ask the user to enter the base salary and the number of working hours and the bonus rate per hour.
// If the number of working hours is more than 40 hours,the program will calculate the bonus payment and add it to the gross salary.
// The program will display the gross salary and the bonus payment.
// The program will repeat the process until the user enters 0 to exit.

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Declare the required variables
    int workingHours;
    double bonusRate, baseSalary,  bonusPayment = 0.0;

   bool stop = false;
   do {
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

     cout<<"Press 0 to exit and any key to continuee .... ";
     cin>>stop;
   } while (stop);
  
    return 0;
}
