#include<stdio.h>
#include<conio.h>
void main()
{
	int n,y,a[30],mean,median,maxcount,maxvalue,count,i,j;

	clrscr();
	printf("enter no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter your choice:1.mean,2.median,3.mode");
	scanf("%d",&y);
	switch(y)
	{
		case 1:
			mean=0;
			for(i=0;i<n;i++)
				mean=mean+a[i];
				mean=(mean/n);
				printf("%d",mean);
				break;
		case 2:
			median=0;
			if(n%2==0)
				median=(a[n/2]+a[(n/2)-1])/2;
			else
				median=a[n/2];
			printf("%d",median);
			break;
		case 3:

			printf("mode=%d",mode(a,n));

				break;
	}

	getch();
}
int mode(int a[],int n)
{
	int maxvalue,maxcount,i,j,count;
	maxcount=0;
	maxvalue=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==a[i]);
			count++;
		}
			if(count>maxcount)
			{
				maxcount=count;
				maxvalue=a[i];
			}
	}
			      /*	if(maxcount==1)
					printf("no mode present");
				else

					printf("mode is %d and it appear %d times",maxvalue,maxcount); */

	return maxvalue;
}
