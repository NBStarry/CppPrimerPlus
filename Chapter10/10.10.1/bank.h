#include <string>

class BankAccount
{
    private:
        std::string name_;
        std::string account_;
        double deposit_;
    
    public:
        BankAccount(const std::string &name = "default", 
        const std::string &account = "default", double deposit=0);
        
        void ShowInfo() const;
        void SaveMoney(double cash);
        void TakeMoney(double cash);
};