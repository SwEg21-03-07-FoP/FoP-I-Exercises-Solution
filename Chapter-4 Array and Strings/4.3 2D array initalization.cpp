// This program demonstarte 1D array initialization and printing the elements

#include <iostream>
using namespace std;

int main() {
  // 2D array partially initializing the elements
  float mark[3][4] = {60, 73.5, 57.25, 80, 41.8, 67, 89, 54} 
  cout<<"The capacity of the array is "<<sizeof(mark)<<endl;
  cout<<"The size of array elements is  "<<sizeof(mark)/4<<endl;

  for (int i = 0; i < 3; i++) { // control the row of the 2D array
    for (int j = 0; j < 4; j++) { // control the column and allow to access the individual element
      cout<<mark[i][j]<<", "
    }
    cout<<endl;
  }

    // 2D array initializing the elements row wise (grouping in row) 
  int age[3][4] = {{16, 37, 55}, {24, 80, 20, 43}, {60, 33, 90}}; 
  cout<<"The capacity of the array is "<<sizeof(age)<<endl;
  cout<<"The size of array elements is  "<<sizeof(age)/4<<endl;

  for (int i = 0; i < 3; i++) { // control the row of the 2D array
    for (int j = 0; j < 4; j++) { // control the column and allow to access the individual element
      cout<<age[i][j]<<", "
    }
    cout<<endl;
  }

  // omiting the row size of 2D while initlizing the array elements
  int theArray1[][3] = { {1, 2}, {4, 5, 6}, {7, 9}, {10} };
  cout<<"Size of the array elements is "<<sizeof(theArray1)/4<<endl;  //output 12

  int theArray2[][3] = { 1, 2, 3, 7, 8, 11, 12 };
  cout<<"Size of the array elements is "<<sizeof(theArray2)/4<<endl;  //output 9

  return 0;
}
