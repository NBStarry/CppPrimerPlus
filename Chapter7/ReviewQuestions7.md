1. 声明函数原型、定义函数、调用函数
2. 
```
// a
void igor();
// b
float tofu(int);
// c
double mpg(double, double);
// d
long summation(long [], long);
// e
double doctor(string); // use string
double doctor(const char *str);
// f
void ofcourse(boss);
// g
string plot(map*);
char *plot(map *);
```
3. 
```
void SetValue(int array[], int length, int value)
{
    for(int i=0; i<length; i++)
        array[i] = value;
}
```
4. 
```
void SetValue(int *begin, int *end, int value)
{
    for(int *p=begin; p!=end; p++)
    {
        *p = value;
    }
}
```
5. 
```
double GetMax(const double array[], int length)
{
    int max = array[0];
    for(int i=0; i<length; i++)
    {
        max = array[i] > max ? array[i] : max;
    }
    
    return max;
}
```
6. const用于指针时，可以防止指向的原始数据被修改，而传递基本类型时是按值传递，传递的是副本，原始数据不会被修改。
7. 
    1. char数组；
    2. 引号括起的字符串常量（字符串字面值）；
    3. 被设置为字符串的地址的char指针。
8. 
```
int replace(char *str, char c1, char c2)
{
    int count = 0;

    while(*str)
    {
        if(*str == c1)
            count++;
        str++;
    }

    return count;
}
```
9. *"pizza"为字符串数组"pizza"首字母的地址的解引用，也就是'p'; "taco"[2]为字符串数组"taco"的第三个元素，也就是'c'(字符串常量行为与数组名相同)。
10. 直接把glitz作为参数是按值传递，&glitz是传递地址，前者会拷贝结构的副本在函数体内使用，无法修改结构，可以之间用.表示成员结构；后者则不会拷贝副本，节省内存，且可以修改结构体的值（除非使用const），必须使用->这个间接成员运算符。
11. 
```
typedef int (*pf)(const char *);
int judge(pf);
```
12. 
```
// a
void DisplayApplicant(applicant app)
{
    cout << app.name << endl;
    for(int i=0; i<sizeof(app.credit_ratings); i++)
        cout << app.credit_ratings[i] << ' ';
    cout << endl;
}
// b
void DisplayApplicant(applicant *app)
{
    cout << app->name << endl;
    for(int i=0; i<sizeof(app->credit_ratings); i++)
        cout << app->credit_ratings[i] << ' ';
    cout << endl;
}
```
13. 
```
typedef void (*p_f1)(applicant *);
p_f1 p1 = f1;
typedef const char *(*p_f2)(const applicant *, const applicant *);
p_f2 p2 = f2;
p_f1 ap[5];
p_f2 pa[10];
```