#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Here's the information in a single string: " << lastName + ", " + firstName << endl;

    return 0;
}