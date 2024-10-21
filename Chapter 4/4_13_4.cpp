#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string fname, lname;
    string sstring;
    cout<<"Enter your first name: ";
    cin>>fname;
    cout<<"Enter your last name: ";
    cin>>lname;
    sstring = lname+", "+fname;

    cout<<"Here's the information in a single string: "<<sstring<<endl;

    return 0;
}