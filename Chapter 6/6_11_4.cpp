#include <iostream>
#include <string>

using namespace std;

typedef struct bop
{
    string fullname;
    string title;
    string bopname;
    int preference;
}BOP;

int main()
{
    BOP person[2] = {{"Mingliu","genius","ML",1},{"Mingjia","idiot","MJ",2}};
    char input = 0;
    bool quit = 0;
    cout<<"Benevolent Order of Programmers Report\n";
    cout<<"a. display by name\t"<<"b. display by title\n"<<"c. display by bopname\t"<<"d. display by preference\n"<<"q. quit\n";
    cout<<"Enter your choice: ";
    cin>>input;
    while (!quit)
    {
        switch (input)
        {
        case 'a':
            for (size_t i = 0; i < 2; i++)
                cout<<person[i].fullname<<endl;
            cout<<"next choice: ";
            cin>>input;
            break;
        case 'b':
            for (size_t i = 0; i < 2; i++)
                cout<<person[i].title<<endl;
            cout<<"next choice: ";
            cin>>input;
            break;
        case 'c':
            for (size_t i = 0; i < 2; i++)
                cout<<person[i].bopname<<endl;
            cout<<"next choice: ";
            cin>>input;
            break;
        case 'd':
            BOP *temp;
            for (size_t i = 0; i < 2; i++)
            {
                if (person[i].preference==0)
                    cout<<person[i].fullname<<endl;
                else if (person[i].preference==1)
                    cout<<person[i].title<<endl;
                else    
                    cout<<person[i].bopname<<endl;
            }
            cout<<"next choice: ";
            cin>>input;
            break;
        case 'q':
            cout<<"Bye!"<<endl;
            quit = true;
            break;
        }
    }
    
}