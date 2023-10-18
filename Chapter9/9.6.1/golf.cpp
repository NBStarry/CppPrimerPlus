#include <cstring>
#include <iostream>

#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cout << "Enter the name: ";
    std::cin.getline(g.fullname, Len);
    if (g.fullname[0] == '\0')
        return 0;
    std::cout << "Enter the handicap: ";
    std::cin >> g.handicap;
    std::cin.get();

    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}