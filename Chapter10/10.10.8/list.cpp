#include <iostream>

#include "list.h"
void ShowItem(Item &item)
{
    std::cout << item.data << std::endl;
}

list::list()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

list::~list()
{
    Item *temp = head;
    while (temp != nullptr)
    {
        std::cout << "Delete " << temp->data << std::endl;
        temp = temp->next;
        delete head;
        head = temp;
    }
}

void list::Push(int &x)
{
    if (IsFull())
    {
        std::cout << "ERROR: The list is full!\n";
        return;
    }
    
    Item *newNode = new Item;
    newNode->data = x;
    if(IsEmpty())
    {
        head = tail = newNode;
        head->next = tail;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = nullptr;
    }
    size++;

    return;
}

bool list::IsEmpty() const
{
    return head == nullptr;
}

bool list::IsFull() const
{
    return size == MAX_LENGTH;
}

void list::Visit(void (*pf)(Item &)) const
{
    Item *temp = head;
    while (temp != nullptr)
    {
        (*pf)(*temp);
        temp = temp->next;
    }
}