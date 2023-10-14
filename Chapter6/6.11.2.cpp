#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 10> donation;
    double sum = 0.0;
    int count = 0, countOverAverage = 0;
    double average = 0.0;

    cout << "Enter up to 10 donation values, end with non-numeric input: ";
    while (cin >> donation[count] && count < 10) {
        sum += donation[count];
        count++;
    }

    average = sum / static_cast<double>(count);

    for(int i = 0; i < count; i++)
    {
        if(donation[i] > average)
        {
            countOverAverage++;
        }
    }

    cout << "The average of the donation values is: " << average << endl;
    cout << "There are " << countOverAverage << " values over the average." << endl;

    return 0;
}