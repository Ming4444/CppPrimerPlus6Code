#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    int total = 0;
    cout<<"Enter words (to stop type the word done):\n";
    while (1)
    {
        cin>>words;
        if(words=="done")
            break;
        total++;
    } 
    cout<<"You entered a total of "<<total<<" words"<<endl;
}