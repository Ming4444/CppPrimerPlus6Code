#include <iostream>
#include <vector>
#include <cstring>

class Cd
{
public:
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=(const Cd &d);

private:
    char *performers;
    char *label;
    int selections;
    double playtime;
};

class Classic : public Cd 
{
public:
    Classic();
    Classic(const char *s1, const char *s2, const char *s3, int n, double x);
    virtual ~Classic();
    void Report() const;
    Classic & operator=(const Classic &c);
private:
    char *songs;
};