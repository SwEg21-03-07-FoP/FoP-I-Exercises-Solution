/*
Write a C++ program that read N person's FuLL NAME, HEIGHT, WEIGHT and 
then calculata the BMI of the person. The BMI need to be stored in the same
array with the HEIGHT, WEIGHT. The program should print the FULL NAME and the 
BMI in tabular format.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    cout << "Enter the number of person [<=100]: ";
    cin >> N;
    string name[100];
    double person[100][3];

    for(int i=0; i<N; i++){
        cout << "Enter the name of person " << i+1 << ": ";
        cin >> name[i];
        cout << "Enter the height of person " << i+1 << ": ";
        cin >> person[i][0];
        cout << "Enter the weight of person " << i+1 << ": ";
        cin >> person[i][1];
        person[i][2] = person[i][1]/(person[i][0]*person[i][0]);
    }

    cout << "Full Name\t\tBMI\n";
    for(int i=0; i<N; i++){
        cout << name[i] << "\t\t" <<"  "<<person[i][2] << endl;
    }
    return 0;
}