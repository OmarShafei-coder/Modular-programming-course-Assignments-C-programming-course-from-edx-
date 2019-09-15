/*
A delivery company has hired you to manage their tracking services division. 
It is your job to store all of the currently used tracking codes in the company's database. 
These codes consist of either all integers, all decimal numbers, or all characters. 
The chief technology officer has warned you that the database is old and has limited space, 
so you want to determine how much memory the tracking codes will occupy before storing them. 
You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. 
Next, for each successive tracking code your program should read in the integer length of code followed by a space 
and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). 
Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). 
If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' 
and exit.
*/
#include <stdio.h>

void main(void)
{
    unsigned char numOfCodes;
    unsigned char counter;
    unsigned char numOfVariables[100];
    char dataType[100];
    int sumOfIntegers = 0;
    int sumOfChars = 0;
    int sumOfDecimals = 0;
    int totalSpaceRequired;
    
    int flag = 0;
    scanf("%u",&numOfCodes);

    for(counter = 0; counter < numOfCodes; counter++)
    {
        scanf( "%u %c",&numOfVariables[counter], &dataType[counter] );
    }

    for(counter = 0; counter < numOfCodes; counter++)
    {
        if(dataType[counter] == 'c')
        {
            sumOfChars = numOfVariables[counter];
        }

        else if(dataType[counter] == 'i')
        {
            sumOfIntegers = numOfVariables[counter] * 4;
        }
        
        else if(dataType[counter] == 'd')
        {
            sumOfDecimals = numOfVariables[counter] * 8;
        }

        else
        {
            printf("Invalid tracking code type\n");
            flag = 1;
            break;
        }
    }

    totalSpaceRequired = sumOfChars + sumOfDecimals + sumOfIntegers;
    
    if(flag == 0)
    {
        printf("%u bytes\n",totalSpaceRequired);
    }
    else;
}