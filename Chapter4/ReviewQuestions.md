1. 
```c++
// a
char actors[30];
// b
short betsie[100];
// c
float chuck[13];
// d
long double dipsea[64];
```
2. 
```c++
array<char, 30> actor;
array<short, 100> betsie;
array<float, 13> chuck;
array<long double, 64> dipsea;
```
3. 
```c++
int oddly[5] = {1, 3, 5, 7, 9};
```
4. 
```c++
int even = oddly[0] + oddly[4];
```
5.
```c++
cout << ideas[1] << endl;
```
6.
```c++
char lunch[] = {"cheeseburger"};
```
7. 
```c++
string lunch = "Waldorf Salad";
```
8. 
```c++
struct Fish
{
    string species;
    int weight;
    float length;
}
```
9. 
```c++
Fish fish = {"damaha", 5, 5.0};
```
10. 
```c++
enum Response{No, Yes, Maybe};
```
11. 
```c++
double *p = &ted;
cout << *p << endl;
```
12. 
```c++
float *p = treacle;
cout << *p << *(p + 9) << endl;
cout << p[0] << p[9] << endl;
```
13. 
```c++
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int length;
    bool useVector;
    cin >> length;
    cin >> useVector;
    if(useVector)
    {
        vector<int> array[length];
    }
    else
    {
        int *p = new int[length];
        delete[] p;
    }

    return 0;
}
```
14. 有效，它将打印出字符串首字母的地址。
15. 
```c++
Fish *p = new Fish;
cout << p->species << endl; //没有初始化，输出未知
delete p;
```
16. 它将把43821存储在address中，而不是整个字符串。
17. 
```c++
#include <vector>
#include <array>
#include <string>

const int length = 10;

std::vector<std::string> vectorString(length);
std::array<std::string, length> arrayString;
```