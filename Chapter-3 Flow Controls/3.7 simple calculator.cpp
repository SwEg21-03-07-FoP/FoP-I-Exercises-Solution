/* A simple calculator program in C++ that uses a switch statement to perform 
  the five basic arithmetic operations on two numbers enter by the user and display the result.
  The program should continiously ask (promt) the user input 0 to exit.
*/

#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char isContinue;

    do {
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter two numbers separted by space: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "The sum of the two numbers (num1 + num2) is: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The difference of the two numbers (num1 - num2) is: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "The product of the two numbers (num1 * num2) is: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "The quotient of num1/num2 is: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is undefined.\n";
                }
                break;
            case '%':
                if (num2 != 0) {
                    cout << "The reminder of num1/num2 is: " << num1 % num2 << endl;
                } else {
                    cout << "Error: Division by zero is undefined.\n";
                }
                break;
            
            default:
                cout << "Invalid operator. Please enter a valid operator.\n";
      }

      cout << "Enter 0 to exit or 1 to continuee: ";
      cin >> isContinue;
      
    } while (isContinue);  

    return 0;
}
