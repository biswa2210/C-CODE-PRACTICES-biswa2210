 /* C programe for counting the number of characters and words in a given string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int count_words=0,i,c=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   c++;
   if(str[i]==' ')
      count_words++;
 }
 printf("\nNumber of characters in string : %d",c);
 printf("\nNumber of words in string : % d",c+1);
 getch();
 
}
