/*#include<stdio.h>
int main()
{
int k=1,i,j,n,time,temp,flag=0,t,ti[50],tp[50];
int wt=0,tt=0,at[10],bt[10],rt[10];
printf("Enter Total Process:\t ");
scanf("%d",&n);
temp=n;

printf("Enter arrival time \n");
for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
}
printf("Enter burst time \n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
rt[i]=bt[i];
}

printf("Enter Time Quantum:\t");
scanf("%d",&t);

ti[0]=0;
printf("\n\nProcess\t|Arival Time\t|Burst Time\t|Waiting Time\t|Turnaround Time|\n\n");
for(time=0,i=0;temp!=0;)
{
if(rt[i]<=t && rt[i]>0)
{
time+=rt[i];
ti[k]=time;
tp[k]=i;
k++;

rt[i]=0;
flag=1;

}
else if(rt[i]>0)
{
rt[i]-=t;
time+=t;
ti[k]=time;
tp[k]=i;
k++;
}
if(rt[i]==0 && flag==1)
{
temp--;
printf("P[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,at[i],bt[i],time-at[i]-bt[i],time-at[i]);
wt+=time-at[i]-bt[i];
tt+=time-at[i];
flag=0;

}
if(i==n-1)
i=0;
else if(at[i+1]<=time)
i++;
else
i=0;
}
printf("\nAverage Waiting Time= %f\n",wt*1.0/n);
printf("Avg Turnaround Time = %f",tt*1.0/n);

printf("\n");
for(i=1;i<k;i++)
{
printf("|p%d   ",tp[i]+1);
}
printf("|");
printf("\n");
for(i=0;i<k;i++)
{
printf("%d     ",ti[i]);
}
printf("\n");


return 0;
}*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a[3];
    a = (int*) malloc(sizeof(int)*3);
    free(a);
    return 0;
}
