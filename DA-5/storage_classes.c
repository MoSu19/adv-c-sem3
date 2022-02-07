#include<stdio.h>

int i=1;

int func()
{
    static int i = 10;
    return i++;
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    for(auto int i=0;i<5;printf("\nAuto i: %d\n\n",i),i++)
    {
        register int i = 20;
        {
            extern int i;
            printf("\nExtern i: %d",i);
        }
        printf("\nStatic i: %d",func());
        printf("\nRegister i: %d",i);
    }
    return 0;
}
