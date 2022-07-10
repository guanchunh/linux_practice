#include <stdio.h>

char *func()
{
    char *p  = "hello world";
    puts(p);
    return p;
}

int main()
{
    printf("%x\n",func());
}