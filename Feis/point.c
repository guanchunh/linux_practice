#include <stdio.h>
#include <string.h>

int main()
{
    char source[5] = "test";
    char *destination;

    destination = source;

    printf("%s\n",destination);

    return 0;
}