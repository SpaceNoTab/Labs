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
    int fr,pn,ps,nh,ch,j,m=0,flag,ch1,n=0;
    while(m==0)
    {
    printf("\n1-Create free frame list\n2-Display free frame list\n3-Allocate\n4-Exit\nEnter choice\n");
    scanf("%d",&ch);
        switch(ch)
        {
        case 1:    printf("\nEnter no of holes\n");
            scanf("%d",&nh);
            if(start==NULL)
            {
                head=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter starting and ending addresses ");
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
        case 2:printf("\nFree frame list\n");
            ptr=start;
            while(ptr!=NULL)
            {
                printf("%d--%d",ptr->sa,ptr->ea);
                /*if(ptr->next!=NULL)
                {
                printf("-->");*/
                ptr=ptr->next;
            }
            printf("\n");
        break;
        case 3:n=0;
            while(n==0)
            {
                printf("\nFirst fit\n2-Best Fit\n3-Display\n4-Exit ");
                scanf("%d",&ch1);
                switch(ch1)
                {
                case 1:printf("\nenter process name and size ");
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
                        head->ea=ptr->sa+ps;
                        ptr->sa=ptr->sa+ps;
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
            break;
            case 2:printf("\nEnter process name and size ");
                scanf("%d%d",&pn,&ps);
                temp=start;
                ptr=temp->next;
                flag=0;
                while(ptr!=NULL && flag==0)
                {
                    if((temp->ea-temp->sa)>(ptr->ea-ptr->sa)&&(ptr->ea-ptr->sa)>=ps)                
                    temp=ptr;
                    else if((temp->ea-temp->sa<ps)&&(ptr->ea-ptr->sa)>=ps)
                    {temp=ptr;}
                    ptr=ptr->next;
                }if((temp->ea-temp->sa)<ps) flag=0;
                else flag=1;
                if(flag==0) printf("\nNO frame available \n");
                else
                {
                    head=(struct node*)malloc(sizeof(struct node));
                    head->sa=temp->sa;
                    head->ea=temp->sa+ps;
                    head->pid=pn;
                    head->next=NULL;
                    if(start_alloc==NULL)
                    start_alloc=head;
                    else
                    {
                        ptr1=start_alloc;
                        while(ptr1->next!=NULL) ptr1=ptr1->next;
                                                ptr1->next=head;
                                           }
                                         if((temp->ea-temp->sa)==ps)
                                         {
                                           if(start==temp)
                                           {
                                           
                                            start=start->next;
                                            }
                                           else
                                          {
                                           ptr2=start;
                       while(ptr2->next!=temp)
                       {
                        ptr2=ptr2->next;
                       }   

                     ptr2->next=temp->next;
                    }free(temp);
                }
                else
            {temp->sa=temp->sa+ps;
            }
            }break;
            case 3:ptr1=start_alloc;
                while(ptr1!=NULL)
                {
                    printf("%d--%d--%d",ptr1->sa,ptr1->pid,ptr1->ea);
                    if(ptr1->next!=NULL) printf("-->");
                    ptr1=ptr1->next;
                }
                break;
            case 4:n=1;
            default: ;
        }}
break;
case 4:    m=1;
default: ;
}
}}

    
                   
                                       












