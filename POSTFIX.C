//program for postfix expressions
#include<stdio.h>
#include<conio.h>
int push(int stk[],int);
int pop(int stk[]);
int eval(int op1,int op2,char symb);
int top=-1;

void main()
{
   int i,stk[5],opnd1,opnd2,n,result;
   char exp[10],symb;
   clrscr();
   printf("Enter postfix expression\n");
   scanf("%s",&exp);

      n=strlen(exp);
      i=0;                              //      int push(int stk[],int);
					  //	  pop(int stk[])
      do                                    //      eval(int opnd1,int opnd 2,char symb)

	{

	     symb=exp[i];

	     if(isdigit(symb))
		 push(stk,symb-'0');
	     else
		{

		   opnd1=pop(stk);
		   opnd2=pop(stk);
		   result=eval(opnd1,opnd2,symb);
		   printf("\n now result is:%d",result);
		   push(stk,result);
		}
		i++;
	}while(i<n);
	result=pop(stk);
	printf("%d\n",result);
getch();
}
int push(int stk[],int sy)
{
	if(top>5)
		 printf("stk is FULL\n");
	else
	{
	 top++;
	 stk[top]=sy;
	 printf("\n stack top :%d",stk[top]);
	}
}
int pop(int stk[])
{
	int val;
	if(top==-1)
		 printf("stk is EMPTY\n");

	else
	{
	 val=stk[top];

	 top--;
	}
return val;
}
int eval(int op1,int op2,char symb)
{
	 int res;
	 switch(symb)
	{

		 case '+':
		     return res=op1+op2;
		 break;

		 case '-':
		     return res=op1-op2;
		 break;

		 case '*':
		     return res=op1*op2;
		 break;

		 case '/':
		     return res=op1/op2;
		 break;

		 case '$':
		     return res=pow(op1,op2);
		 break;
	     }
}