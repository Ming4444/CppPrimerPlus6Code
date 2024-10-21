#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class account
{
    
public:
    account(string);
    ~account();

    string m_fullname;
    string m_number;
    uint16_t m_money_in;
    uint16_t m_money_out;
    enum {M=12};
};

int main()
{
    string name = "test";
    account acnt(name);
    cout<<acnt.m_fullname<<endl;
    cout<<acnt.M<<endl;
    return 0;
}

account::account(string name):m_fullname(name)
{
    
}

account::~account(){}
