#include<stdlib.h>
#include<stdio.h>
void help();
void quit();
void copy();
void lower();
void upper();
void invert();
void add();
void sub();
void wrong();

int main()
{
    char cmd[256];
    while(1)
    {
        scanf("%s",cmd);
	if(strcmp(cmd,"help") ==0)
	{
	    help();
	}
        else if(strcmp(cmd,"quit") ==0)
	{
	    quit();
	}
	else if(strcmp(cmd,"copy") ==0)
	{
	    copy();
	}
	else if(strcmp(cmd,"upper") ==0)
	{	
	    upper();
	}
	else if(strcmp(cmd,"lower") ==0)
	{
	    lower();
	}
	else if(strcmp(cmd,"invert") ==0)
	{
	    invert();
	}
	else if(strcmp(cmd,"add") ==0)
	{
	    add();
	}
	else if(strcmp(cmd,"sub") ==0)
	{
	    sub();
	}
	else 
	{
	    wrong();
	}
    }
}
void help()
{
    printf("help ---show all the command\n");
    printf("copy ---copy the input\n");
    printf("upper --capitalize the letter\n");
    printf("lower --turn into small letter\n");
    printf("invert--invert string\n");
    printf("add ----add arithmetic\n");
    printf("sub ----do subtractioin\n");
    printf("quit ---quit the menu\n");
}
void quit()
{
    exit(0);
}
void copy()
{
    printf("please input your string\n");
    char str[256];
    scanf("%s",str);
    printf("%s->%s\n",str,str);
}
void upper()
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
}
void lower()
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
}
void invert()
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
}    
void add()
{
    float a,b;
    printf("please input two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f\n",a+b);
}
void sub()
{
    float a,b;
    printf("please input two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f\n",a-b);
}
void wrong()
{
    printf("you have inputed a wrong command!\n");
}
