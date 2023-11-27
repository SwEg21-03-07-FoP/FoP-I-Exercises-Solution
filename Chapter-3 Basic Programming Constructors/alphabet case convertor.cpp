// This program demonstrate using library fucntions

#include <iostream>
#include <cctype>  // For toupper and tolower functions
using namespace std;

int main() {
    // Declare the required variables
    char input_alphabet;

    // Input a alphabet from the user
    cout << "Enter a letter: ";
    cin >> input_alphabet;

    // Convert the entered alphabet to uppercase and print it
    cout << "The letter in Uppercase: " << toupper(input_alphabet) << endl;

    // Convert the entered alphabet to lowercase and print it
    cout << "The letter in Lowercase: " <<tolower(input_alphabet) << endl;

    return 0;
}
