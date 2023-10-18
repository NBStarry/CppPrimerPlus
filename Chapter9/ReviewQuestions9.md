1. 
    1. 自动变量，在参数列表正常声明
    2. 静态存储，在一个文件中代码块外部正常声明（外部变量），另一个文件加extern引用
    3. 内部链接静态变量，外部定义加static关键字，也可以在未命名的名称空间中定义
    4. 静态存储，在函数体内部用static声明
2. using声明需要指出声明的对象名称，using编译指令则是将整个命名空间导入，隐藏了具体的声明对象
3. 
```
#include <iostream>

int main()
{
    double x;
    std::cout << "Enter value: ";
    while(!(std::cin >> x))
    {
        std::cout << "Bad input. Please enter a number: ";
        std::cin.clear();
        while(std::cin.get() != '\n')
            continue;
    }
    std::cout << "Value = " << x << std::endl;
    return 0;
}
```
4. 
```
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double x;
    cout << "Enter value: ";
    while(!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
```
5. 两个函数特征标相同，需要在每个文件中分别实现该函数，并加上static关键字，使其作用域为当前文件（或者在未命名的名称空间中定义）
6. 10 \
4 \
0 \
Other: 10, 1 \
another(): 10, -4
7. 1 \
4, 1, 2 \
2 \
2 \
4, 1, 2 \
2
