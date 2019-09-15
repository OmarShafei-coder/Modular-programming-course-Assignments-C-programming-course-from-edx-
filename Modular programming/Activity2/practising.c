#include <stdio.h>
int factorial(int);
int main(void)
{
    
    int result = factorial(5);
    printf("%d\n",result);
}

int factorial(int n)
{
    int result;
    if(n == 0)
    {
        result = 1;
    }
    
    else
    {
        result = n * factorial(n-1);
    }

    return result;
}