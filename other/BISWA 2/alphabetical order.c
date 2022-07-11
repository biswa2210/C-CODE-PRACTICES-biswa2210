#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
   char ch, i[1000], o[1000];
   int no[260] = {0}, n, c, t=0, x;
   printf("Enter some text\n");
   gets(i);
   n = strlen(i);
   /* Store how many times characters (a to z) 
     in input string in array */
 
   for (c = 0; c < n; c++)
   {
      ch = i[c] - 'a';
      no[ch]++;
   }
 
   /* Insert characters a to z in output string 
       that many number of times as they  
       in input string */
 
   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         o[t] = ch;
         t++;
      }
   }
   o[t] = '\0';
 
   printf("%s\n", o);
 

getch();
}

