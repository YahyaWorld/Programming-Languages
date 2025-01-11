#include <stdio.h>
#include "sum_function.h"

int main()
{
    printf("sum of 8 and 9 is %d\n", sum(8, 9));
    return 0;
}

//run both included sources_file and this(main.c) file together 
//gcc main.c sum_function.c -o output