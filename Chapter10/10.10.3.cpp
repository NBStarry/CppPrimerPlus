#include <cstring>
#include <iostream>

using namespace std;

const int LEN = 40;
class golf
{
private:
    char fullname[LEN];
    int handicap;

public:
    golf(const char * name = "default", const int handi=0);
    int setgolf();
    void sethandicap(int hc);
    void showgolf() const;
};

int main()
{
    golf g1;
    g1.showgolf();
    g1.sethandicap(10);
    g1.showgolf();
    g1.setgolf();
    g1.showgolf();

    return 0;
}

golf::golf(const char * name, const int handi)
{
    strcpy(this->fullname, name);
    this->handicap = handi;
}

int golf::setgolf()
{
    char name[LEN];
    int handi;
    cout << "Enter the name: ";
    cin.getline(name, LEN);
    if (name[0] == '\0')
        return 0;
    cout << "Enter the handicap: ";
    cin >> handi;
    cin.get();
    
    golf temp(name, handi);
    *this = temp;

    return 1;
}

void golf::sethandicap(int hc)
{
    this->handicap = hc;
}

void golf::showgolf() const
{
    cout << "Name: " << this->fullname << endl;
    cout << "Handicap: " << this->handicap << endl;
}