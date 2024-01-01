/*
*  Write a program to input eight integer numbers into an array named temp. 
*  As each number is input, add the number into a total. 
* After all numbers are input, display the number and their average.
*/
#include <iostream>
using namespace std;

int main() {

  int temp [8];
  int total = 0;

  // read the elements of the array
  for (int i = 0; i < 8; i++) {
    cout<<"Enter the "<<i+1<<"th number: ";
    cin>>temp[i];
    total += temp[i];
  }

  // print the elements of the array
  cout<<"The elements of the array are: ";
  for (int i = 0; i < 8; i++) {
    cout<<temp[i]<<", ";
  }
  cout<<endl;
  // print the average of the array
  cout<<"The average of the array is "<<total/8<<endl;

  return 0;
}
