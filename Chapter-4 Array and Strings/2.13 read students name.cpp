/*
Write a program that read full name of three students
a. Find the total length of the three names
b. Display the names in alphabetic order
c. Add a prefix “Hello”, “Selam”, “Ashema” to each name respectively and print on
separate line
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string studentName[3];
  char prefix[3][10] = {"Hello", "Selam", "Ashema"};
  int totalLength = 0;

  // get the studentNames from the user.
  for (int i = 0; i < 3; i++) {
    cout << "Enter student studentName " << i + 1 << ": ";
    getline(cin, studentName[i]);
    totalLength += studentName[i].length();
  }

  // print the total length of the studentNames.
  cout << "Total length of the studentNames: " << totalLength << endl;

  // print the studentNames with prefix.
  cout << "studentNames with prefix: " << endl;
  cout << "====================" << endl;
  for (int i = 0; i < 3; i++) {
    cout << prefix[i] << " " << studentName[i] << endl;
  }
  cout << "====================" << endl;

  return 0;
}
