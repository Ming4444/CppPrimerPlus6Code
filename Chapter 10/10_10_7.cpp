#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Plorg
{
public:
    Plorg(const char *name = "Plorga", int ci = 50);
    void reviseCI(int ci);
    void showPlorg() const;
private:
    char m_name[19];
    int m_ci;
};

int main()
{
    Plorg plg1;
    cout<<"plg1 before revise: ";
    plg1.showPlorg();
    cout<<"plg1 after revise: ";
    plg1.reviseCI(20);
    plg1.showPlorg();
    Plorg plg2("PlorgaNew");
    cout<<"plg2 before revise: ";
    plg2.showPlorg();
    cout<<"plg2 after revise: ";
    plg2.reviseCI(250);
    plg2.showPlorg();
}

Plorg::Plorg(const char *name, int ci)
{
    strcpy(m_name,name);
    m_ci = ci;
}

void Plorg::showPlorg() const
{
    cout<<m_name<<" "<<m_ci<<endl;
}

void Plorg::reviseCI(int ci)
{
    m_ci = ci;
}

