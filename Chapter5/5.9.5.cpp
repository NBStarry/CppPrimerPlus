#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12], sum = 0;

    for(int i=0; i<12; i++)
    {
        cout << "Enter the sales for " << months[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }

    cout << "The total sales for the year is " << sum << endl;
    
    return 0;
}