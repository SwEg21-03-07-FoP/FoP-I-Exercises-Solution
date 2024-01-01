// This program demonstarte 1D string initialization and printing the elements

#include <iostream>
#include <string>
using namespace std;

int main() {

  char myName [10] = "Chere Lemma";   // C-style string
  cou<<"Hello, "<<myName<<". Welcome!";

  string myAddress = "Addis Ababa";  //C++ style string
  cou<<"Your Address is, "<<myAddress<<endl;

  // character by character initialization
  char message[7] = {'He','l','l','0', '\0'};  //you should add null character at the end;
  cout<<"Your message is "<<message<<endl;
  cout<<"The size of the message is "<<strlen(message)<<endl;

  // omiting string size for C-style string
  char myWeekend [] = "My Weekend was Excellent!"; 
  cout<<"The size of the string is "<<strlen(myWeekend)<<endl;
  cout<<"Your Weekend was "<<myWeekend<<endl;
  
  return 0;
}
