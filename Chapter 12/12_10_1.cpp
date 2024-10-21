#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Cow
{
public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow& c);
    ~Cow();
    Cow & operator=(const Cow &c);
    void ShowCow() const;
private:
    char name[20];
    char *hobby;
    double weight;
};

int main()
{
    Cow c1;
    c1.ShowCow();
    Cow c2("n2","h2",2);
    c2.ShowCow();
    Cow c3(c1);
    c3.ShowCow();
    Cow c4 = c2;
    c4.ShowCow();
}

Cow::Cow()
{
    strcpy(name,"default_n");
    hobby = new char[strlen("default_n")+1];
    strcpy(hobby,"default_n");
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strcpy(name,nm);
    hobby = new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight = wt;
}

Cow::Cow(const Cow& c)
{
    strcpy(name,c.name);
    hobby = new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
    cout<<name<<" is destructed"<<endl;
}

Cow & Cow::operator=(const Cow &c)
{
    if(this == &c) return *this;
    strcpy(name,c.name);
    delete hobby;
    hobby = new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    cout<<"name: "<<name<<endl;
    cout<<"hobby: "<<hobby<<endl;
    cout<<"weight: "<<weight<<endl;
}