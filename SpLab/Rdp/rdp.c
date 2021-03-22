#include<stdio.h>
#include<ctype.h>
#include<string.h>
char ip[10];
int i,flag;
void E();
void Et();
void T();
void Tt();
void F();
int main()
{
printf("Enter the Input Expression\n");
scanf("%s",ip);
E();
if((strlen(ip)==i)&&(flag==0))
printf("String Accepted");
else
printf("String Rejected");
}
void E()
{
T();
Et();
}
void Et()
{
if(ip[i]=='+')
{
i++;
T();
Et();
}
}
void T()
{
F();
Tt();
}
void Tt()
{
if(ip[i]=='*')
{
i++;
F();
Tt();
}
}
void F()
{

if(isalnum(ip[i]))
{
i++;
}
else if(ip[i]=='(')
{
i++;
E();
if(ip[i]==')')
{
i++;
}
else
{
flag=1;
}
}
else
{
flag=1;
}
}
