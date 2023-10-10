#include <iostream>
using namespace std;

struct Car
{
    string producer;
    int year;
};

int main()
{   
    cout << "How many cars do you have? ";
    int num;
    cin >> num;
    Car *cars = new Car[num];
    
    for(int i=0; i<num; i++)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the producer: ";
        cin >> cars[i].producer;
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
    }

    cout << "Here is your collection:" << endl;
    for(int i=0; i<num; i++)
    {
        cout << cars[i].year << " " << cars[i].producer << endl;
    }

    return 0;
}