#include <stdio.h>

int add(int, int);

int main()
{
    int (*op)(int,int) = add;
    int result = op(3,5);
    printf("%d\n",result);

    return 0;
}

int add(int a,int b)
{
    return a+b;
}