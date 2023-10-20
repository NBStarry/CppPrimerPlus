#include <iostream>
#include "list.h"

int main()
{
    list list1;
    std::cout << "Is the list empty? " << list1.IsEmpty() << std::endl;
    std::cout << "Is the list full? " << list1.IsFull() << std::endl;
    int x[MAX_LENGTH+1] = {1,2,3};
    list1.Push(x[0]);
    std::cout << "Is the list empty? " << list1.IsEmpty() << std::endl;
    std::cout << "Is the list full? " << list1.IsFull() << std::endl;
    for(int i=1; i<MAX_LENGTH+1; i++)
    {
        list1.Push(x[i]);
    }
    std::cout << "Is the list full? " << list1.IsFull() << std::endl;
    std::cout << "Let's show all in the list: " << std::endl;
    list1.Visit(ShowItem);

    return 0;
}