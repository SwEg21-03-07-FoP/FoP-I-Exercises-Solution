/*
Write a program that asks the user for a positive integer value and
find the factorial of the value using 
(1) a while loop, 
(2) a do-while loop, and 
(3) a for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    // while loop
    int temp = num;
    while (num > 0) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << num << " = " << factorial << endl;

    // do-while loop
    num = temp;
    factorial = 1;
    do {
        if (num <= 0) {
            break;
        }
        factorial *= i;
        i++;
    } while (num >= num);
    cout << "Factorial of " << num << " = " << factorial << endl;

    // for loop
    factorial = 1;
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}
