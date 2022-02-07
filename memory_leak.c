#include<stdio.h>

int main()
{
    int *ptr=malloc(10);
    int *p=malloc(10);

    ptr=p;

    printf("\n%u\t%u",ptr,p);

    free(p);
    free(ptr);

    return 0;
}
