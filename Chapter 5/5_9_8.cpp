#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char words[100] = {0};
    int total = 0;
    cout<<"Enter words (to stop type the word done):\n";
    while (1)
    {
        memset(words,0,sizeof(words));
        cin>>words;
        if(!strcmp(words,"done"))
            break;
        total++;
    } 
    cout<<"You entered a total of "<<total<<" words"<<endl;
}