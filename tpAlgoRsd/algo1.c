#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

// algo lowal is naive approache

int isPremier(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        int i;
        for (i = 2; i < n - 1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void returnTime()
{
       int n = 1000003;
       // here we will  // or we will add them via the cli
    clock_t start = clock();
    if (isPremier(n))
    {
        printf("That's a prime number! wait til returnTime() finsihes ...\n");
    }
    long long i;
    //Inside a 100,000 Loop ($10^5 iterations):
    //nb iteration of isPrime * 1000000 
    for (i = 0; i < 100000; i++)
    {
      
        isPremier(n);
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