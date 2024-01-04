/*
write a program that read a list of number and compute 
(a) the sum of even number 
(b) the product of odd number
the user should enter the number one by one and press -1 to stop.                   
*/

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, product = 1;

    while (true)
    {
        cout << "Enter the number (enter -1 to stop): ";
        cin >> num;

        if (num == -1)
        {
            break;
        }
        else if (num % 2 == 0)
        {
            sum += num;
        }
        else
        {
            product *= num;
        }
    }

    cout << "Sum of even numbers: " << sum << endl;
    cout << "Product of odd numbers: " << product << endl;

    return 0;
}
