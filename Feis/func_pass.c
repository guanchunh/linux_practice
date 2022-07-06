#include <stdio.h>

int calculate(int (*)(int, int));
int add (int, int);
int multiply(int,int);

int main()
{
    printf("%d\n",calculate(add));
    printf("%d\n",calculate(multiply));
    return 0;
}

int calculate(int (*op)(int,int))
{
    int result = 1;
    for (int i=2; i <= 5 ; i++)
    {
        result = op(result,i);
    }
}

int add(int a,int b)
{
    return a + b;
}

int multiply(int a,int b)
{
    return a * b;
}