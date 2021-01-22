#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;
void main()
{
  int ch=0;
  clrscr();
  do
  {
    printf("Linked Stack Operations\n");
    printf("\n1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      { push(); break; }
      case 2:
      { pop(); break; }
      case 3:
      { display(); break; }
      case 4:
      { exit(0); }
      default:
      {
	 printf("Invalid choice\n");
	 break;
      }
    }
   }
    while(ch!=4);
}
 void push()
 {
   int item;
   struct node *ptr;
   ptr=(struct node*)malloc(sizeof(struct node));
   if(ptr==NULL)
     {
       printf("Overflow condition\n");
     }
  else
    {
      printf("Enter value\n");
      scanf("%d",&item);
      if(head==NULL)
	 {
	   ptr->data=item;
	   ptr->next=NULL;
	   head=ptr;
	 }
      else
      {
	ptr->data=item;
	ptr->next=head;
	head=ptr;
      }
      printf("Item is pushed\n");
  }
}
 void pop()
 {
   struct node *ptr;
   if(head==NULL)
     {
	printf("Underflow condition\n");
     }
   else
   {
     ptr=head;
     head=ptr->next;
     free(ptr);
     printf("Item is poped\n");
   }
}
void display()
{
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
    {
      printf("Empty stack\n");
    }
  else
  {
    printf("Elements are\n");
    while(ptr!=NULL)
       {
	  printf("%d\n",ptr->data);
	  ptr=ptr->next;
	}
} }