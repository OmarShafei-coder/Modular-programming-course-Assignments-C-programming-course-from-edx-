#include <stdio.h>

int min(int,int);

int main(void)
{
    int numOfIntegers;
    int loopCounter;
    int interger[100];
    int minimum = 1000000;

    scanf("%d",&numOfIntegers);

    for(loopCounter = 0; loopCounter < numOfIntegers; loopCounter++)
    {
        scanf("%d",&interger[loopCounter]);
        minimum = min( interger[loopCounter], minimum);
    }

    printf("%d\n",minimum);

    return 0;
}

int min(int firstNum, int secondNum)
{
    int minimum = firstNum;

    if(secondNum < firstNum) 
    {
        minimum = secondNum;
    }
    else;

    return minimum;
}