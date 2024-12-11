/*
* Ask users for the titles of their favorite songs. Discard all the special characters in each title. 
* Print the words in the title, one per line. For example, if they enter, My True Love Is Mine, Oh, Mine!,
* The program should print each word on a separate line omitting all non-alphabet symbols.
*/

#include<iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    char song_title[100];     // string song_title; for the C++ version 

    cout<<"Enter your song title: ";

    cin.getline(song_title,100);    //getline(cin, song_title); for the C++ version 

    for (int i = 0; i < strlen(song_title); i++ {   // song_title.length(); for the C++ version 
      if (isalpha(song_title[i])) {
        cout<<song_title[i];
      } else if (song_title[i] == ' ') {
        cout<<endl;
      } 
    }
    return 0;
}
