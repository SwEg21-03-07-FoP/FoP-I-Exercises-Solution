/*
Write a program that converts a mark of a course entered from the keyboard to its
corresponding letter-grade based on the following scales.
A+: 90-100, A: 80-89, B+: 75-79, B: 65-74, C+: 55-64, C: 40-54, D: 30-40, F: 0-29
*/

#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 90 && mark <= 100) {
        cout << "Your grade is A+";
    } else if (mark >= 80 && mark <= 89) {
        cout << "Your grade is A";
    } else if (mark >= 75 && mark <= 79) {
        cout << "Your grade is B+";
    } else if (mark >= 65 && mark <= 74) {
        cout << "Your grade is B";
    } else if (mark >= 55 && mark <= 64) {
        cout << "Your grade is C+";
    } else if (mark >= 40 && mark <= 54) {
        cout << "Your grade is C";
    } else if (mark >= 30 && mark <= 39) {
        cout << "Your grade is D";
    } else if (mark >= 0 && mark <= 29) {
        cout << "Your grade is F";
    } else {
        cout << "Invalid mark";
    }

    return 0;
}
