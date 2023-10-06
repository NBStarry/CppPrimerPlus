#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    char grade;
    int age;
};

int main()
{
    Student student1;
    cout << "Waht is your first name? ";
    cin >> student1.firstName;
    cout << "What is your last name? ";
    cin >> student1.lastName;
    cout << "What letter grade do you deserve? ";
    cin >> student1.grade;
    cout << "What is your age? ";
    cin >> student1.age;
    cout << "Name: " << student1.lastName << ", " << student1.firstName << endl;
    cout << "Grade: " << char(student1.grade + 1) << endl;
    cout << "Age: " << student1.age << endl;
    return 0;
}