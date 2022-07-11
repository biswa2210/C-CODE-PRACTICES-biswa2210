//wap to vowel constant count;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,c=0,v=0;
char a[100000];
Sleep(2000);
printf("PLEASE ENTER A SMALL PARAGRAPH= ");
gets(a);
Sleep(2000);
printf("loading.....\n");
Sleep(3000);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]!=' ')
	{
	
        if ((a[i] == 'a' || a[i] == 'e' || a[i] =='i' || a[i] == 'o' || a[i] == 'u') ||(a[i] == 'A' || a[i] == 'E' || a[i] =='I' || a[i] == 'O' || a[i] == 'U'))
	{
		v++;
	}

	else
c++;
}
}
printf("\t\tprint the no of vowels=%d\n",v);
printf("\t\tprint the no of consonant=%d\n",c);
getch();
}
