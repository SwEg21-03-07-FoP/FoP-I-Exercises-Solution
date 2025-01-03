/* 
Write a program that asks users for five movie titles. Print the longest title.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string movies[5];
  int index, titleLength = 0;
  // get the movie titles from the user.
  for (int i = 0; i < 5; i++) {
    cout << "Enter movie title " << i + 1 << ": ";
    getline(cin, movies[i]);
    if (titleLength < movies[i].length()) {
      index = i;
     titleLength=movies[i].length();
    }
  }
  // print the longest movie title.
  cout << "The longest movie: "<<endl;
  cout<<"===================="<<endl;
  cout << "Title: "<<movies[index] << endl;
  cout << "Length: "<<movies[index].length() << endl;
  cout<<"===================="<<endl;

  return 0;
}
