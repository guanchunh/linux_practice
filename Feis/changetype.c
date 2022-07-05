#include <stdio.h>

int main()
{
    int intVar = 3 ;
    void *voidPtr = &intVar;
    int *intPtr = voidPtr;
    printf("%d\n",*intPtr);
    return 0 ;
}