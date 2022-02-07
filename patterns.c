#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    for(int i=1;i<5;i++)
    {
       for(int j=i;j>0;j--)
            printf("%d",j);

       printf("\n");
    }
    printf("\n");
    for(int i=4;i>0;i--)
    {
       for(int j=i;j>0;j--)
            printf("%d",j);

       printf("\n");
    }
    int sp=2,temp,val=1;
    for(int i=0;i<3;i++)
    {
        temp=sp;
        while(temp!=0)
        {
            printf(" ");
            temp--;
        }
        for(int j=0;j<val;j++)
            printf("X");
        printf("\n");
        sp--;
        val+=2;

    }
    printf("\n");
    int c=97;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
            printf("%c",c);
        printf("\n");
        c++;
    }
        for(int i=0;i<4;i++)
    {
        for(int j=97;j<=i+97;j++)
            printf("%c",j);
        printf("\n");
    }
    return 0;
}
