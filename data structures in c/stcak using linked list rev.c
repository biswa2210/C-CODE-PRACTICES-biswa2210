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
	int value,choice;
	while(1)
	{
printf("\n***************MENU******************\n\n\n")	;
printf("1 to push\n2 to pop\n3 to display\n4 to exit\n\n****************************************************\n\n");
printf("\nenter your choice = ");
scanf("%d",&choice);
switch(choice)
{
	case 1: printf("\nenter the value to insert= ");
			scanf("%d",&value);
			push(value);
			break;
	case 2:pop();
			break;
	case 3:display();
			break;
	case 4:exit(0);
	default:printf("wrong choice>>>>>>");
}
}
getch();
}
void push(int value)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
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
	printf("\ninsertion successfull\n");
}
void pop()
{
	if(top==NULL)
	{
		printf("\nstack is empty\n");
	}
	else
	{
		struct Node *temp;
		temp=top;
		printf("\ndeleted elment= %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("\nstack is empty");
	}
	else
	{
	struct Node *temp;
	temp=top;
	printf("\nstack is =");
	while(temp->next != NULL)
	{
	printf("%d----->",temp->data);
	temp=temp->next;
   }
	printf("%d---->NULL",temp->data);
	}
}
