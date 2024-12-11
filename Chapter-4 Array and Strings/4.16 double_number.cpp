/*
* Develop a program that declares and initializes a one-dimensional int array named nums. The program should read array elements and then multiply by 2 the elements located by even 
* index and then store it on another int array named dNums. You are free to determine the size of the array. 
*/

#include<iostream>
using namespace std;
int main() {
    int nums[]={23, 54, 2, 9, 11, 31, 45, 76, 5, 17};
    int dnums[5], j = 0;
    cout<<"The double of nums at even index are:\n";
    for (int i = 0; i<10; i++) {
      if (i%2 == 0) {
        dnums [j] = 2*nums[i];
        cout<<dnums[j++]<<" ";
      }
    }
    return 0;
}

/* Alternarive option to omit the if condition
    for (int i = 0; i<10; i=i+2) {
        dnums [j] = 2*nums[i];
        cout<<dnums[j++]<<" ";
    }
*/
