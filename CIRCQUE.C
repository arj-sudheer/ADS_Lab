#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int queue[N];
int position,i;

int (isEmpty())
{
 return(front==-1 && rear==-1);
}

int (isFull())
{
 return ((rear+1)%N==front);
}

void enqueue(int x)
{
 if(isFull())
 {
  printf("\nQueue is full");
  return;
 }
 if(isEmpty())
 {
  front=rear=0;
 }
 else
 {
  rear=(rear+1)%N;
 }
 queue[rear]=x;
 printf("\n%d added to the queue",x);
}

void dequeue()
{
 if(isEmpty())
 {
  printf("\nQueue is empty");
  return;
 }
 printf("\n%d removed from queue",queue[front]);
 if(front==rear)
 {
  front=rear=-1;
 }
 else
 {
  front=(front+1)%N;
 }
}

int search(int key)
{
 if(isEmpty())
 {
  printf("\nQueue is empty");
  return -1;
 }

 i=front;
 position=1;

 do
 {
  if(queue[i]==key)
  {
   printf("\n%d found at %d position",key,position);
   return i;
  }
  i=(i+1)%N;
  position++;
 }while(i!=(rear+1)%N);
 printf("\n%d not found",key);
 return -1;
}

void display()
{
 if(isEmpty())
 {
  printf("\nQueue is empty");
  return;
 }
 printf("\nCircular Queue : ");
 i=front;
 do
 {
  printf("%d\t",queue[i]);
  i=(i+1)%N;
 }while(i!=(rear+1)%N);
}

void main()
{
 int choice,x,key;
 clrscr();
 while(1)
 {
  printf("\n1.Enqueue(Add)\n2.Dequeue(Delete)\n3.Search\n4.Display\n5.Exit");
  printf("\nEnter the choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	  printf("\nEnter the element to add : ");
	  scanf("%d",&x);
	  enqueue(x);
	  break;
   case 2:
	  dequeue();
	  break;
   case 3:
	  printf("\nEnter the element to search : ");
	  scanf("%d",&key);
	  search(key);
	  break;
   case 4:
	  display();
	  break;
   case 5:
	  exit(0);
	  break;
   default:
	   printf("\nInvalid choice");
   }
  }
 }