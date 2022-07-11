/*
 * malloc_not_ini.c -- program displays memory allocated by malloc is not
 * initialized
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char *pc, chars, i;
 
    puts("**Program displays malloc() returns uninitialized block**");
    printf("Specify no. of characters to which memory to allocate,\n");
    scanf("%d", &chars);
 
    /* now allocate memory */
    pc = (char *)malloc(chars * sizeof(char));
 
    /* verify if allocation successful */
    if (pc == NULL) {
            puts("Error: Allocation Failed!");
            exit(EXIT_FAILURE);
    }
 
    /* let us see the contents of allocated block */
    i = 0;
    printf("Allocated block, an array of %d chars, contains values:",
            chars);
    while (i < chars) {
            printf("%2c", *(pc + i));
            i++;
    }
 
    /* Now we free allocated block back to pool of available memory */
    free(pc);
 
    puts("");
    return 0;
}
