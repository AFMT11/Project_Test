
#include "Head.h"
#define NULL (void *)(0)
Error_State Sum_values(int a, int b, int *value)
{
    if(value != NULL)
    {
        *value = a+b;
        return ERROR_OK;
    }
    else
    {
        return ERROR_NOK;
    }
}
Error_State Multiply_values(int a, int b, int *value)
{
    if(value != NULL)
    {
        *value = a*b;
        return ERROR_OK;
    }
    else
    {
        return ERROR_NOK;
    }
}
