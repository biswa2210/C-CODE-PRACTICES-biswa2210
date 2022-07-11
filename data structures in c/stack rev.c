#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
	int value,choice;
	printf("***********************************************************");
	while(1)
	{
		printf("\n\n\t\t    ********MENU********");
		printf("\n\n\nPress -->> 1  -->> Push");
		Sleep(1000);
		printf("\nPress -->> 2  -->> pop");
		Sleep(1000);
		printf("\npress -->> 3  -->> Display");
		Sleep(1000);
		printf("\npress -->> 4  -->> Exit");
	    printf("\n\n\n*************************************************************");
	    printf("\n\nEnter the choice= ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1: printf("enter value to insert= ");
	    	        scanf("%d",&value);
	    	        push(value);
	    	        break;
	    	case 2: pop();
	    			break;
	    	case 3: display();
	    	  		break;
	    	case 4: exit(0);
	    	default: printf("you are goat");
		}
	}
	getch();
}
void push(int value)
{
	if(top==SIZE-1)
	printf("stack is full");
	else
	{
		top++;
		stack[top]=value;
		printf("value is pushed");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("pop is complete");
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		printf("stack is= \n");
		for(i=0;i<=top;i++)
		{
			printf("%d  ",stack[i]);
		}
	}
}
