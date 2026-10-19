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

int IsPrimeOdd (int n ) {
     if (n <= 1)
    {
        return false;
    }
        if (n == 2)  return true;
    if (even( n , 2))  return false ;
    double x = floor(sqrt(n));
    int i ;
        for (i = 3 ; i < x; i+=2)
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
    
    clock_t start = clock();
    if (IsPrimeOdd(n))
    {
        printf("That's a prime number!\n");
    }
    else
    {
        printf("NOT A prime number!\n");
    }

    long long i;
    for (i = 3; i < 1000000; i++)
    {
        IsPrimeOdd(n);
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