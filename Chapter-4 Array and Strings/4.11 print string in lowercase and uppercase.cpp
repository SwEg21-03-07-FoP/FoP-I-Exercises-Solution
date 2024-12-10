/* 
Write an application that inputs a line of text and outputs the text twice
— once in all uppercase letters and once in all lowercase letters.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter a line of text: ";
  getline(cin, name);  // getline() is used to read a line of text.

  // print the text in uppercase.
  for (int i = 0; i < name.length(); i++) {
    cout << (char)toupper(name[i]);
  }

  cout << endl;

  // print the text in lowercase.
  for (int i = 0; i < name.length(); i++) {
    cout << (char)tolower(name[i]);
  }
   
  return 0;
}
