//WAP to Check Even or Odd

#include <stdio.h>
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    /* True if the number is perfectly 
      divisible by 2.*/
    if(n % 2 == 0)
        printf("%d is even.",n);
    else
        printf("%d is odd.",n);


}


