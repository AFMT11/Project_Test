#include <stdio.h>
#include <stdlib.h>

#include "Head.h"

int main()
{
    int x = 10;
    int y = 20;
    int Summation = 0;
    int multiplication = 0;
    int *p = NULL;
    if(Sum_values(x, y, p) == ERROR_OK)
    {
        printf("sum of %d & %d = %d\n", x, y, Summation);
    }
    else
    {
        printf("Invalid Address\n");
    }
    if(Multiply_values(x, y, &multiplication) == ERROR_OK)
    {
        printf("multiply of %d & %d = %d\n", x, y, multiplication);
    }
    else
    {
        printf("Invalid Address\n");
    }
    return 0;
}
