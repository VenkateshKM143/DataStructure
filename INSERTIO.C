#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
  int a[max],i,j,k,n;
  clrscr();
  printf("Enter the no.of elms\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n Enter elm");
    scanf("%d",&a[i]);
  }
  printf("Unsorted list is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
    printf("\n");
  }
  /*Insertion sort*/
  for(j=0;j<n;j++)
  {
    /*k is to be inserted at proper place*/
    k=a[j];
    for(i=j-1;i>=0 && k<a[i];i--)
      a[i+1]=a[i];
      a[i+1]=k;
      printf("\npass %d,Element inserted in proper place,%d\n",j,k);
      for(i=0;i<n;i++)
      printf("%d\n",a[i]);
      printf("\n");
  }
    printf("\nSorted list is");
    for(i=0;i<n;i++);
    printf("\n%d",a[i]);
  getch();
 }