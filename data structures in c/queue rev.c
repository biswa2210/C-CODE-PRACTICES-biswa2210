#include<stdio.h>
#include<conio.h>
#define MAX 5
void enqueue(int);
void dequeue();
void display();
int queue_array[MAX],rear=-1,front=-1;
void main()
{
	int choice;
	int value;
	while(1)
	{
	printf("\n1 to enqueue\n2 to dequeue\n3 to display\n4 to exit...\n");
	printf("***************************************************************\n\n");
	printf("enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	printf("enter the numerical  value to insert= ");
				scanf("%d",&value);
				enqueue(value);
				break;
		case 2:dequeue();
				break;
		case 3:display();
				break;
		case 4:exit(0);
				break;
		default:printf("your choice is wrong...... sorry please try again ");
	}
	
}
getch();
}
void enqueue(int value)
{
	if(rear==MAX-1)
	{
		printf("queue is overflow");
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		queue_array[rear]=value;
		printf("insertion successfull");
		
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("queue is underflow");
	}
	else
	{
		printf("deletion successfull");
		front++;
	}
}
void display()
{
	int i;
	if(front==-1 || front>rear)
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
