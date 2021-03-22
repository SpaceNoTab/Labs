
#include <stdio.h> 
#include <string.h> 
#include <sys/types.h> 
void main() 
{ 
int pid,n,i=0,j=1,s,k;
printf("\n Enter the value of n : ");
scanf("%d",&n);
pid=fork();
if(pid == -1) 
	printf("Error in creating process"); 
else if(pid == 0) 
{
	printf("executing in child process, pid=%d and its parent pid = %d\n ",getpid(),getppid());
	printf("\n\tFIBONACCI SERIES");
	if(n==0)
	{
		printf("\n No elements in fibonacci series !!");
	}
	else if (n==1)
	{
		printf("\n 0\n");
	}
	else if (n==2)
	{
		printf("\n 0 1\n");
	}
	else
	{
		printf("\n 0 1");
		k=2;
		while(k<n)
		{
			s=i+j;
			i=j;
			j=s;
			printf(" %d",s);
			k++;
		}
		printf("\n");
	}
		
}	
else 
{
	wait(10000);
	printf("Executing in parent process,pid=%d and its parent pid = %d\n ",getpid(),getppid()); 
	printf("\n\tFACTORIAL OF %d = ",n);
	if(n==0)
	{
		printf("%d\n",1);
	}
	else
	{
		k=1;
		i=1;
		while(i<=n)
		{
			k*=i;
			i++;
		}
		printf("%d\n",k);
	}

} 
}
