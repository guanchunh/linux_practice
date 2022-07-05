#include <stdio.h>

int main()
{
    int* numbers;
    int length = 0;

    int larger1[1] = {1};
    numbers = larger1;
    length++;

    for(int i = 0; i < length; i++)
    {
        printf("%d",numbers[i]);
    }

    printf("\n");

    int larger2[2] = {2,3};
    numbers = larger2;
    length++;

    for(int i = 0; i < length; i++)
    {
        printf("%d",numbers[i]);
    }

    printf("\n");


}