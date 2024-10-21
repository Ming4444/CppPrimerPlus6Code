/*
    ！！注意析构函数要为虚析构vitual~
    第38，74，107行注释
    每个派生类对象对应一个基类对象，所以显式调用基类operator=()时，即修改当前派生类对象下的基类参数
*/
#include "13_11_2.h"

using namespace std;

void Bravo(const Cd & disk);

int main()
{
    Cd c1("Beatles","Capital",14,35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C","Alfred Brendel","Philips",2,57.17);
    Cd *pcd = &c1;
    cout<<"Using object directly:\n";
    c1.Report();
    c2.Report();

    cout<<"Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout<<"Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    cout<<"Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

Cd::Cd() //无形参构造函数可以和有默认形参的构造函数结合在一起，不用单独写，如Cd::Cd(const char *s1 = "", const char *s2 = "", int n = 0, double x = 0)
{
    performers = new char[1];
    label = new char[1];
}

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    label = new char[strlen(s2)+1];
    strcpy(performers,s1);
    strcpy(label,s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    delete[] performers;
    performers = new char[strlen(d.performers)+1];
    delete[] label;
    label = new char[strlen(d.label)+1];
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete[]performers;
    delete[]label;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d) return *this; //对于重载赋值运算符，先判断是否是自身
    delete[] performers;
    performers = new char[strlen(d.performers)+1];
    delete[] label;
    label = new char[strlen(d.label)+1];
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

void Cd::Report() const
{
    cout<<performers<<", "<<label<<", "<<selections<<", "<<playtime;
}

Classic::Classic()
{
    songs = new char[1];
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x)
    :Cd(s2,s3,n,x)
{
    songs = new char[strlen(s1)+1];
    strcpy(songs,s1);
}

Classic & Classic::operator=(const Classic & c)
{
    if(this == &c) return *this;
    Cd::operator=(c); //把c对象的基类成员变量赋值给this对象的基类成员变量
    delete[] songs;
    songs = new char[strlen(c.songs)+1];
    strcpy(songs,c.songs);
    
    return *this;
}

void Classic::Report() const
{
    Cd::Report();
    cout<<", "<<songs<<endl;
}

Classic::~Classic()
{
    delete[]songs;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}