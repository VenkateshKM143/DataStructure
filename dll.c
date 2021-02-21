#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
  int info;
  struct node *pre,*next;
}*temp,*start,*r,*s;
void insert();
void delete();
void display();
int main()
{
    int ch;
    start=NULL;
    do
    {
        printf("\n MENU");
        printf("\n\t1:INSERT \t2:DELETE \t3:DISPLAY \t4:EXIT ");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1: insert();
            break;

            case 2:delete();
            break;

            case 3:display();
            break;

            case 4:exit(0);

        }
    }while(ch!=4);
    return 0;
}

void insert()
{
    int ele;
    temp=malloc(sizeof(struct node*));
    printf("\n\tEnter element you want to insert : ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->pre=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        printf("\n After which node you want to enter and element : ");
        scanf("%d",&ele);
        r=start;
        while(r->info!=ele)
        {
            r=r->next;
        }


        if(r->next==NULL)
        {
            r->next=temp;
            temp->pre=r;
        }
        else
        {
            s=r->next;
            r->next=temp;
            temp->next=s;
            temp->pre=r;
            s->pre=temp;
        }
    }
}

void display()
{
    temp=start;
    if(temp==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    else

        printf("\nlinked list : ");
        do
        {
            printf("\n\t%d",temp->info);
            temp=temp->next;
        }while(temp!=NULL);
}


void delete()
{
    int ele;
    printf("\nwhich node you want to delete : ");
    scanf("%d",&ele);
    temp=start;
    if(start==NULL)
    {
        printf("\n linked list is empty ....");
    }
    else
    {

        while(temp->info!=ele)
        {
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            printf("\n\t Deleted node : %d",temp->info);
            r=start;
            while(r->next!=temp)
            {
                r=r->next;
            }
            r->next=NULL;
            temp->pre=NULL;
        }
        else if(temp==start)
        {
            printf("\n\t Deleted node : %d",temp->info);
            start=start->next;
            temp->next=NULL;
            start->pre=NULL;

        }
        else
        {
            printf("\n\t Deleted node : %d",temp->info);
            r=temp->pre;
            s=temp->next;
            r->next=s;
            s->pre=r;
            temp->pre=temp->next=NULL;

        }

        free(temp);
    }

}


















