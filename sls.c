#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;

}*top,*start,*temp;
int push();
void pop();
void display();
int main()
{
    int ch;
    start=NULL;
    do
    {
        printf("\n MENU");
        printf("\n\t 1:PUSH \t2:POP \t 3:DISPLAY \t 4:EXIT");
        printf("\n\t Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;

            case 2:pop();
            break;

            case 3:display();
            break;

            case 4:exit(0);

        }
    }while(ch!=4);
    return 0;
}


int push()
{
    temp=malloc(sizeof(struct node*));
    printf("\n\tEnter element in the stack : ");
    scanf("%d",&temp->info);
    temp->next=NULL;

    if(start==NULL)
    {
        start=top=temp;

    }
    else
    {
        top->next=temp;
        top=temp;
    }
    return 0;

}

void display()
{
    temp=start;
    if(temp==NULL)
    {
        printf("\n\tstack is empty");
    }
    else
    {
        printf("\n\t stack : ");
        do
        {
            printf("\n\t %d ",temp->info);
            temp=temp->next;
        }while(temp!=NULL);

    }

}

void pop()
{
    printf("\n\t Deleted element from stack : %d ",top->info);
    temp=top;
    if(temp==NULL)
    {
        printf("\n\t stack is empty");
        return ;
    }
    else
    {
        temp=start;
        while(temp->next!=top)
        {
            temp=temp->next;
        }
        top=temp;
        temp->next=NULL;
    }

}
