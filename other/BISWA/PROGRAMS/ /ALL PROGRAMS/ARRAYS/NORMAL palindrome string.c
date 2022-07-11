//only first name and space and last name
#include <stdio.h>

#include <string.h>



void main()

{

    char string[25], reverse_string[25] = {'\0'};

    int i, length = 0,q, flag = 0;



    printf("Enter a string(first,space and last name)  \n");

    gets(string);

    /*  keep going through each character of the string till its end */

    for (i = 0; string[i] != '\0'; i++)

    {

        length++;

    }
q=strlen(string);
    printf("The length of the string'%s' = %d\n", string,q-1);

    for (i = length - 1; i >= 0 ; i--)

    {

        reverse_string[length - i - 1] = string[i];

    }

   /*  Check if the string is a Palindrome */



    for (flag = 1, i = 0; i < length ; i++)

    {

        if (reverse_string[i] != string[i])

            flag = 0;

    }

    if (flag == 1)

       printf ("%s is a palindrome  string\n", string);

    else

       printf("%s is not a palindrome string \n", string);
       getch();

}
