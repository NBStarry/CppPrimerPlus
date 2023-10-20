#include <string>
#include <iostream>

#include "bank.h"

BankAccount::BankAccount(const std::string &name, const std::string &account, double deposit) // 默认函数在原型中，而不用在定义中
{
    name_ = name;
    account_ = account;
    deposit_ = deposit;
}

void BankAccount::ShowInfo() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Account: " << account_ << std::endl;
    std::cout << "Deposit: " << deposit_ << std::endl;
}

void BankAccount::SaveMoney(double cash)
{
    deposit_ += cash;
}

void BankAccount::TakeMoney(double cash)
{
    deposit_ -= cash;
}