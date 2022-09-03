#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
typedef enum
{
    ERROR_OK,
    ERROR_NOK
}Error_State;
Error_State Sum_values(int a, int b, int * value);
Error_State Multiply_values(int a, int b, int * value);
#endif // HEAD_H_INCLUDED
