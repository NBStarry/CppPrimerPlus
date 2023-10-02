1. 为了满足不同数值范围、存储空间以及计算速度的需要。
2. 
```c++
// a
short a = 80;
// b
unsigned int b = 42110;
// c
long long c = 3000000000;
unsigned long c = 3000000000;
```
3. C++没有提供自动防止超出整型限制的功能，可以使用头文件climits来确定限制情况。
4. 33L为long类型，33为int类型。
5. 对于某些系统等价，使用ASCII码的系统上才将65设置为A。
6. 
```c++
// 1
char letter = 88;
cout << letter << endl;

//2
cout.put(char(88))

//3
cout << char(88) << endl; 
```
7. double提供13位有效数字，如果long长度为4B，则long给double没有误差，longlong需要19位有效数字，给double有误差。
8. 74; 4; 0; 4.5; 3
9. 
```c++
int sum = int(x1) + int(x2);
int sum = int(x1 + x2);
```
10. int; float; char; char32_t; double（C++默认浮点数为double）.