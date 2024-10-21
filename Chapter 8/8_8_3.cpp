#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void TransfromToUpper(string&);

int main()
{
    string str;
    cout<<"Enter a string (q to quit): ";
    getline(cin,str);
    while(str[0]!='q' || str.size()>1)
    {
        TransfromToUpper(str);
        cout<<str<<endl;
        cout<<"Next Strig (q to quit): ";
        getline(cin,str);
    }
    cout<<"Bye."<<endl;
    return 0;
}

void TransfromToUpper(string& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
}
