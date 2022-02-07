#include<stdio.h>

//#define val 7

#ifndef val
#error val not defined
#endif

#if val > 10
#define cost 30
#elif val < 5
#define cost 10
#else
#define cost 20
#endif

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    printf("\nVal: %d\tCost: %d",val,cost);
    return 0;
}
