#include <iostream>
#include <string>

using namespace std;
void printString(string, int);

int times = 1;

int main()
{
    string str = "ok";
    printString(str,4);
    printString(str,3);
    printString(str,0);
    printString(str,0);
    printString(str,1);
}

void printString(string str, int para)
{
    cout<<"--------"<<times<<"--------"<<endl;
    if(para!=0)
        for (size_t i = 0; i < times; i++)
            cout<<str<<endl;
    times++;
}