#include <iostream>
using namespace std;

int main()
{
    const float HundredKilometerToMile = 62.14;
    const float GalonToLiter = 3.875;
    float litersPerHundredKilometers;

    cout << "Enter the number of liters per hundred kilometers: ";
    cin >> litersPerHundredKilometers;
    cout << "The number of miles per galon of gasoline is " << HundredKilometerToMile / (litersPerHundredKilometers / GalonToLiter) << endl;
    return 0;
}