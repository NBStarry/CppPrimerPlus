#include <iostream>
using namespace std;

int main()
{
    bool isEuropean;
    cout << "Enter 1 if you would like use liter/hundredkilometer or 0 if use mile/galon: ";
    cin >> isEuropean;
    if(isEuropean)
    {
        int kilometers, liters;
        cout << "Enter the number of kilometers traveled: ";
        cin >> kilometers;
        cout << "Enter the number of liters of gasoline consumed: ";
        cin >> liters;
        cout << "The number of liters per hundred kilometers is " << float(liters) / kilometers * 100 << endl;
    }
    else
    {
        int galons, miles;
        cout << "Enter the number of galons of gasoline: ";
        cin >> galons;
        cout << "Enter the number of miles traveled: ";
        cin >> miles;
        cout << "The number of miles per galon of gasoline is " << float(miles) / galons << endl;
    }
    return 0;
}