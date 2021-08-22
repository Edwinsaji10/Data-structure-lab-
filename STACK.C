#include<stdio.h>
#define max 4
int stack[max],top=-1;
int push();
int pop();
int peek();
int display();

int main()
	{
	   int ch;
	   clrscr();
	   do
	   {
	   printf("\n****MAIN MENU****");
	   printf("\n 1.push");
	   printf("\n 2.pop");
	   printf("\n 3.peek");
	   printf("\n 4.Display");
	   printf("\n 5.EXIT");
	   printf("\nEnter your option ");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	    case 1:push();
		   break;
	    case 2:pop();
		   break;
	    case 3:peek();
		   break;
	    case 4:display();
		   break;
	   }
	  }while(ch!=5);
       return 0;
   }

    int push()
    {
     int item;
      if(top==max-1)
      printf("overflow");
      else
      {
       printf("enter the elment to push");
       scanf("%d",&item);
       top+=1;
       stack[top]=item;
       }
      return 0;
    }
     int pop()
    {
      int val;
      if(top==-1)
      printf("Stack Empty");
      else
      {
      val=stack[top];
      top-=1;
      printf("the poped item is %d",val);
      }
     return 0;
    }
     int peek()
     {
      if(top==-1)
      printf("Stack empty");
      else
      printf("The topmost element is %d",stack[top]);
      return 0;
     }
     int display()
     {
      int i;
      if(top==-1)
      printf("Stack empty ");
      else
      {
      printf("***Stack***\n");
      for(i=0;i<=top;i++)
      printf("%d\t",stack[i]);
      }
      return 0;
      }