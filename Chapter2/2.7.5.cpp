#include <iostream>
using namespace std;

int centigradeToFahrenheit(int c)
{
    return c * 9 / 5 + 32;
}

int main()
{
    int centigrade;
    cout << "Enter a Celsius value: ";
    cin >> centigrade;
    cout << centigrade << " degrees Celsius is " << centigradeToFahrenheit(centigrade) << " degrees Fahrenheit." << endl;
    return 0;
}