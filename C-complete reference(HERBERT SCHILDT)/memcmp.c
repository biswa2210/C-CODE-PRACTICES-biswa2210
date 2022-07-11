/*memcmp()*/
#include<stdio.h>
#include<conio.h>
int main()
{
char str1[15];
char str2[16];
int  s;
memcpy(str1,"TEST",4);
memcpy(str2,"test",4);
/*here str1 is less than str2*/
s=memcmp(str1,str2,4);
if(s==0)
{
    printf("str1 and str2 are equal");
}
else if(s<0)
{
printf("str1 less than str2");
}
else if(s>0)
{
printf("str1 greater than str2");
}
getch();
}
