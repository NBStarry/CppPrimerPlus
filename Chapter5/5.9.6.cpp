#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12][3], sum = 0;

    for(int j=0; j<3; j++)
    {
        for(int i=0; i<12; i++)
            {
                cout << "Enter the sales for Year " << j << " " << months[i] << ": ";
                cin >> sales[i][j];
                sum += sales[i][j];
            }
    }

    cout << "The total sales for the year is " << sum << endl;
    
    return 0;
}