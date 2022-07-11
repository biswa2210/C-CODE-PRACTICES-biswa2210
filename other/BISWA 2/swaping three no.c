// C++ program to swap three no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
printf("a=");
scanf("b=");
printf("a=");
scanf("b=");
printf("a=");
scanf("b=");
    // Store sum of all in a
    a = a + b + c;  // (a = 60)
 
    // After this, b has value of a
    b = a - (b+c);  // (b = 60 – (20+30) =10)
 
    // After this, c has value of b
    c = a - (b+c);  // (c = 60 – (10 + 30) = 20)
 
    // After this, a has value of c
    a = a - (b+c);   //(a = 60 – (10 + 20) = 30)
    printf("a=%d\nb=%d\nc=%d",a,b,c);
    getch;
}
    
