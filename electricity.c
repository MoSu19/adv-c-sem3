#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    int u,b;
    scanf("%d",&u);
    if(u>500)
        b = 1200+600+800+(u-500)*10;
    else if(u<=500 && u>400)
        b = 1200+600+(u-400)*8;
    else if(u<=400 && u>300)
        b = 1200+(u-300)*6;
    else
        b = u*4;
    printf("%d",b);
    return 0;
}
