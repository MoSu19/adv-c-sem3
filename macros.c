#include<stdio.h>

#define mean(a,b) (a+b)/2
#define absol(a) (a>=0)?a:-a
#define lower(a) tolower(a)
#define big(a,b) (a>b)?a:b

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    printf("\nMean: %d",mean(2,4));
    printf("\nAbsolute: %d",absol(-2));
    printf("\nLowercase: %c",lower('A'));
    printf("\nGreater: %d",big(2,4));

    return 0;
}
