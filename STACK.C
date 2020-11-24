#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top=-1,x,i;
void push();
void pop();
void display();
void main()
{
   clrscr();
   printf("Enter the size of the stack\n");
   scanf("%d",&n);
   printf("STACK OPERATION\n");
   printf("1.PUSH\n2.POP\n 3.DISPLAY \n4.EXIT\n");
   while(1)
   {
      printf("Enter a Choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:push();
	  break;
	 case 2:pop();
	     break;
	 case 3:display();
	    break;
	 case 4:exit(0);
	    break;
	default:printf("Invalid Choice\n");
      }
   }
}

   void push()
     {
       if(top==n-1)
	 {
	   printf("Stack is full\n");
	 }
       else
	 {
	   printf("Enter the value to be inserted\n");
	   scanf("%d",&x);
	   top++;
	   stack[top]=x;
	   }
      }
    void pop()
    {
      if(top<=-1)
	{
	  printf("Stack is empty\n");
	}
      else
	{
	  printf("The popped value is %d\n",stack[top]);

	  top--;

	  }
      }
   void display()
   {
      printf("The element in stack:\n");
      for(i=0;i<=top;i++)
	 {
	    printf("%d\n",stack[i]);
	    printf("\t");
	 }
   }



