#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NULL 0
void addbegining();
void addmiddle();
void addend();
void deletebegining();
void deletemiddle();
void deleteend();
void display();
int count=0;
struct node
{
    int data;
    struct node *link;

}
*start=NULL;

void main()
{
  int opt;
  clrscr();
  do
    {
      printf("1.Insert Begining\n2.Insert Middle\n3.Insert End\n");
      printf("4.Delete Begining\n5.Delete Middle\n6.Delete End\n7.Display\n");
      scanf("%d",&opt);

      switch(opt)
      {
      case 1:addbegining();break;
      case 2:addmiddle();break;
      case 3:addend();break;
      case 4:deletebegining();break;
      case 5:deletemiddle();break;
      case 6:deleteend();break;
      case 7:display();break;
      case 8:exit(0);break;
      default:printf("Invalid Option\n");
     }
   }
   while(opt!=8);
   getch();
}
void addbegining()
{
  int no;
  struct node *temp;
  temp=(struct node*)malloc(sizeof (struct node));
  printf("Enter the Number\n");
  scanf("%d",&no);
  temp->data=no;
  if(count==0)
  {
    temp->link=NULL;
  }
  else
  {
    temp->link=start;
  }
  start=temp;
  count++;
}
void addmiddle()
{
 int no,loc,i,flag;
 struct node *ptr;
 struct node *temp;
 temp=(struct node*)malloc(sizeof (struct node));
 printf("Enter the number\n");
 scanf("%d",&no);
 printf("Enter the position to insert\n");
 scanf("%d",&loc);
 ptr=start;
 for(i=0;i<loc;i++)
     {
	ptr=ptr->link;
	if(ptr==NULL)
	   {
	       flag=1;
	     }
      }
    if(flag==1)
      {
	 printf("Cannot Insert\n");
       }
     else
       {
	 temp->link=ptr->link;
	 ptr->link=temp;
       }
}
void addend()
{  int no;
   struct node *temp;
   temp=(struct node*)malloc(sizeof (struct node));
   printf("Enter a number\n");
   scanf("%d",&no);
   temp->data=no;
   temp->link=NULL;
   if(count==0)
     {
       start=temp;
     }
   else
     {
       struct node *t;
       t=start;
       while(t->link!=NULL)
	   {
	      t=t->link;
	    }
	  t->link=temp;
       }
     count++;
}
void deletebegining()
{
   struct node *t;
   if((count==0)|(start==NULL))
      {
	 printf("No node to Delete\n");
       }
     else
	{
	   if(count==1)
	      {
		t=start;
		start=NULL;
		printf("Deleted element is: %d\n",t->data);
		free(t);
		count--;
	       }
	     else
	       {
		 t=start;
		 start=start->link;
		 printf("Deleted element is:%d\n",t->data);
		 free(t);
		 count--;
		 }
	      }
}
void deleteend()
{
  struct node *t;
  struct node *temp;
  if(start==NULL)
    {
      printf("No node to delete\n");
    }
   else
   {
     t=NULL;
     temp=start;
     while(temp->link!=NULL)
	 {
	     t=temp;
	     temp=temp->link;
	   }
       printf("The deleted element is:%d\n",temp->data);
       free(temp);
       t->link=NULL;
       count--;
      }
}
void deletemiddle()
{
    int loc,i,flag;
    struct node *ptr1,*ptr;
    printf("Enter the position to delete\n");
    scanf("%d",&loc);
    ptr=start;
    for(i=0;i<loc;i++)
       {
	 ptr1=ptr;
	 ptr=ptr->link;
	 if(ptr==NULL)
	   {
	     flag=1;
	   }
	 }
	 if(flag==1)
	   {
	     printf("Cannot delete\n");
	    }
	  else
	  {
	    ptr1->link=ptr->link;
	    printf("The deleted element is:%d\n",ptr->data);
	    free(ptr);
	  }
}
void display()
{
   struct node *ptr;
   for(ptr=start;ptr!=NULL;ptr=ptr->link)
      {
	 printf("%d",ptr->data);
	 printf("\t\n");
       }
}


