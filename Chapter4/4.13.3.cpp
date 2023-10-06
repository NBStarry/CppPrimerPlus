#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char fullName[40];
    cout << "What is your first name? ";
    cin.getline(firstName, 20);
    cout << "What is your last name? ";
    cin.getline(lastName, 20);
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    cout << "Here's the information in a single string: " << fullName << endl;
    return 0;
}