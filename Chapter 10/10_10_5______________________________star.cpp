/*
    模拟栈实现
*/
#include <iostream>
#include <string>

using namespace std;

typedef struct customer Item;

struct customer
{
    char fullname[35];
    double payment;
};

class stack
{
public:
    stack();
    ~stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item&);
    double pop(Item&);

private:
    enum {MAX = 3};
    double m_total;
    Item m_stack[MAX];
    int top;
};

int main()
{
    Item customer;
    stack stk;
    double total;
    bool quit_flag = false;
    char button = 0;
    while(!quit_flag)
    {
        cout<<"Input 'A' to add customer information, R to remove customer information ('q' to quit): ";
        cin>>button;
        cin.get();
        switch (button)
        {
        case 'A':
            if(stk.isFull())
                cout<<"Stack is full, add customer failed!"<<endl;
            else
            {  
                cout<<">>Enter fullname: ";
                cin.getline(customer.fullname,sizeof(customer.fullname),'\n');
                cout<<">>Enter payment: ";
                cin>>customer.payment;
                stk.push(customer);
            }
            break;
        case 'R':
            if(stk.isEmpty())
                cout<<"Stack is already empty, remove customer failed!"<<endl;
            else
            {
                total = stk.pop(customer);
                cout<<"Customer "<<customer.fullname<<" have been removed"<<endl;
                cout<<"The total payment is "<<total<<endl;
            }
            break;
        case 'q':
            cout<<"Bye."<<endl;
            quit_flag = true;
        }
    }
    return 0;
}

stack::stack()
{
    top = 0;
}

stack::~stack()
{

}

bool stack::isEmpty() const
{
    if(0 == top)
        return true;
    else
        return false;
}

bool stack::isFull() const
{
    if(top == MAX)
        return true;
    else
        return false;
}

bool stack::push(const Item& customer)
{
    if(isFull())
        return false;
    m_stack[top++] = customer;
    return true;
}

double stack::pop(Item& customer)
{
    if(isEmpty())
        return 0;
    customer = m_stack[--top];
    m_total += customer.payment;
    return m_total;
}