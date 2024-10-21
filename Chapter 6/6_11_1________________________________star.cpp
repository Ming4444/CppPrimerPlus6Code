/////////
/*
    cctype 的使用
*/
/////////
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char symbol = 0;

    cout<<"Enter a series symbols: ";
    cin.get(symbol);
    while(symbol!='@')
    {
        if(isupper(symbol))
            symbol = tolower(symbol);
        else if(islower(symbol))
            symbol = toupper(symbol);
        if(!isdigit(symbol)&&!isspace(symbol))cout<<symbol;
        cin.get(symbol);
    }
    return 0;
}