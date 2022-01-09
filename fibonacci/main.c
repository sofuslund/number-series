#include <stdio.h>

int main()
{
    unsigned long long x = 1;
    unsigned long long y = 1;
    unsigned long long z = 2;

    // prevent overflow
    while(y >= x)
    {
        printf("%llu\n", x);
        x = y;
        y = z;
        z = x + y;
    }
}
