/*
Write a program that tells whether a character entered from the keyboard is 
in upper case or in lower case or digit or special character.
Program should also check if the number is eve/odd and also the alphabet is vowel or consonant.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is in upper case." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is in lower case." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}

