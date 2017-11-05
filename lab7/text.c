#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "menu.h"

void Quit(int argc, char *argv[]);
void Version(int argc, char *argv[]);


void Quit(int argc, char *argv[])
{
    exit(0);
}

void Version(int argc, char *argv[])
{
    printf("version 1.0\n");
}
int Add(int argc, char* argv[])
{
    int i,r;
    if(argc !=3)
    {
        printf("warning input 2 numbers\n");
        return 0;
    }
    r=atoi(argv[1])+atoi(argv[2]);
    printf("result is %d\n",r);
    return 0;
}

int Sub(int argc, char* argv[])
{
    int i,r;
    if(argc !=3)
    {
        printf("warning input 2 numbers\n");
        return 0;
    }
    r=atoi(argv[1])-atoi(argv[2]);
    printf("result is %d\n",r);
    return 0;
}
int main(int argc,char* argv[])
{
    MenuConfig("version","XXX1.0(Menu program v1.0 inside)",NULL);
    MenuConfig("quit","Quit from XXX",Quit);
    MenuConfig("add","printf all you input in the terminal", Add);
    MenuConfig("sub","printf all you input in the terminal", Sub);

    ExecuteMenu();
}
