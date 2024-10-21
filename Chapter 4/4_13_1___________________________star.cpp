////////////
/*
    从cin读取一段文字，直接使用">>"会忽略空格
*/
////////////
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string fname, lname;
    char grade = 0;
    int age = 0;
    cout<<"What's your first name? ";
    getline(cin,fname);
    cout<<"What's your last name? ";
    getline(cin,lname);
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What's your age? ";
    cin>>age;
    cout<<endl;

    cout<<"Name: "<<lname<<", "<<fname<<endl;
    cout<<"Grade: "<<(char)(grade+1)<<endl;
    cout<<"Age: "<<age;

    return 0;
}
