/*
Please write a C-program that uses a function called "sumOfDigits()" to compute the sum of the digits of a number. 

Ex :
sum of 123 = 1+2+3 = 6
sum of 537 = 5+3+7 = 15
*/

#include <stdio.h>
int sumOfDigits(int);
void main(void)
{
    int number;
    int result;

    scanf("%d",&number);

    result = sumOfDigits(number);

    printf("%d\n",result);
}

int sumOfDigits(int n)
{
    int result = 0;
    
    while(n > 0)
    {
        result = result + (n % 10);
        n = n / 10;
    }

    return result;
}