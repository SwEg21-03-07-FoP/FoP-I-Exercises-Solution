/*
Write a program that read assessments various weight of a course and 
calculates the final mark of the course. The assessments inlude, 
test: 15%, quizzes: 5%, assignments: 10%, project: 20% and final exam: 50%.
Then the program should print the total mark and the corresponding letter-grade.
The letter-grade is calculated as follows:
A: 80-100, B: 70-79, C: 60-69, D: 50-59, F: 0-49
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double test, quizzes, assignments, project, final_exam, total_mark;
    char letter_grade;

    cout << "Enter the mark of test: ";
    cin >> test;
    cout << "Enter the mark of quizzes: ";
    cin >> quizzes;
    cout << "Enter the mark of assignments: ";
    cin >> assignments;
    cout << "Enter the mark of project: ";
    cin >> project;
    cout << "Enter the mark of final exam: ";
    cin >> final_exam;

    if (test < 0 || test > 100 || quizzes < 0 || quizzes > 100 || assignments < 0 || assignments > 100 || project < 0 || project > 100 || final_exam < 0 || final_exam > 100) {
        cout << "Invalid input" << endl;
        return 0;
    } else if (test + quizzes + assignments + project + final_exam != 100) {
        cout << "The sum of all marks should be 100" << endl;
        return 0;
    }

    total_mark = test * 0.15 + quizzes * 0.05 + assignments * 0.1 + project * 0.2 + final_exam * 0.5;

    if (total_mark >= 80) {
        letter_grade = 'A';
    } else if (total_mark >= 70) {
        letter_grade = 'B';
    } else if (total_mark >= 60) {
        letter_grade = 'C';
    } else if (total_mark >= 50) {
        letter_grade = 'D';
    } else {
        letter_grade = 'F';
    }

    cout << "The total mark is " << fixed << setprecision(2) << total_mark << endl;
    cout << "The letter grade is " << letter_grade << endl;

    return 0;
}
