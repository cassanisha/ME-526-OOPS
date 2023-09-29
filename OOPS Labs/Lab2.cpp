#include <iostream>
using namespace std;

int main() {
    // Q1 Employee Salary Calculation
    double basicSalary, hra, da, ta, totalSalary;

    cout << "Enter the basic salary of the employee: ";
    cin >> basicSalary;

    hra = 0.18 * basicSalary;
    da = 0.15 * basicSalary;
    ta = 0.10 * basicSalary;

    totalSalary = basicSalary + hra + da + ta;

    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "TA: " << ta << endl;
    cout << "Total Salary: " << totalSalary << endl;

    // Q2 Student Percentage and Grade Calculation
    int marks;
    double percentage;
    char grade;

    cout << "\nEnter the marks obtained by the student (out of 100): ";
    cin >> marks;

    percentage = (static_cast<double>(marks) / 100.0) * 100.0;

    if (percentage >= 75) {
        grade = 'A';
    } else if (percentage >= 60) {
        grade = 'B';
    } else if (percentage >= 40) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}