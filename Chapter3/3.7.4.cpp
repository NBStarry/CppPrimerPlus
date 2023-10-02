#include <iostream>
using namespace std;

int main()
{
    const int DayToHour = 24;
    const int HourToMinute = 60;
    const int MinuteToSecond = 60;
    long long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << "seconds = " << seconds / (DayToHour * HourToMinute * MinuteToSecond) << " days, "
         << seconds % (DayToHour * HourToMinute * MinuteToSecond) / (HourToMinute * MinuteToSecond) << " hours, "
         << seconds % (DayToHour * HourToMinute * MinuteToSecond) % (HourToMinute * MinuteToSecond) / MinuteToSecond << " minutes, "
         << seconds % (DayToHour * HourToMinute * MinuteToSecond) % (HourToMinute * MinuteToSecond) % MinuteToSecond << " seconds" << endl;
    return 0;
}