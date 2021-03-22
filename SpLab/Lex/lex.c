#include<stdio.h>
#include<string.h>
int state,start;
int fail()
{
switch(state)
{
case 0:state=3;
	break;
case 3:state=6;
	break;
case 6:state=7;
	break;
}
start=state;
return state;
}
void main()
{
FILE *fp1,*fp2;
char c,s[100],a[100],ch[100][100],d[100][100],str[100][100],pos[100][100];
int flag1,flag2=0,i,j,p=0,count=0,flag;
state=0;
fp1=fopen("file1.c","r");
fp2=fopen("file2.dat","r");
while(!feof(fp2))
{
fscanf(fp2,"%s",d[count]);
count++;
}
fscanf(fp1,"%s",a);
while(!feof(fp1))
{
switch(state)
{
case 0:i=0;
	if(p==0||p==1||p==3||p==4||p==6||p==7)
	c=getc(fp1);
	if(isalpha(c))
	{
	state=1;
	s[i]=c;
	i++;
	}
	else
	{
	state=fail();
	}
	break;
case 1:p=1;
	c=getc(fp1);
	if(isalpha(c) || isdigit(c))
	{
	state=1;
	s[i]=c;
	i++;
	}
	else
	state=2;
	break;
case 2: p=2;
	flag=0;
	s[i]='\0';
	for(j=0;j<count;j++)
	{
	if(strcmp(d[j],s)==0)
	break;
	}
	if(j<count)
	{
	printf("%s   is a keyword\n",s);
	state=0;
	}
	else
	{
	printf("%s is an identifier\n",s);
	state=0;
	}
	break;
case 3: p=3;
if(isdigit(c))
{
state = 4;
s[i]=c;
i++;
}
else
{
state = fail();
}
break;

case 6 : p=6;
  if(c=='+'||c=='-'||c=='*'||c=='/'||c=='=')
   {
    printf("%c      is an operator\n",c);
   state=0;
   }
  else
   state=fail();
   i=0;
   break;

case 4 : p=4;
   c=getc(fp1);
  if(isdigit(c))
  {
  state=4;
  s[i]=c;
  i++;
  }
 else
  {
   state=5; 
 }
break;

case 5: p=5;
       if(state==5)
        {
         s[i]='\0';
         printf("%s      is a number\n ",s);
          state=0;
          }
        break;

case 7: p=7;
       if(c==';'||c==')'||c=='('||c=='}')
        printf("%c      is a punctuator\n",c);
         state=0;
         break;

}
}
}
/*#include<stdio.h>
#include<string.h>
int state,start;
int fail()
{
switch(state)
{
case 0:state=3;
	break;
case 3:state=6;
	break;
case 6:state=7;
	break;
}
start=state;
return state;
}
void main()
{
FILE *fp1,*fp2;
char c,s[100],a[100],ch[100][100],d[100][100],str[100][100],pos[100][100];
int flag1,flag2=0,i,j,p=0,ct=0,f=0;
state=0;
fp1=fopen("file1.c","r");
fp2=fopen("file2.dat","r");
while(!feof(fp2))
{
fscanf(fp2,"%s %s",ch[ct],d[ct]);
ct++;
}
fscanf(fp1,"%s",a);
while(!feof(fp1))
{
switch(state)
{
case 0:i=0;
	if(p==0||p==1||p==3||p==4||p==6||p==7)
	c=getc(fp1);
	if(isalpha(c))
	{
	state=1;
	s[i]=c;
	i++;
	}
	else
	{
	state=fail();
	}
	break;
case 1:p=1;
	c=getc(fp1);
	if(isalpha(c) || isdigit(c))
	{
	state=1;
	s[i]=c;
	i++;
	}
	else
	state=2;
	break;
case 2:p=2;
	flag1=0;
	s[i]='\0';
	for(j=0;j<ct;j++)
	{
	f=0;
	if(strcmp(d[j],s)==0)
	{
	f=1;
	break;
	}
	}
	if(f==1)
	{
	printf("%s is a keyword\n",s);
	state=0;
	}
	else
	{
	printf("%s is an identifier\n",s);
	state=0;
	}
	break;
case 3: p=3;
	if(isdigit(c))
	{
	state = 4;
	s[i]=c;
	i++;
	}
	else
	{
	state = fail();
	}
	break;
case 4 : p=4;
   	c=getc(fp1);
  	if(isdigit(c))
  	{
  	state=4;
  	s[i]=c;
  	i++;
 	}
	else
  	{
 	state=5; 
	}
	break;
case 5: p=5;
	if(state==5)
       	{
       	s[i]='\0';
       	printf("%s is a number\n ",s);
       	state=0;
      	 }
       	break;
case 6 : p=6;
 	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='=')
   	{
   	printf("%c is an operator\n",c);
	state=0;
	}
 	else
  	state=fail();
  	i=0;
  	break;
case 7: p=7;
	if(c==';'||c==')'||c=='('||c=='}')
	printf("%c is a special character\n",c);
	state=0;
	break;
}}}*/
