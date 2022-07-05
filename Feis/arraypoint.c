#include <stdio.h>

void print(int (*q)[3])
{
    int i;
    for ( i = 0; i < sizeof(*q)/sizeof((*q)[0]) ; i++)
    {
        printf("%d",(*q)[i]);
    }

    printf("\n");
}

int main ()
{
    int v[3] = {1,2,3};
    print(&v);
}