#include<stdio.h>
#include<string.h>
void main()
{
char fn[10],pat[10],temp[200],g[10];
FILE *fp;
printf("Enter Command\n");
scanf("%s%s%s",g,pat,fn);
if(strcmp(g,"grep")==0)
{
fp=fopen(fn,"r");
while(!feof(fp))
{
fgets(temp,1000,fp);
 int M = strlen(pat);
    int N = strlen(temp);
    int i,j;
 
    for (i=0;i<=N-M+1;i++)
    {
        for (j=0;j<M;j++)
        {
              if (temp[i+j]!=pat[j])
              break;
        }
        if(!feof(fp))  
        if (j==M)
        {
         printf("%s",temp);
        }
 
    }
  
}
fclose(fp);
}
else 
{ 
printf("\n Error in command \n");
exit(0);
}}
