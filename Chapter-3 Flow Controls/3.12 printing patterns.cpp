/*
 Write a program that generate each of the following patterns. 
 Prompt the user to enter the number of rows and columns for the pattern.
 The program should provide menu options to allow the user to select a pattern to be displayed.
  1 - rectangle of stars
  2 - square of stars
  3 - half pyramid of stars
  4 - half pyramid of numbers
  5 - inverted half pyramid of stars
  6 - half pyramid of alphabets
  7 - inverted half pyramid of alphabets
  8 - full pyramid of stars
  9 - inverted full pyramid of stars
  10 - hollow full pyramid of stars
  11 - inverted hollow full pyramid of stars
 */

#include <iostream>
using namespace std;

int main () {
    int rows, columns, choice;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << "Enter the choice of pattern: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Rectangle of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 2:
            cout << "Square of stars" << endl; 
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 3: 
            cout << "Half pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;        
        case 4: 
            cout << "Half pyramid of numbers" << endl;
            int count = 1;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j <= i; j++)
                    cout << count++<<" ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 5:
            cout << "Inverted half pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 6:
            cout << "Half pyramid of alphabets" << endl;
            char ch = 'A';
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j <= i; j++)
                    cout << ch++<<" ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 7: 
            cout << "Inverted half pyramid of alphabets" << endl;
            char ch = 'A';
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                    cout << ch++<<" ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 8:
            cout << "Full pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                    cout << " ";
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 9:
            cout << "Inverted full pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < i; j++)
                    cout << " ";
                for (int j = 0; j < rows - i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
          case 10:
              cout << "Hollow full pyramid of stars" << endl;
              for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                  cout << " ";
                  for (int j = 0; j <= i; j++)
                    if (i == 0 || i == rows - 1 || j == 0 || j == i)
                      cout << "* ";
                    else
                      cout << "  ";
                    cout << endl;
                }
                cout <<endl;
                break;
          case 11:
              cout << "Inverted hollow full pyramid of stars" << endl;
              for (int i = 0; i < rows; i++) {
                for (int j = 0; j < i; j++)
                  cout << " ";
                for (int j = 0; j < rows - i; j++)
                  if (i == 0 || i == rows - 1 || j == 0 || j == rows - i - 1)
                    cout << "* ";
                  else
                    cout << "  ";
                  cout << endl;
              }
              cout <<endl;
              break;
          default:  
              cout << "Invalid choice" << endl;
              break;
      }
    return 0;
  }
  