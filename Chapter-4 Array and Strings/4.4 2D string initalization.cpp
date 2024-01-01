// This program demonstarte 2D string initialization and printing the elements

#include <iostream>
#include<string>
using namespace std;

int main() {
  // 2D C-style string initialization 
  char my_weekend[5][10] = {"Excellent", "Good", "", "Bad"};
  cout<<"The length of the string is "<<strlen(days[0])<<endl;

  Cout<<"My weekend was "<<endl
  for (int i = 0; i < 7; i++) {
      cout<<my_weekend[i]<<", "
    }
    cout<<endl;

  // 2D C-style string initialization by omiting the row-size
  char days[][10] = {"Monday", "Tue", "Wed", "Thr", "Friday", "Sat", "Sunday"};
  cout<<"The length of the string is "<<strlen(days[0])<<endl;

  Cout<<"The Days of the Week are"<<endl
  for (int i = 0; i < 7; i++) {
      cout<<days[i]<<", "
    }
    cout<<endl;

  // 2D C++-style string initialization by omiting the row-size
  string months[12] = {"January", "Feburary", "March", "April", "May", "June",
                    "July", "August", "Sep", "Oct", "Nov", "December"};
  cout<<"The length of the string is "<<months[1].size()<<endl;

  Cout<<"The Months of the year "<<endl
  for (int i = 0; i < 7; i++) {
      cout<<months[i]<<", "
    }
    cout<<endl;
  return 0;
}
