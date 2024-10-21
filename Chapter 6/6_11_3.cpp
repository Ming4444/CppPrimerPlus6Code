#include <iostream>

int main()
{
    using namespace std;
    char input = 0;
    bool breakwhile = 0;
    cout<<"Please enter one of the following choices:\n";
    cout<<"c) carnivore\t"<<"p) pianist\n"<<"t) tree\t\t"<<"g) game\n";
    cout<<"Please enter a word c, p, t,or g: ";
    cin>>input;
    while(!breakwhile)
    {
        switch (input)
        {
        case 'c':
            cout<<"A lion is a carnivore."<<endl;
            breakwhile = true;
            break;
        case 'p':
            cout<<"Langlang is a pianist."<<endl;
            breakwhile = true;
            break;
        case 't':
            cout<<"A maple is a tree."<<endl;
            breakwhile = true;
            break;
        case 'g':
            cout<<"The legend of Zelda is a popular game."<<endl;
            breakwhile = true;
            break;        
        default:
            cout<<"Please enter a word c, p, t,or g: ";
            cin>>input;
            break;
        }
    }
}