#include <iostream>
#include <string>

#include "bank.h"

int main()
{
    BankAccount user1("Tom", "123456", 1000);
    BankAccount user2;
    user1.ShowInfo();
    user2.ShowInfo();
    user2.SaveMoney(100);
    user2.ShowInfo();
    user2.TakeMoney(50);
    user2.ShowInfo();

    return 0;
}