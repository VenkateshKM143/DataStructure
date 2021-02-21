#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5


void main()

{
	int ele,ch,i,queue[30];
	int rear=-1,front=-1;
	clrscr();
  {
    while(1)
   {
     printf("menu");
     printf("\n1.insert \n2.delete \n3.display \n4.exit");
     printf("\nenter your choice");
     scanf("%d",&ch);

switch(ch)
 {
 case 1: //insert

   if(rear== 5 )
   printf("queue is full");
   else
   {

   printf("enter elements you want to insert");
   scanf("%d",&ele);
   rear++;
   queue[rear]=ele;
   }

  break;

  case 2:  //delete

    if(front==rear)
    printf("queue is empty");
    else
    {
    ele=queue[front];
      printf("%d",ele);
      front++;
    }
    break;
  case 3: //display
  if(rear== -1)
  printf("\nqueue is empty");
  else
  {
	 for(i=front+1;i<=rear;i++)
	{
	 printf("\n%d",queue[i]);
	}
  }
  break;

  case 4:exit(0);
  break;
  default:
    printf("wrong choice");

  getch();
	}
      }
    }
  }
