#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
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
printf("1 to push\n2 to pop\n3 to display\n4 to exit\n\n****************************************************\n\nenter your choice =");
scanf("%d",&choice);
switch(choice)
{
	case 1:printf("\nenter the value to push= ");
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
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(top==NULL)
	{
	newnode->next=NULL;
	}
	else
	{
	 newnode->next=top;
	top=newnode;
	printf("\ninsertion successfull\n");
	}
}
void pop()
{

	if(top==NULL)
	{
		printf("\nstack is empty\n");
	}
	else
	{
		struct node *temp=top;
		top=temp->next;
		free(temp);
		printf("\n deletion complete");
	}
}
void display()
{

	if(top==NULL)
	{
		printf("\nstack is empty\n");
	}
	else
	{
		printf("\nstack is= ");
		struct node *temp=top;
		while(temp->next!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d--->NULL",temp->data);
	}
}

