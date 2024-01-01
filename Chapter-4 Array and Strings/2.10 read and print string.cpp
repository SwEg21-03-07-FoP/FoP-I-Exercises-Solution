/*
  Write a C++ program that accepts a Full Name of a person and 
  print it back with welcome message. 
  Also count how vowels the person’s name have.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int count = 0;
  cout << "Enter your full name: ";
  getline(cin, name);  // getline() is used to read a line of text.

  cout << "Welcome " << name << endl; // print the name with welcome message.

  // count the number of vowels in the name.
  for (int i = 0; i < name.length(); i++) {
    if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
        name[i] == 'o' || name[i] == 'u' || name[i] == 'A' ||
        name[i] == 'E' || name[i] == 'I' || name[i] == 'O' ||
        name[i] == 'U') {
      count++;
    }
  }
  // print the number of vowels in the name.
  cout << "Your name has " << count << " vowels." << endl;
  return 0;
}
