#include <stdio.h>

int main()
{
    int v[3] = {1,2,3};
    printf("%zu\n",sizeof(v));
    printf("%zu\n",sizeof(v[0]));
    printf("%zu\n",sizeof(&v[0]));
    printf("%zu\n",sizeof(&v));

    return 0;
}