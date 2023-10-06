#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> gradeOf40MeterRun;
    cout << "Enter the first grade: ";
    cin >> gradeOf40MeterRun[0];
    cout << "Enter the second grade: ";
    cin >> gradeOf40MeterRun[1];
    cout << "Enter the third grade: ";
    cin >> gradeOf40MeterRun[2];

    cout << "You have " << gradeOf40MeterRun.size() << " grades." << endl;
    cout << "The average grade is: " << (gradeOf40MeterRun[0] + gradeOf40MeterRun[1] + gradeOf40MeterRun[2]) / 3 << endl;

    return 0;
}