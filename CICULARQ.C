#include<stdio.h>
#include<conio.h>
#define size 10

   int cq[size];
   void insert();
   void deletion();
   void display();
   int front,rear;
   void main()
   {
      int ch;
      front=rear=-1;
      clrscr();
   do
    {
      printf("1.Insert\n");
      printf("2.Deletion\n");
      printf("3.Display\n");
      printf("4.Exit\n");
      printf("Enter your Choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
      case 1:insert();
      break;
      case 2:deletion();
      break;
      case 3:display();
      break;
      case 4:exit(0);
      default:
      printf("Wrong Choice\n");
     }
    }
    while(ch!=4);
 getch();
}
  void insert()
  {
    int no;
    if(front==(rear+1)%size)
    {
      printf("Queue is Full\n");
    }
    else
    {
      if(rear==-1)
	{
	  rear=front=0;
	}
	else
	{
	  rear=(rear+1)%size;
	}
       printf("Enter element to be inserted\n");
       scanf("%d",&no);
       cq[rear]=no;
       printf("Element inserted\n");
     }
    }
 void deletion()
 {
   if(front==-1)
     {
       printf("Circular Queue is empty\n");
      }
    else
    {
      printf("The deleted element is %d\n",cq[front]);
      if(front==rear)
	{
	 front=rear=-1;
	}
      else
      {
	 front=(front+1)%size;
      }
   }
}
void display()
{
   int i;
   if(front==-1)
     {
	 printf("Circular Queue is Empty\n");
       }
    else
    {
       printf("Elements in circular queue is \n");
       if(front<=rear)
       {
	 for(i=front;i<=rear;i++)
	    {
		printf("%d",cq[i]);
		printf("\t\n");
	       }
	 }
	else
	{
	 for(i=front;i<=size;i++)
	 printf("%d\n",cq[i]);
	 for(i=0;i<=rear;i++)
	 printf("%d\n",cq[i]);
       }
    }
 }




