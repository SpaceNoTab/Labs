 #include<stdio.h>
main()
{
int n,ar[10],bt[10],tur[10],wt[10],f[10],i,m;
float avrgtt=0,avrgwt=0;
      /* for(i=0;i<10;i++)
            {
              ar[i]=0; bt[i]=0; wt[i]=0; f[i]=0;
            }*/
printf("enter the limit ");
            scanf("%d",&n);
 for(i=0;i<n;i++)
  { printf("enter the burst time");
                scanf("%d",&bt[i]);
    printf("\nenter the arrival time");
               scanf("%d",&ar[i]);
   }
 printf("\n\tprocess\tarrival time time\tburst time\n");
            for(i=0;i<n;i++)
            {
                        printf("\t%d\t\t%d\t\t%d\n",i+1,ar[i],bt[i]);
            } 

            f[0]=0;
             for(i=0;i<10;i++)
                   f[i+1]=f[i]+bt[i];
             for(i=0;i<n;i++)
            {     
                        wt[i]=f[i]-ar[i];
                        tur[i]=f[i+1]-ar[i];
                        avrgwt=avrgwt+wt[i];
                        avrgtt=avrgtt+tur[i]; 
            }
     avrgwt =avrgwt/n;
            avrgtt=avrgtt/n;
            printf("\n\tprocess\twaiting time\tturn arround time\n");
            for(i=0;i<n;i++)
            {
                        printf("\tp%d\t\t%d\t\t%d\n",i+1,wt[i],tur[i]);
            }


printf("the average waiting time is %f\n",avrgwt);
printf("the average turn around time is %f\n",avrgtt);
printf("\nGantt Chart is\n");

  for(i=0;i<n;i++)
    
     printf("   P%d",i+1);
   printf("\n");    
for(i=0;i<=n;i++)  
    printf(" %d  ",f[i]);
}

































































