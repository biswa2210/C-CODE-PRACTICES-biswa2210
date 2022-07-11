#include<stdio.h>
#include<conio.h>
#define MAX 50
int queue_array[MAX];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
	int choice;
	while(1)
	{
	printf("\n1->enqueue\n2->dequeue\n3->display\n4->exit\n");
	printf("enter your choice= ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	enqueue();
				break;
		case 2:dequeue();
				break;
		case 3:display();
				break;
		case 4: exit(0);
		default:printf("vull val type koris na");
	}
	}
	getch();

}
void enqueue()
{
	int value;
	if(rear==MAX-1)
	{
		printf("overflow");
	}
	else
	{
	    if(front==-1)
	        front=0;
	        printf("enter the value to insert= ");
			scanf("%d",&value);
			rear=rear+1;
			queue_array[rear]=value;
			printf("enqueue operation successfull");

	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("underflow");
		return;
	}
	else
	{
		printf("dequeue operation successfull");
		front=front+1;

	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("queue is= ");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue_array[i]);
			printf("\t");
		}
	}
}
