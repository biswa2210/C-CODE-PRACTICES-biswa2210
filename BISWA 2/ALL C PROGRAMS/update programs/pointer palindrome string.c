#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
 {
  char str[100];
  char *p,*t;
  printf("Your string : ");
  gets(str);
  for(p=&str[0] ; *p!='\0' ; p++)
  {
  	//printf("%c",*p);
  }
  p--;
  for(t=&str[0];t<=p;t=t)
  {
    if(*p==*t)
    {
        p--;
        t++;
    }
    else
        break;
  }
  if(t>p)
       printf("\nPalindrome");
  else
       printf("\nNot a palindrome");
  getch();
}
