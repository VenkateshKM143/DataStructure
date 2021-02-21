#include<stdio.h>
#include<conio.h>
int main()
{
   int i, first, last, middle, n, search, a[100];
   clrscr();
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);
   for (i=0; i<n; i++)
      {
	scanf("%d",&a[i]);
      }
   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first<=last)
   {
      if (a[middle] < search)
	 first= middle+1;
      else if (a[middle] == search)
      {
	 printf("%d found at location %d.\n", search, middle+1);
	 break;
      }
      else
	 last = middle-1;

      middle = (first+last)/2;
   }
   if (first>last)
      printf("Not found! %d is not present in the list.\n", search);

getch();
}