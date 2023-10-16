#include <iostream>
using namespace std;

int FillArray(double arr[], int length)
{
    int i = 0;
    while(i < length && cin >> arr[i])
    {
        i++;
    }

    return i;
}

void ShowArray(const double arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReverseArray(double arr[], int length)
{
    double temp;
    for(int i=0; i<length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = temp;
    }
}

int main()
{
    double arr[10];
    int length = FillArray(arr, 10);
    ShowArray(arr, length);
    ReverseArray(arr, length);
    ShowArray(arr, length);
    ReverseArray(arr+1, length-2);
    ShowArray(arr, length);
    
    return 0;
}