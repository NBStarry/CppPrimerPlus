#include <iostream>

struct customer
{   
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};    // constant specific to class
    Item items[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
};

Stack::Stack()    // create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item) 
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

int main()
{
    Stack stack;
    double sum = 0;
    customer customer1 = {"John", 100};
    customer customer2 = {"Mary", 200};
    customer customer3 = {"Tom", 300};
    customer popCustomer;
    stack.push(customer1);
    stack.push(customer2);
    stack.pop(popCustomer);
    sum += popCustomer.payment;
    std::cout << "Sum: " << sum << std::endl;
    stack.push(customer3);
    stack.pop(popCustomer);
    sum += popCustomer.payment;
    std::cout << "Sum: " << sum << std::endl;
    stack.pop(popCustomer);
    sum += popCustomer.payment;
    std::cout << "Sum: " << sum << std::endl;
}