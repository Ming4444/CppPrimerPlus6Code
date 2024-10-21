#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *sstring;
    char fname[25] = {0};
    char lname[25] = {0};
    cout<<"Enter your first name: ";
    cin>>fname;
    cout<<"Enter your last name: ";
    cin>>lname;
    strcat(lname,", ");
    sstring = strcat(lname,fname);

    cout<<"Here's the information in a single string: "<<sstring<<endl;

    return 0;
}