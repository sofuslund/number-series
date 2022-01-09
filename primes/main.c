#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
    unsigned long long n = 2;
    while(n < ULLONG_MAX)
    {
        bool isPrime = true;
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
            }
        }

        if(isPrime)
        {
            printf("%llu\n", n);
        }
        n++;
    }
}
