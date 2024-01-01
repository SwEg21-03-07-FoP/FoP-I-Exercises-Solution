/* Write the code to declare a two-dimensional double array named balances that has 4 rows
and 6 columns and initialize the 1st three, two, one, three array elements of the 1st, 2nd, 3rd, 4th
rows respectively. The program should display the array elements in table format. Use any
valid numbers you want to initialize the array.
*/
#include <iostream>
using namespace std;

int main() {

  double balances [4][6] = {{12,45,6},{78,91},{95}, {14,56,81}};
  // print the elements of the array
  cout<<"The elements of the array are: "<<endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      cout<<balances[i][j];
      if (j != 5) cout<<", ";
    }
    cout<<endl;
  }

  return 0;
}