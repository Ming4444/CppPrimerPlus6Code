/*
    1.为什么有些方法重新定义了，而有些没有重新定义？
    答：Port类有动态内存分配的需求，所以不能用默认的拷贝构造和析构.

    2.为何没有将operator=()和operator<<()声明为virtual？
    答：语法上可将operator=()声明为virtual，但并没有意义，因为实现多态需要完全一致的函数，而operator=()对于派生类与基类的实现是不同的；
        operator<<()为友元而非成员函数，不满足“只有成员函数才能成为虚函数”的语法要求.
*/
#include <iostream>
#include <cstring>

using namespace std;

class Port
{
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);
    virtual ~Port() {delete[] brand;}
    Port & operator=(const Port & p);
    Port & operator+=(int b);
    Port & operator-=(int b);
    int BottleCount() const {return bottles;}
    virtual void show() const;
    friend ostream & operator<<(ostream & os, const Port & p);

private:
    char *brand;
    char style[20];
    int bottles;
};

Port::Port(const char * br, const char * st, int b): bottles(b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
}

Port::Port(const Port & p): bottles(p.bottles)
{
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
}

Port & Port::operator=(const Port & p) // Port & p = vp
{
    if(this == &p) 
        return *this;

    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}

void Port::show() const
{
    cout<<"Brand: "<<brand<<endl;
    cout<<"Kind: "<<style<<endl;
    cout<<"Bottles: "<<bottles<<endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

class VintagePort: public Port
{
public:
    VintagePort(const char * br = "", int b = 0, const char * nn = "", int y = 0);
    VintagePort(const VintagePort & vp);
    virtual ~VintagePort() {delete[] nickname;}
    VintagePort & operator=(const VintagePort & vp);
    void show() const;
    friend ostream & operator<<(ostream & os, VintagePort & vp);

private:
    char *nickname;
    int year;
};

VintagePort::VintagePort(const char * br, int b, const char * nn, int y): Port(br, "vintage", b), year(y)
{
    nickname = new char[strlen(br) + 1];
    strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort & vp)
{
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(this == &vp)
        return *this;
    delete[] nickname;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::show() const
{
    cout<<"nickname: "<<nickname<<endl;
    cout<<"year: "<<year<<endl;
}

ostream & operator<<(ostream & os, VintagePort & vp)
{
    os << vp.nickname << ", " << vp.year;
    return os;
}

int main()
{
    Port p("Gallo","tawny",20);
    p.show();
    cout << p;
    cout<<endl;
    VintagePort vp("Gallo1",21,"The Noble",100);
    vp.show();
    cout << vp;
    cout<<endl;
}