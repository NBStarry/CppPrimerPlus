1. 执行迅速，短小且非递归的函数
2. 
    1. `void song(const char *name, int times = 1)`
    2. 没有，原型包含默认值信息即可
    3. 可以，只要times也有默认值，或者把name放在右侧
3.  
```
void iquote(int n)
{
    cout << '"' << n << '"';
}
void iquote(double x)
{
    cout << '"' << x << '"';
}
void iquote(string str);
{
    cout << '"' << str << '"';
}
```
4. 
```
// a
void ShowBox(const box &b)
{
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

// b
void GetVolume(box &b)
{
    b.volume = b.height * b.width * b.length;
}
```
5. fill把指针改成引用，show在参数前加const防止修改，在原型和调用处也要做相近修改
```
void fill(std::array<double, Seasons> &pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(const std::array<double, Seasons> &da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}
```
6. 
```
// a 两种方法都可以完成
// 重载
double mass(double density, double volume);
double mass(double density); // 实现中设置默认值
// 默认
double mass(double density, double volume = 1.0);

// b 重载
void repeat(int times, string str);
void repeat(string str); // 实现中设置默认五次

// c 重载
int average(int, int);
double average(double, double);

// d 都无法完成，因为函数特征标没有任何区别
```
7. 
```
template <class T>
T Bigger(T a, T b)
{
    return a > b ? a : b;
}
```
8. 
```
template <> box Bigger(const box &a, const box &b)
{
    return a.volume > b.volume ? a : b;
}
```
9. v1是float，v2、v3是float&，v4是int，v5是double