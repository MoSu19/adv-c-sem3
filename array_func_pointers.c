#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}


int prod(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

void main()
{
    int (*ptr[4])(int,int);
    ptr[0]=sum;
    printf("%d",ptr[0](2,3));
}
