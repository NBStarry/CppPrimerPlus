#include <iostream>
using namespace std;

double *FillArray(double *begin)
{
    double *arr = begin;
    while(cin >> *arr)
    {
        arr++;
    }

    return --arr;
}

void ShowArray(const double *begin, double *end)
{
    while(begin != end)
    {
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
}

void ReverseArray(double *begin, double *end)
{
    double temp;
    for(double *p=begin, *q=end; p<q; p++, q--)
    {
        temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main()
{
    double arr[10];
    double *end = FillArray(arr);
    ShowArray(arr, end);
    ReverseArray(arr, end);
    ShowArray(arr, end);
    ReverseArray(arr+1, end-1);
    ShowArray(arr, end);
    
    return 0;
}