#include<stdlib.h>
#include<stdio.h>
#include"linklist.h"

int help();
int quit();
int copy();
int upper();
int lower();
int invert();
int add();
int sub();
#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 10

/* menu program */
static tDataNode head[] =
{
    {"help","this is help cmd!",help,&head[1]},
    {"quit","this is quit cmd!",quit,&head[2]},
    {"copy","this is copy cmd!",copy,&head[3]},
    {"upper","",upper,&head[4]},
    {"lower","",lower,&head[5]},
    {"invert","",invert,&head[6]},
    {"add","",add,&head[7]},
    {"sub","",sub,&head[8]},
    {"version","menu program v1.0",NULL,NULL}
};             
               
int main()
{
    /* cmd line begins */
    while(1)
    {
	char cmd[CMD_MAX_LEN];
	printf("input a cmd number> \n");
	scanf("%s", cmd);
	tDataNode *p = FindCmd(head , cmd);
	if( p == NULL )
	{
	    printf("this is a wrong cmd!\n");
	    continue;
	}
	printf("%s - %s\n", p->cmd, p->desc);
        if( p->handler != NULL )
	{
	    p->handler();    
	}
    }
}

int help()
{
    ShowAllCmd(head);
    return 0;
}
int quit()
{
    exit(0);
}

int copy()
{
    Copy(head);
    return 0;
}
int upper()
{
    Upper(head);
    return 0;
}
int lower()
{
    Lower(head);
    return 0;
}
int invert()
{
    Invert(head);
    return 0;
}
int add()
{
    Add(head);
    return 0;
}
int sub()
{
    Sub(head);
    return ;
}
