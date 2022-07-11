/* C program to demonstrate
strxfrm()*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str2[30] = "Hello geeksforgeeks";
    char str1[30];
    printf("%d",strxfrm(str1, str2, 10)) ;/*first 10 characters of the string pointed to by str2 and puts the result in the  string  pointed to by  str1*/
    printf("\n\n");
    printf(str1);
    printf("\n\n");
    printf(str2);
    printf("\n\n");
    return 0;
}
