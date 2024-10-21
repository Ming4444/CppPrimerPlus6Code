#include <iostream>
#include <cstring>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person
{
public:
    Person();
    Person(const string &ln, const char *fn = "Heyyou");
    void show() const;
    void FormalShow() const;

private:
    static const int LIMIT = 25;
    string m_lname;
    char m_fname[LIMIT];
};

Person::Person()
{
    m_lname = "";
    m_fname [0] = '\0';
}

Person::Person(const string &ln, const char *fn)
{
    m_lname = ln;
    strcpy(m_fname, fn);
}

void Person::show() const
{
    cout<<"show: "<<m_fname<<" "<<m_lname<<endl;
}

void Person::FormalShow() const
{
    cout<<"show: "<<m_lname<<" "<<m_fname<<endl;
}

int main()
{
    const string name = "Smythecraft";
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    cout<<endl;
    one.FormalShow();
    cout<<endl;
    two.show();
    cout<<endl;
    two.FormalShow();
    cout<<endl;
    three.show();
    cout<<endl;
    three.FormalShow();
    cout<<endl;

    return 0;
}