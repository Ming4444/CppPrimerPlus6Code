#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_member(char*,float,float,float,float);
struct box& set_volume(struct box&);

int main()
{
    struct box Squre = {"China",10,10,10,0};
    set_volume(Squre);
    show_member(Squre.maker,Squre.height,Squre.width,Squre.length,Squre.volume);
    return 0;
}

void show_member(char* mk,float h,float w,float l,float v)
{
    cout<<"maker: "<<mk<<endl;
    cout<<"height: "<<h<<endl;
    cout<<"width: "<<w<<endl;
    cout<<"length: "<<l<<endl;
    cout<<"volume: "<<v<<endl;
}

struct box& set_volume(struct box& b)
{
    b.volume = b.height*b.length*b.width;
    return b;
}
