#include <iostream>
using namespace std;

template<class T>
T max5(const T *arr)
{
    T max = arr[0];
    for (int i = 1; i < 5; i++)
        max = arr[i] > max ? arr[i] : max;

    return max;
}

int main()
{
    int arr1[5] = {1, 3, 5, 2, 4};
    double arr2[5] = {1.1, 3.3, 5.5, 2.2, 4.4};
    cout << max5(arr1) << endl;
    cout << max5(arr2) << endl;

    return 0;
}