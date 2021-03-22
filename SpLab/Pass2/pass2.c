#include<stdio.h>
#include<string.h>
void main()
{
int i,opi=0,j,k,n=0,f,m;
char locctr[10],a[100],b[100],c[100],d[100],mn[100][10],op[100][10],sym1[100][10],sym2[100][10];
FILE *opt,*out,*in,*sym,*output2;
opt=fopen("optab.dat","r");
out=fopen("output.dat","r");
sym=fopen("symtab.dat","r");
output2=fopen("pass2out.dat","w");
while(!feof(opt))
{
fscanf(opt,"%s%s",mn[n],op[n]);
n++;
}
while(!feof(sym))
{
fscanf(sym,"%s%s",sym1[m],sym2[m]);
m++;
}
while((fscanf(out,"%s%s%s%s",a,b,c,d))!=EOF)
{
f=0;
for(i=0;i<n;i++)
{
if(strcmp(c,mn[i])==0&&(b!="START" && b!="END"))
{f=1;
for(j=0;j<m-1;j++)
{ if(strcmp(d,sym1[j])==0)
{fprintf(output2,"%s %s %s %s%s\n",a,b,c,op[i],sym2[j]);
}}
}}
if(f==0){
fprintf(output2,"%s %s %s %s\n",a,b,c,d);
}
}
}

