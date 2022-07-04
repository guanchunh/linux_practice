#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayPrint(int[10]);
int main()
{
    srand(time(0));
    int v[10], i;
    for ( i = 0; i < 10; i++)
    {
        v[i] = rand()%100;
    }
    arrayPrint(v);
    int max = v[0];
    for( i = 1; i < 10; i++)
    {
        if( v[i] > max )
        {
            max = v[i];
        }
    }
    printf("Max:%d\n",max);
    return 0;
}

void arrayPrint(int v[10])
{
    int i;
    for( i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}