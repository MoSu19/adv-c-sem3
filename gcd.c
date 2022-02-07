#include <stdio.h>

int main()
{
    int a,i,b,gcd=1,flag=0;
    scanf("%d%d",&a,&b);
    if(a<b)
        i = a;
    else
        i = b;
    for(i;i>0;i--)
    {
        if(a%i==0 && b%i==0 && flag==0)
        {
            gcd = i;
            flag=1;
        }
    }
    printf("%d",gcd);
    return 0;
}
