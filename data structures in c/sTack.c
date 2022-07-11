   #include<stdio.h>
#include<conio.h>
#include<windows.h>
#define SIZE 10
void push(int);//FUNC. DECLARATION
void pop();
void display();
int stack[SIZE], top = -1;
void main()
{

   int value, choice;
   while(1){

      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
       {
        case 1: printf("Enter the value to be insert: ");
                scanf("%d",&value);
                push(value);//CALLING
                break;
	 case 2: pop();//CALLING
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
   getch();
}
void push(int value)//FUNC. DEFINITION
{
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;

      stack[top] = value;//INSERT
      printf("\nInsertion success!!!");
   }
}
void pop()
{
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
  }
}
void display()
{
    int i;
    if (top == - 1)
        printf("\n\n\nStack is empty \n");
    else
    {
        printf("\n\nStack is : \n\t\t");
         printf("\t\t*----*\n");
        for (i = 0; i <= top; i++)
        {
                        if(i==top)
            {
printf("\t\t\t\t| %d  |\n", stack[i]);
            }
            else
            printf("\t\t\t\t| %d  |\n\t\t\t\t|    |\n\t\t\t\t*----*\n", stack[i]);

        }

    }
}
