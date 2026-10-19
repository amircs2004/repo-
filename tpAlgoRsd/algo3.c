#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int even(int x, int y)
{
    if (x % y == 0)
    {
        return true;
    }
    return false;
}

int isPrimeSqart(int n)
{
    if (n <= 1)
    {
        return false;
    }
    int i;
    double x = floor(sqrt(n));
    for (i = 2 ; i < x; i++)
    {
        if (even(n, i))
        {
            return false;
        }
        return true;
    }
}

void returnTime()
{
    int n = 1000003;
    // here we will  // or we will add them via the cli
    clock_t start = clock();
    if (isPrimeSqart(n))
    {
        printf("That's a prime number! wait til returnTime() finsihes ..\n");
    }
    else
    {
        printf("NOT A  prime number! good luck next time ()\n");
    }

    long long i;
    // Inside a 100,000 Loop ($10^5 iterations):
    // nb iteration of isPrime * 1000000
    for (i = 0; i < 100000; i++)
    {

        isPrimeSqart(n);
    }
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_spent);
}

int main()
{
    returnTime();
    return 0;
}