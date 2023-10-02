#include <iostream>
using namespace std;

int main()
{
    const int DegreeToMinute = 60;
    const int MinuteToSecond = 60;
    int degree, minute, second;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    float latitude = degree + float(minute) / DegreeToMinute + float(second) / (DegreeToMinute * MinuteToSecond);
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << latitude << " degrees" << endl;

    return 0;
}