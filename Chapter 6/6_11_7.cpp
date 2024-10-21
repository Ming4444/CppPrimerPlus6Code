#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    string word;
    int vowels = 0, consonants = 0, others = 0;
    
    cout<<"Enter words('q' to quit):"<<endl;
    cin>>word;
    while (word!="q")
    {
        if(isalpha(word[0]))
        {
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
                vowels++;
            else 
                consonants++;
        }
        else
            others++;
        cin>>word;
    }
    cout<<vowels<<" words beginning with vowels"<<endl;
    cout<<consonants<<" words beginning with consonants"<<endl;
    cout<<others<<" others"<<endl;

    return 0;
}