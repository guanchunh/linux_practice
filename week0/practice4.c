#include <stdint.h>
#include <stdio.h>
uint32_t func(uint32_t x)
{
    uint32_t n = x;
    n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
    n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n = ((n & 0xaaaaaaaa) >> 1 ) | ((n& 0x55555555) << 1);
    return n;
}
int32_t abs(int32_t x)
{
    int32_t mask = (x >> 31);
    return (x+mask)^mask;
}
int main()
{
    printf("%d",abs(-2147483648));
    return 0 ;
}