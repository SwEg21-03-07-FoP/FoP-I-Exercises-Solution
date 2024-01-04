/* Grade calculator                                                           
  Write a C++ program that calculate the average mark of 3 courses for N students,
  the program should promt the user to enter the number of students and 
  their mark in each subject and display the average mark along with grade letter.
  The grade calculator can be determined as follow  
   A: 80-100, B: 70-79, C: 50-69, D: 40-49, F: 0-39
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int numStudents;
  cout << "Enter the number of students: ";
  cin >> numStudents;
  cout << endl;

  for (int i = 1; i <= numStudents; i++) {
    double mark1, mark2, mark3, average;
    cout << "Enter the mark of student " << i << " in subject 1: ";
    cin >> mark1;
    cout << "Enter the mark of student " << i << " in subject 2: ";
    cin >> mark2;
    cout << "Enter the mark of student " << i << " in subject 3: ";
    cin >> mark3;
    cout << endl;

    average = (mark1 + mark2 + mark3) / 3;
    cout << "The average mark of student " << i << " is " << fixed << setprecision(2) << average << endl;
    if (average >= 80) {
      cout << "The grade of student " << i << " is A" << endl;
    } else if (average >= 70) {
      cout << "The grade of student " << i << " is B" << endl;
    } else if (average >= 50) {
      cout << "The grade of student " << i << " is C" << endl;
    } else if (average >= 40) {
      cout << "The grade of student " << i << " is D" << endl;
    } else {
      cout << "The grade of student " << i << " is F" << endl;
    }
    cout << endl;
  }
  return 0;
}
