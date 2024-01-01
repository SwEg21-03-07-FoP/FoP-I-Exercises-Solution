/*
Write the code to read elements of two-dimensional double array named sales. 
Then the program display the sum of the numbers stored in the 1st row, 1st column;
the 2nd row, 3rd column; and the 3rd row, 4th column.
*/

#include <iostream>
using namespace std;

int main() {

  double sales [3][4];
  double total = 0;

  // read the elements of the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++){
      cout<<"Enter the "<<i+1<<"th row and "<<j+1<<"th column number: ";
      cin>>sales[i][j];
    }
  }

  // print the elements of the array
  cout<<"The elements of the array are: "<<endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++){
      cout<<sales[i][j]<<", ";
    }
    cout<<endl;
  }

  // print the sum of the first row, first column; the second row,
  // third column; and the third row, fourth column.
  cout<<"The sum of the 1st row, 1st column; the 2nd row, 3rd column; and the 3rd row, 4th column is: ";
  cout<<sales[0][0] + sales[1][2] + sales[2][3]<<endl;

  return 0;
}
