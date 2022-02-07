#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    int a,b=0,fin=0,rem,k=1;
    scanf("%d",&a);
    while(a!=0)
    {
        b = b+(a%2)*k;
        a=a/2;
        k=k*10;
    }
    printf("%d",b);
}
