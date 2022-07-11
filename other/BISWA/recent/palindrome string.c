// C Program to check given string is palindrome or not
#include<conio.h>
#include <stdio.h>
#include <string.h>
#include<math.h>
void main()
{
   char a[10000],r[10000];
 
   printf("Enter the string=\n");
   gets(a);
   /* Copy input string and reverse it*/
   strcpy(r, a);
   /* reverse string */
   strrev(r);
   /* Compare reversed string with inpit string */
   if(strcmp(a, r) == 0 )
      printf("%s is a palindrome string.\n", a);
   else
      printf("%s is not a palindrome string.\n", a);
       
   getch();

}
