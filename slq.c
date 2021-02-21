#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
     int info;
     struct node *pre,*next;
}*front,*rear,*temp,*start,*r;
void insert();
void delete();
void display();
int main()
{

    int ch;
    rear=NULL;
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
    temp=malloc(sizeof(struct node*));
    printf("\n\t Enter Element : ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(rear==NULL)
    {
        rear=temp;
        front=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }

}


void display()
{

    temp=front;
    if(temp==NULL)
    {
        printf("\n\t Queue is EMPTY");

    }
    else
    {
        printf("\n\tQUEUE : ");
        do
        {
            printf("\t%d",temp->info);
            temp=temp->next;
        }while(temp!=NULL);

    }
}

void delete()
{

    temp=front;
    if(temp==NULL)
    {
        printf("\n\tLinked Queue is Empty ");
        front=NULL;
        rear=NULL;
        return;

     }
    else
    {
        printf("\n\tDeleted Element : %d",temp->info);
        front=front->next;
        temp->next=NULL;
        free(temp);
    }
}
