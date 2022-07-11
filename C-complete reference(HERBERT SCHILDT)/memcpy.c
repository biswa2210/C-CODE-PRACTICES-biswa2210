#include<stdio.h>
#include<conio.h>
#define SIZE 80
int main(void)
{
char buf1[SIZE],buf2[SIZE];
strcpy(buf1,"fuck off");
memcpy(buf2,buf1,SIZE);
printf(buf2);
}
