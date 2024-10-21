#include <iostream>
#include <cstring>
#include "9_6_1.h"

using namespace std;

int main()
{
    golf ann;
    setgolf(ann,"Ann",24);
    cout<<ann.fullname<<endl;
    cout<<ann.handicap<<endl;
}

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}

int setgolf(golf &g)
{

}

void handicap(golf &g, int hc)
{

}

void showgolf(const golf &g)
{

}