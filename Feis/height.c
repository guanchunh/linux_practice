#include <stdio.h>

void print(int (*v)[3], int height)
{
    int i,j;
    for ( i = 0; i < height; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int v[2][3] = { {1,2,3},{4,5,6}};
    print(v,2);
    return 0;
}