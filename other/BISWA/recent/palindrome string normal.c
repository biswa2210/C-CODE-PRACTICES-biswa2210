#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len, palindrome = 1;
    char str[80];
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i=0, j=len-1; i<j; i++, j--)
	{
        if(str[i] != str[j])
		{
            palindrome = 0;
            break;
        }
    }
    if(palindrome==0)
        printf("%s is not a palindrome!\n",str);
    else
        printf("%s is a palindrome!\n",str);
    return 0;
}


