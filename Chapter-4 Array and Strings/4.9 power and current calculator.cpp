/*
Write a program that stores the following resistance values in an array named resistance: 16,
27, 39, 56, and 81. Your program should also create two arrays named current and power,
each capable of storing five double-precision numbers. Using for loop and a cin statement,
have your program accept five user-input numbers in the current array when the program is
run. Your program should store the product of the values of the squares of the current array
and the resistance array in the power array. For example, use power[1] = resistance[1] *
pow(current[1],2). Your program should then display the following output (fill in the chart):
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double resistance[5] = {16, 27, 39, 56, 81};
  double current[5], power[5];

  // read the currents
  for (int i = 0; i < 5; i++) {
    cout<<"Enter the "<<i+1<<"th current reading: ";
    cin>>current[i];
  }

  // calculate the power
  for (int i = 0; i < 5; i++) {
    power[i] = resistance[i] * pow(current[i], 2);
    cout<<power[i]<<", ";
  }
  cout<<endl;

  cout<<"The Current, resisntance and power is "<<endl; 
  cout<<"Current\tResistance\tPower"<<endl;
  for (int i = 0; i < 5; i++) {
    cout<<current[i]<<"\t"<<resistance[i]<<"\t\t"<<power[i]<<endl;
  }

  return 0;
}