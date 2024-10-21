#include <iostream>
#include <vector>
#include <cstring>

class Cd
{
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd(){};
    ~Cd(){};
    virtual void Report() const;

private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
};

class Classic : public Cd 
{
public:
    Classic(){};
    Classic(char *s1, char *s2, char *s3, int n, double x);
    virtual void Report() const;
private:
    char label[50];
    char singer1[50];
    char singer2[50];
    int subsection;
    double playtime;
};