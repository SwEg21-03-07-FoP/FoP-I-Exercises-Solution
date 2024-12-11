/*
* Develop a C++ program that accepts the name of a person and then counts how many vowels the person’s name have.
*/
// Version-1
#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char name[50], vowels[11] = "aeiouAEIOU";    
    cout<<"Enter a name: ";
    cin>>name;
    int i = 0, num_vowel = 0;
    while (name[i] != '\0') {
      for (int j = 0; j<strlen(vowels); j++) {
        if (name[i] == vowels[j]) {
          num_vowel++;
          break;
        }
      }
      i++;
    }
    cout<<"The Vowels are: "<<num_vowel<<endl;
    return 0;
}


// Version-2

#include<iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string name;
    char vowels[11] = "aeiouAEIOU";
    cout<<"Enter a name: ";
    cin>>name;
    int i = 0, num_vowel = 0;
    while (i < name.length()) {
      for (int j = 0; j<strlen(vowels); j++){
        if (name[i] == vowels[j]) {
          num_vowel++;
          break;
        }
      }
      i++;
    }
    cout<<"The Vowels are: "<<num_vowel<<endl;
    return 0;
}
