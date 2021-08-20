#include<stdio.h>
#define max 10
int queue[max],rear=-1,front=-1;
int insert();
int  deletes();
int  display();

int main()
{
	int ch;
       do
       {

	printf("\n****MAIN MENU ****");
	printf("\n 1.INSERT");
	printf("\n 2.DELETE");
	printf("\n 3.DISPLAY");
	printf("\n 4.EXIT");
	printf("\n Enter your option:  ");
	scanf("%d",&ch);
	switch(ch)
       {
	 case 1:insert();
		break;
	 case 2:deletes();
		break;
	 case 3:display();
		break;

       }
       }while(ch!=4);
       return 0;
   }
 int insert()
 {
	int item;
	if(rear==max-1)
	printf("overflow");
       else
       {
	 printf("Enter element to insert: ");
	 scanf("%d",&item);
	 if(front==-1&&rear==-1)
	 {
	  front=0;
	  rear=0;
	 }
	 else
       {
	   rear=rear+1;
	 }
	 queue[rear]=item;
       }
       return 0;
   }
    int deletes()
    {
      int val;
      if(front==-1||front>rear)
      printf("underflow");
      else
      {

	val=queue[front];
	front=front+1;

	printf(" The number get  deleted is %d ",val);

       }
       return 0;
     }
  int display()
   {
     int i;
     if(front==-1 && rear==-1)
     printf("Queue is empty");
     else
     {
       printf("****Queue****\n");
       for(i=front;i<=rear;i++)
       printf("%d\t",queue[i]);
     }
     return 0;
   }











