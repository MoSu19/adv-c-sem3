#include<stdio.h>

int func(int(*p)(int,int))
{
    int x=(*p)(2,4);
    return x;
}

int sum(int a,int b)
{
    return a+b;
}
int prod(int a,int b)
{
    return a*b;
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    printf("\n%d",func(sum));
    printf("\n%d",func(prod));

    return 0;
}
