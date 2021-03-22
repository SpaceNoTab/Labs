#include<stdio.h>
#include<stdlib.h>
struct node
{
    int pid,sa,ea;
    struct node *next;
};
void main()
{
    struct node *head,*start=NULL,*ptr,*ptr1,*del,*temp,*start_alloc=NULL,*ptr2;
    int fr,ps,nh,ch,j,m=0,flag,ch1,n=0 ;
    int pn;
    while(m==0)
    {
    label1: printf("\n1-Create  new free frame list\n 2-Allocate using First Bit Allocation\n3-Exit\n4.display free frame list \nEnter choice\n");
    scanf("%d",&ch);
        switch(ch)
        {
       case 1:    printf("\nEnter no of free frame\n");
            scanf("%d",&nh);
            if(start==NULL)
            {
                head=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter Starting Address and Ending Address of %d frames ",nh);
                scanf("%d%d",&head->sa,&head->ea);
                head->next=NULL;
                start=head;
            }
            for(j=1;j<nh;j++)
            {
                head=(struct node*)malloc(sizeof(struct node));
                head->next=NULL;
                scanf("%d%d",&head->sa,&head->ea);
                ptr=start;
                while(ptr->next!=NULL)
                    ptr=ptr->next;
                ptr->next=head;
            }
        break;
        
        case 2:ch=0;
   if (start==NULL)
   { printf("\n\t\t no frames!!!!!!! \n");
              goto label1;
   
    
   } 
       while(ch==0)
           {
            printf("\n1.First fit \n2.Exit \nEnter choice\n");
    scanf("%d",&ch1);
    
             switch(ch1)
                {
             case 1:   printf("\nenter Process Name and size ");
                    scanf("%d%d",&pn,&ps);
                    ptr=start;
                    flag=0;
                    while((flag==0) && (ptr!=NULL))
                    {
                        fr=(ptr->ea)-(ptr->sa);
                        if(fr<ps)
                        {
                            temp=ptr;
                            ptr=ptr->next;
                        }
                        else if(fr==ps)
                        {
                            del=ptr;
                            head=(struct node*)malloc(sizeof(struct node));
                            head->next=NULL;
                            head->sa=ptr->sa;
                            head->pid=pn;
                            head->ea=ptr->ea; 
                            if(start_alloc==NULL)
                                start_alloc=head;
                            else
                            {    ptr1=start_alloc;
                                while(ptr1->next != NULL)
                                    {ptr1=ptr1->next; }
                                ptr1->next=head;
                            }
                            if(del==start)
                            {
                                start=start->next;
                                free(del);
                                flag=1;
                            }
                            else if(del->next==NULL)
                            {
                                temp->next=NULL;
                                free(del);
                                flag=1;
                            }
                            else
                            {
                                temp->next=ptr->next;
                                free(del);
                                flag=1;
                            }
                        }
                    else
                    {
                        head=(struct node*)malloc(sizeof(struct node));
                        head->sa=ptr->sa;
                        head->ea=ptr->ea;
                       // ptr->sa=ptr->sa+ps;
                        head->next=NULL;
                        head->pid=pn;
                        if(start_alloc==NULL)
                            start_alloc=head;
                        else
                        { ptr=start_alloc;
                            while(ptr->next!=NULL)
                                ptr=ptr->next;
                            ptr->next=head;
                        }
                            flag=1;
                    }
                }
                    if(ptr==NULL) printf("\nNO memory available ");
              ptr1=start_alloc;
                while(ptr1!=NULL)
                {
                    printf("%d  %d  %d",ptr1->sa,ptr1->pid,ptr1->ea);
                    if(ptr1->next!=NULL) printf("-->");
                    ptr1=ptr1->next;
                }
                break;
            case 2:ch=1;
            default: ;
            }
          }break;
case 3:    m=1;

default: ;
case 4:ptr1=start;
                while(ptr1!=NULL)
                {
                    printf("%d     %d",ptr1->sa,ptr1->ea);
                    if(ptr1->next!=NULL) printf("-->");
                    ptr1=ptr1->next;
                }
                break;
       
}}}
