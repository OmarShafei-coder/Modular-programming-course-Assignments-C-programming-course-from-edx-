#include <stdio.h>
int fibonacci(unsigned int);
void main(void)
{
    unsigned int number, result;
    printf("Enter an positive value : \t");
    scanf("%u",&number);
    result = fibonacci(number);
    printf("%u\n",result);
} 

int fibonacci(unsigned int number)
{
    int result;

    if(number == 1)
    {
        result = 0;
    }
    
    else if(number == 2)
    {
        result = 1;
    }

    else
    {
        result = fibonacci(number-1) + fibonacci(number-2);
    }

    return result;
    
}