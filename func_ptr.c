#include<stdio.h>


void func(int a)
{
    printf("\n%d",a);
}

void main()
{
    void (*ptr)(int) = func;
    ptr(5);
}
