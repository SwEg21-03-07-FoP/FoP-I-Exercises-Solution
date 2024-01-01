/* Develop a program that declares and initializes a one-dimensional int array named nums.
The program should read array elements and then multiply by 2 the elements located by even
index and then store it on another int array named dNums. You are free to determine the
size of the array.
*/

#include <iostream>
using namespace std;

int main() {

  int nums [7], dNums [7], counter = 0;

  // read the elements of the array
  for (int i = 0; i < 7; i++) {
    cout<<"Enter the "<<i+1<<"th number: ";
    cin>>nums[i];
    if (i % 2 == 0) {
      dNums[counter] = nums[i] * 2;
      counter++;
    } 
  }

  // print the elements of the array
  cout<<"The elements of the array are: ";
  for (int i = 0; i < 7; i++) {
    cout<<nums[i]<<", ";
  }
  cout<<endl;
  // print the average of the array
  cout<<"The elements of the dNums array are: ";
  for (int i = 0; i < counter; i++) {
    cout<<dNums[i]<<", ";
  }
  cout<<endl;

  return 0;
}
