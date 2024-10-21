#include <iostream>

using namespace std;

typedef struct candybar
{
    const char* name;
    double weight;
    int kalorie;
}CandyBar;

CandyBar& memberSet(CandyBar& cb,const char* name="Millennium Munch",double weight=2.85,int kalorie=350);
void memberDisplay(const CandyBar&);

int main()
{
    CandyBar cb;
    const char *name;
    double weight;
    int kalorie;
    memberDisplay(memberSet(cb));
    return 0;
}

CandyBar& memberSet(CandyBar& cb,const char* name, double weight, int kalorie)
{
    cb.name=name;
    cb.weight=weight;
    cb.kalorie=kalorie;
    return cb;
}

void memberDisplay(const CandyBar& cb)
{
    cout<<"----------CandyBar Info----------"<<endl;
    cout<<"Name: "<<cb.name<<endl;
    cout<<"Weight: "<<cb.weight<<endl;
    cout<<"Kalorie: "<<cb.kalorie<<endl;
}
