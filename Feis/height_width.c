#include <stdio.h>

void print(int *v, int height, int width)
{
    int i,j;
    for ( i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("%d ",*(v+i * width +j));
        }
        printf("\n");
    }
    
}
int main()
{
    int v[3][3] = {{1,2,3}, {4,5,6}, {7, 8, 9} };
    print((int *)v, 3, 3);
    return 0;
}