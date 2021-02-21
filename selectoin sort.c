#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a[20],n,pos,j,temp;
    printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Unsorted list is :");
    for(i=0;i<n;i++)
    {
        printf("\n\t %d",a[i]);


    }


    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            {
                pos=j;

            }

        }
        if(i!=pos)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }

    }


    printf("\n sorted list is : ");

    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);

    }
    return 0;
}
