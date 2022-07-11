/*
 * calloc_ini.c -- program displays memory allocated by calloc is
 * initialized to 0
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *pi, ints, i;
 
    puts("**Program displays calloc() initializes memory"
         " It allocates**");
    printf("Specify no. of integers to which memory to allocate,\n");
    scanf("%d", &ints);
 
    /* now allocate memory */
    pi = (int *)calloc(ints, sizeof(int));
 
    /* verify if allocation successful */
    if (pi == NULL) {
            puts("Error: Allocation Failed!");
            exit(EXIT_FAILURE);
    }
 
    /* let us see if allocated block is initialized with zeroes */
    i = 0;
    printf("Allocated block, an array of %d ints, is initialized with:",
            ints);
    while (i < ints) {
            printf("%2d", *(pi + i));
            i++;
    }
 
    /* free block up back to pool of available memory */
    free(pi);
 
    puts("");
    return 0;
}
