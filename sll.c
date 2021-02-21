#include<stdio.h>

#include<stdlib.h>

#include<malloc.h>

struct node

{

   int info;

   struct node *next;

   }*temp,*r,*s,*start;

void insert();

void delete();

void display();

void main()

    {

        int ch;

	    start=NULL;

        do

         {

            printf("\n MENU \n");

            printf("\n\t1:Insert \t2:Delete \t3:Display\t 4:Exit");

            printf("\n\t Enter your choice : ");

	    scanf("%d",&ch);

	    switch(ch)

		{

		  case 1:insert();

	       	  break;


		  case 2:delete();
		  break;



		  case 3:display();

		  break;



		  case 4: return;

		}

	  }while(ch!=4);

    }





  void insert()

         {

             int ele;

  	        temp=malloc(sizeof(struct node*));

		printf("\n Enter element to insert : ");

		scanf("%d",&temp->info);



		temp->next=NULL;



		 if(start==NULL)

		 {

		  start=temp;

		 }

		 else

		 {

		  printf("\n after which element do you want to insert : ");

                  scanf("%d",&ele);

		  r=start;

		  while(r->info!=ele)

		    {

			r=r->next;

		    }



		    s=r->next;

  		    temp->next=s;

		    r->next=temp;

                 }

            }



void display()

{

  temp=start;

  if(temp==NULL)

    {

      printf("\n list is empty");

      return;

     }

    else

     {

	printf("\n liked list :");

	do

	  {

		printf("\n \t %d ",temp->info);

		temp=temp->next;

	  }while(temp!=NULL);

      }

}



void delete()

	{

		int ele;

		printf("\n\twhich node you want to delete : ");

		scanf("%d",&ele);

		temp=start;

		 if(start==NULL)

		 {

			 printf("\nlist is empty");





		 }

		 else

		 {

			 while(temp->info!=ele)

			 {

				 temp=temp->next;

			 }

			 if(temp->next==NULL)

			 {

				 printf("\n deleted node is :%d",temp->info);

				 r=start;



				 while(r->next!=temp)

				 {

					 r=r->next;



				 }
				 r->next=NULL;

			 }

			 else if(temp==start)

             {

                 printf("\n deleted node is :%d",temp->info);

                 start=start->next;

                 temp->next=NULL;



             }

             else

             {



                 printf("\n Deleted node is : %d",temp->info);

                 r=start;

                 while(r->next!=temp)

                 {



                     r=r->next;

                 }

                 r->next=temp->next;

                 temp->next=NULL;

             }

             free(temp);

	}

}		



