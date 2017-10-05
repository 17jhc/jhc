#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

tDataNode* FindCmd(tDataNode * head, char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(p->cmd,cmd))
	{
	    return p;
	}
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode * head)
{
    printf("menu list:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
	printf("%s - %s\n",p->cmd,p->desc);
	p = p->next;	
    }
    return 0;
}
int Copy(tDataNode * head)
{
    printf("input your string\n");
    char str[256];
    scanf("%s",str);
    printf("%s->%s\n",str,str);
    return 0;
}
int Upper(tDataNode * head)
{
    char a[256];
    printf("please input your string\n");
    scanf("%s",a);
    int i = 0;
    while(a[i])
    {
	a[i] = a[i] - 32;
        i = i + 1;
    }
    printf("%s\n",a);
    return 0;
}
int Lower(tDataNode * head)
{
    char a[256];
    printf("please input your string\n");
    scanf("%s",a);
    int i = 0;
    while(a[i])
    {
        a[i] = a[i] + 32;
        i = i + 1;
    }
    printf("%s\n",a);
    return 0;
}

int Invert(tDataNode * head)
{
    char a[256];
    printf("please input your string\n");
    scanf("%s",a);
    printf("%s\n",a);
    int i = 0;
    while(a[i]){
	i = i + 1;
    }
    while(i > 0)
    {
        i = i - 1;
	printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}    

int Add(tDataNode * head)
{
    float a,b;
    printf("please input two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f\n",a+b);
    return 0;
}
int Sub(tDataNode * head)
{
    float a,b;
    printf("please input two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f\n",a-b);
    return 0;
}
