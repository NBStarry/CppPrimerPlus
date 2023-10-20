#include <iostream>
#include <cstring>

class Plorg
{
private:
    char name[20];
    int CI;
public:
    Plorg();
    ~Plorg();

    void setCI(int ci) { CI = ci; }
    void showPlorg() const { std::cout << "Name: " << name << ", CI: " << CI << std::endl; }
};

int main()
{
    Plorg plorg;
    plorg.showPlorg();
    plorg.setCI(100);
    plorg.showPlorg();

    return 0;
}

Plorg::Plorg()
{
    strcpy(name, "Plorga");
    CI = 50;
}

Plorg::~Plorg()
{
}
