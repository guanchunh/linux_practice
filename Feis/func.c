#include <stdio.h>

int main()
{
    void hello();
    void (*func)() = &hello;
    (*func)();
    return 0;
}

void hello()
{
    printf("Hello\n");
}