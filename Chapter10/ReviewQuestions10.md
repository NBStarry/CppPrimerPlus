1. 类是用户定义的类型的定义。类声明指定了数据将如何存储，同时指定了用来访问和操纵这些数据的方法
2. 类表示人们可以用类方法的共有接口对类对象执行的操作，这是抽象。类的数据成员可以是私有的，只能通过成员函数访问这些数据，这是数据隐藏。实现的具体细节是隐藏的，这是封装。
3. 类定义了一种类型，包括如何使用它。对象是一个变量或其他数据对象，并根据类定义被创建或使用。类和对象之间的关系如同标准类型与其变量之间的关系相同
4. 数据成员一般是私有的，需要对外隐藏，函数成员一般是公有的，对外提供接口。多个对象之中，每个对象都有自己的数据内存空间，但是所有的对象使用同一组成员函数。
5. 
```
class BankAccount
{
    private:
        std::string name_;
        std::string account_;
        double deposit_;
    
    public:
        BankAccount();
        BankAccount(const std::string &, const std::string &, double deposit=0);
        void ShowInfo() const;
        void SaveMoney(double cash);
        void TakeMoney(double cash);
};
```
6. 构造函数在实例化对象或显式调用时调用，析构函数在销毁该对象（过期）时调用
7. 
```
BankAccount::BankAccount(const string *name, const string *account, double deposit) // 默认函数在原型中，而不用在定义中
{
    name_ = name;
    account_ = account;
    deposit_ = deposit;
}
```
8. 默认构造函数类是不对类进行初始化时自动调用的构造函数，可以把类的数据成员设置为正确的值，避免出错，其没有参数或者所有参数都有默认值，使得能够声明数组
9. 
```
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
  //  Stock();        // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;
    const std::string GetCompany() const {return company;};
    int GetShares() const {return shares;};
    double GetShareVal() const {return share_val;};
    double GetTotalVal() const {return total_val;};
};

#endif
```
10. this是该类的指针，*this则是该类本身（调用方法的对象）