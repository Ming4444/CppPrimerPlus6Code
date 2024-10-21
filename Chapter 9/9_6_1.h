#pragma once

const int Len = 40;
typedef struct G
{
    char fullname[Len];
    int handicap;
}golf;

void setgolf(golf &g, const char *name, int hc);
int setgolf(golf &g);
void handicap(golf &g, int hc);
void showgolf(const golf &g);
