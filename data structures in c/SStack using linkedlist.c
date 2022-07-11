#include<stdio.h>
#include<conio.h>
struct Node
{
	int data;
	struct Node *next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
	int choice,value;
		while(1)
		{
			printf("\n*****MENU(stack using linkedlist)*****\n1>>to>>push\n2>>to>>pop\n3>>to>>Display\n4>>to>>exit\n************************************************************\n\nenter your choice=  ");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:printf("\n\nenter the value to push=  ");
					   scanf("%d",&value);
					   push(value);
					   break;
				case 2:pop();
					   break;
				case 3:display();
					   break;
				case 4:exit(0);
				default:printf("\nwrong choice\n");
			}
		}
	getch();
}
void push(int value)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node*));
	newNode->data=value;
	if(top==NULL)
	{
	newNode->next=NULL;	
	}
	else
	{
	newNode->next=top;
	}
	top=newNode;
	printf("\n\nINSERTION SUCCESSFULL\n\n");
}
void pop()
{

	if(top==NULL)
	{
		printf("\nStack is empty\n\n\n");
	}
	else
	{
		struct Node *temp;
		temp=top;
		printf("\ndeleted= %d",temp->data);
		top=temp->next;
		free(temp);
		printf("\n\n<<<<<<pop is finished>>>>\n\n");
	}
}
void display()
{
	if(top==NULL)
	{
		printf("\n\nstack is empty");
	}
	else
	{
		struct Node *temp;
		temp=top;
		printf("\n\n\n\nstack=\t");
		while(temp->next != NULL)	
		{
			printf(" %d-->",temp->data);
			temp=temp->next;
		}	
		printf("%d-->NULL",temp->data);
		printf("\n\n\n");
	}
}
