#include <stdio.h>
#include <stdlib.h>
#define max 30
 int main()
 {
     int arr[max],i,j,k,temp,n;
     printf("\n\t Enter the number of element : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("\n Enter element %d : ",i+1);
         scanf("%d",&arr[i]);
     }
     printf("\n\t Unsorted list is\n :");
     for(i=0;i<n;i++)
     {
         printf("\t%d",arr[i]);

     }

   /*bubble sort */
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-1-i;j++)
       {
           if(arr[j]>arr[j+1])
           {

               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }

       }
       printf("\t\n After pass %d elements are : \n",i+1);
       for(k=0;k<n;k++)
       {
           printf("\t%d",arr[k]);
           printf("\t");

       }
   }
   printf("\n\t Sorted list is : \n");
   for(i=0;i<n;i++)
    printf("\t %d",arr[i]);
   return 0;
 }
