/* A program that find the sum of list of numbers entered by the user.
  The program will not add if the number entered is divisible by 3 or 7,
*/
#include <iostream>
using namespace std;

int main() {
  int num, size, sum = 0;

  cout << "Enter a the size of the list: ";
  cin >> size;

  while (size > 0) {
    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 || num % 7 == 0) {
      continue;
    } else {
      sum += num;
    }
    size--;
  }
  cout << "The sum of the numbers is: " << sum << endl;
}
