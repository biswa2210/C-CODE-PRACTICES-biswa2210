#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void autopolymorphicno();//declaration part
void main()
{
system("mode 1000");
system("color a");
autopolymorphicno();//calling part
getch();
}
void autopolymorphicno()//definition
{
int a;
printf("Enter the no= ");
scanf("%d",&a);
if((a*a)%10==a)
printf("this is autopolymorphic no");
else if((a*a)%10!=a)
printf("this is not a autopolymorphic no");
else
printf("not applicable");
}
