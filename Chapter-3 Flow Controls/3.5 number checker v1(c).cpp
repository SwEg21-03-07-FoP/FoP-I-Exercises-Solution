#include <iostream>
using namespace std;

int main() {

    int number;
    char flag;

  do {
    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd and positive or negative
    switch (number % 2) {
        case 0:
            if (number > 0) {
                cout<<"The "<<number<<" is even positive number." <<endl;
            } else if (number < 0) {
                cout<<"The "<<number<<" is even negative number." <<endl;
           } else {
               cout << "The number is zero." <<endl;
           }
          break;
          
        case 1:
            if (number > 0) {
                cout<<"The "<<number<<" is odd positive number." <<endl;
            } else {
                cout<<"The "<<number<<" is odd negative number." <<endl;
            }
    }

    cout<<"Do want to check an other number? (Y/N): ";
    cin>>flag;
  } while (flag == 'y' || flag == 'Y');

    return 0;
}

