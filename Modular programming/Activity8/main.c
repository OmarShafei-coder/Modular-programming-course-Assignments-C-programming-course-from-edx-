/*
Within this program, we will pass an array with 6 integers to a function, have the function swap the first 
and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, 
representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. 
The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

Examples
Input:
1 2 3 4 5 6
Output:
6 5 4 3 2 1
*/

#include <stdio.h>

void reverseArray(int * ptr);
void swap(int*, int*);
int main()
{
    int arr[6];
    int counter;

    for(counter = 0; counter < 6; counter++)
    {
        scanf("%d",&arr[counter]);
    }

    reverseArray(arr);
    
    for(counter = 0; counter < 6; counter++)
    {
        printf("%d ",arr[counter]);
    }

    printf("\n");

    return 0;
}

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void reverseArray(int * ptr)
{
    int i;
    int j;

    for(i = 0, j = 5; i < 3; i++, j--)
    {
        swap(&ptr[i],&ptr[j]);
    }
}