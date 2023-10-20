struct ListNode
{
    int data;
    ListNode *next;
};

typedef ListNode Item;
const int MAX_LENGTH = 10;

void ShowItem(Item &item);

class list
{
private:
    Item *head;
    Item *tail;
    int size;
public:
    list();
    ~list();

    void Push(int &);
    bool IsEmpty() const;
    bool IsFull() const;
    void Visit(void (*pf)(Item &)) const;
};
