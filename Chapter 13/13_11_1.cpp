#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
    A(){}
    A(int a){aa = &a;}
    virtual ~A();
    virtual void show()=0;
private:
    int *aa;
};

class B: public A
{
public:
    B();
    B(int a, int b);
    void show(){cout<<"bb:"<<bb<<endl;A::show();}
private:
    int bb;    
};

int main()
{
    B b(1,2);
    b.show();
}

B::B()
{

}

B::B(int a, int b)
{
    bb = b;
}