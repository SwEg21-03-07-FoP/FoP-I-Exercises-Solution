#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Declare the required variables
    int workingHours;
    double bonusRate, baseSalary, pensionRate = 0.05, taxRate = 0.15;  //initializing the pension rate to 5% and tax rate to 15% respectively

    // Input the details
    cout << "Enter base salary: ";
    cin >> baseSalary;
  
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;

    // Calculate gross salary and bonus payment
    double bonusPayment = weeklyHours * bonusRate;
    double grossSalary = baseSalary + bonusPayment;

    // Calculate deductions
    double pensionDeduction = grossSalary * pensionRate;
    double taxDeduction = grossSalary * taxRate;

    // Calculate net salary
    double netSalary = grossSalary - pensionDeduction - taxDeduction;

    // Display results
    cout << "Gross Salary: $" << fixed << setprecision(2) << grossSalary << endl;
    cout << "Pension Deduction: $" << pensionDeduction << endl;
    cout << "Tax Deduction: $" << taxDeduction << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}
