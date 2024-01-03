/*
Write a program that accepts an integer from the user and perform the following.
Provide a menu for a user to choose from the following options. 
The program should find the appropriate solution based on the user’s choice.
The program should continue to run until the user chooses to exit.

a) Reverses of the number (e.g. input = 4637215 Output=5217364).
b) The digits in a given number (e.g. 23,498 has five digits)
c) The sum of the digits of the a given number (e.g. input=4,823 sum=17)
d) The product of even digits of the a given number (e.g. input=4,923 prod=8)
e) The first and last digit of the number and find their sum.
f) Swap the first and the last digit of the number.
g) Check whether a number is palindrome or not.
h) The frequency of each digit in a given integer and print in table format.
i) Check if a number is Armstrong or not.
[Hint]: An Armstrong number of three digits is an integer such that the sum of the cubes
of its digits is equal to the number itself
j) Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal
to the number itself.
k) Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number
itself equals the number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice, temp, digit = 0, rev = 0;
    bool isPalindrome = true;

    // read the number
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    // display the menu
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Sum of digits" << endl;
    cout << "4. Product of even digits" << endl;
    cout << "5. First and last digit" << endl;
    cout << "6. Swap first and last digit" << endl;
    cout << "7. Palindrome" << endl;
    cout << "8. Frequency of first digit" << endl;
    cout << "9. Armstrong number" << endl;
    cout << "10. Strong number" << endl;
    cout << "11. Perfect number" << endl;
    cout << "12. Exit" << endl;

    // read the choice
    cout << "Enter your choice: ";
    cin >> choice;

    // find the solution based on the choice
    switch(choice) {
        case 1:
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            cout << "Reverse of the number: " << rev << endl;
            break;
        case 2:
            int count = 0;
            while (temp > 0) {
                count++;
                temp /= 10;
            }
            cout << "Number of digits: " << count << endl;
            // cout << "Number of digits: " << floor(log10(num) + 1) << endl;
            break;
        case 3:
            int sum = 0;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            cout << "Sum of digits: " << sum << endl;
            break;
        case 4:
            int prod = 1;
            while (temp > 0) {
                digit = temp % 10;
                if (digit % 2 == 0) {
                    prod *= digit;
                }
                temp /= 10;
            }
            cout << "Product of even digits: " << prod << endl;
            break;
        case 5:
            int first = 0, last = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (first == 0) {
                    first = digit;
                }
                last = digit;
                temp /= 10;
            }
            cout << "First and last digit: " << first << " and " << last << endl;
            break;
        case 6:
            int newNum = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (digit == first) {
                    digit = last;
                } else if (digit == last) {
                    digit = first;
                }
                newNum = newNum * 10 + digit;
                temp /= 10;
            }
            cout << "Number after swapping: " << newNum << endl;
            break;
        case 7:
            while (temp > 0) {
                if (temp % 10 != rev % 10) {
                    isPalindrome = false;
                    break;
                }
                temp /= 10;
                rev /= 10;
            }
            if (isPalindrome) {
                cout << "Palindrome: Yes" << endl;
            } else {
                cout << "Palindrome: No" << endl;
            }
            break;
        case 8:
            int freq = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (digit == first) {
                    freq++;
                }
                temp /= 10;
            }
            cout << "Frequency of first digit: " << freq << endl;
            break;
        case 9:
            int armstrong = 0;
            while (temp > 0) {
                digit = temp % 10;
                armstrong += pow(digit, 3);
                temp /= 10;
            }
            if (armstrong == num) {
                cout << "Armstrong number: Yes" << endl;
            } else {
                cout << "Armstrong number: No" << endl;
            }
            break;
        case 10:
            int strong = 0;
            while (temp > 0) {
                digit = temp % 10;
                int fact = 1;
                for (int i = 1; i <= digit; i++) {
                    fact *= i;
                }
                strong += fact;
                temp /= 10;
            }
            if (strong == num) {
                cout << "Strong number: Yes" << endl;
            } else {
                cout << "Strong number: No" << endl;
            }
            break;
        case 11:
            int perfect = 0;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == num) {
                cout << "Perfect number: Yes" << endl;
            } else {
                cout << "Perfect number: No" << endl;
            }
            break;
        case 12:
            cout << "Exiting..." << endl;
            break;
    }

    return 0;
}
