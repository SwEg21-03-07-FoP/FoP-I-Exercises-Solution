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
        cout << "Character is in upper case and "<<endl;
        switch (ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << "it is vowel" << endl;
                break;
            default:
                cout << "it is a consonant" << endl;
        }
        cout << "Character is in upper case" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Character is in lower case and " << endl;
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "it is vowel" << endl;
                break;
            default:
                cout << "it is a consonant" << endl;
        }
    } else if (ch >= '0' && ch <= '9') {
        cout << "Character is a digit" << endl;
    } else {
        cout << "Character is a special character" << endl;
    }

    return 0;
}
