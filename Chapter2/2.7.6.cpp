#include <iostream>
using namespace std;

int LightYearsToAstronomicalUnits(double lightYears)
{
    return lightYears * 63240;
}

int main()
{
    double lightYears;

    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years = " << LightYearsToAstronomicalUnits(lightYears) << " astronomical units." << endl;
    return 0;
}