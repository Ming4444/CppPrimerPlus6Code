/*
    函数默认形参
*/
#include <iostream>
#include <cstring>

struct stringy
{
    char *str;
    int ct;
};

void set(stringy&,char*);
void show(stringy&,int num=1);//////
void show(const char*,int num=1);////

int main()
{
    stringy beany;
    char testing[]= "Reality isn't what it used to be.";

    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    delete beany.str;
    return 0;
}

void set(stringy&string, char* test)
{
    string.str = new char;
    string.str = test;
    string.ct = strlen(string.str);
}

void show(stringy&string, int num)
{
    for (size_t i = 0; i < num; i++)
    {
        std::cout<<string.str<<std::endl;
    }
    
}

void show(const char* string, int num)
{
    for (size_t i = 0; i < num; i++)
    {
        std::cout<<string<<std::endl;
    }
}