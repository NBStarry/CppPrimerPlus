#include <iostream>
using namespace std;

template<class T>
T MaxN(const T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
        max = arr[i] > max ? arr[i] : max;

    return max;
}

// 为什么template <> char * MaxN(const char* arr[], int n); 不可以
// 常量指针和指针常量！！！

template <> 
char *MaxN(char* const arr[], int n)
{
    int maxLength = strlen(arr[0]);
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        {
            if (maxLength < strlen(arr[i]))
            {
                maxLength = strlen(arr[i]);
                maxIndex = i;
            }
        }
    return arr[maxIndex];
}

int main()
{
    int arr1[6] = {1, 3, 5, 2, 4, 6};
    double arr2[4] = {1.1, 3.3, 5.5, 4.4};
    char *str1 = new char[10];
    char *str2 = new char[10];
    char *str3 = new char[10];
    char *str4 = new char[10];
    char *str5 = new char[10];
    strcpy(str1, "hello");
    strcpy(str2, "world");
    strcpy(str3, "I");
    strcpy(str4, "am");
    strcpy(str5, "here");
    char *arr3[5] = {str1, str2, str3, str4, str5};
    cout << arr3[0] << endl;
    cout << MaxN(arr1, 6) << endl;
    cout << MaxN(arr2, 4) << endl;
    cout << MaxN(arr3, 5) << endl;

    delete [] str1;
    delete [] str2;
    delete [] str3;
    delete [] str4;
    delete [] str5;

    return 0;
}