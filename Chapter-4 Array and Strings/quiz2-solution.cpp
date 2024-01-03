/*
Write a C++ program that read N student's FuLL NAME, MID-EXAM, FINAL-EXAM and 
then calculata the TOTAL-MARK of the student. The TOTAL-MARK need to be stored
in the same array with the MID-EXAM and FINAL-EXAM. The program should print 
the FULL NAME and the TOTAL-MARK in tabular format.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    cout << "Enter the number of student [<=100]: ";
    cin >> N;
    string name[100];
    double mark[100][3];

    for(int i=0; i<N; i++){
        cout << "Enter the name of mark " << i+1 << ": ";
        cin >> name[i];
        cout << "Enter the height of mark " << i+1 << ": ";
        cin >> mark[i][0];
        cout << "Enter the weight of mark " << i+1 << ": ";
        cin >> mark[i][1];
        mark[i][2] = mark[i][0] + mark[i][1];
    }

    cout << "Full Name\t\tBMI\n";
    for(int i=0; i<N; i++){
        cout << name[i] << "\t\t" <<"  "<<mark[i][2] << endl;
    }
    return 0;
}