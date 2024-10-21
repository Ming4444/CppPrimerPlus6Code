#include <iostream>

double add(double,double);
double multiply(double,double);
double calculate(double,double,double (*pf)(double,double));

int main()
{
    const int PLEN = 10;
    using namespace std;
    double x,y,res;
    double (*pf[PLEN])(double,double);
    for (int i = 0; i < PLEN; i++)
    {
        if(i%2==0)
            pf[i]=add;
        else
            pf[i]=multiply;
        cout<<"Enter two number:";
        cin>>x>>y;
        res=calculate(x,y,pf[i]);
        cout<<"Result: "<<res<<endl;
    }
    return 0;
}

double add(double x,double y)
{
    return x+y;
}

double multiply(double x,double y)
{
    return x*y;
}

double calculate(double x,double y,double (*func)(double,double))
{
    double res = func(x,y);
    return res;
}