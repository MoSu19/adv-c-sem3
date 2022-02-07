#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    int a,b;
    scanf("%d",&a);
    printf("\n1.arm\n2.perf\n3.sqr\n");
    scanf("%d",&b);
    switch(b)
    {
    case 1: arm(a);
        break;
    case 2: perf(a);
        break;
    case 3: sqr(a);
        break;
    }

    return 0;
}

void arm(int a)
{
int sum=0,k=a,rem;
while(k!=0)
{
    rem = k%10;
    sum+=(rem*rem*rem);
    k=k/10;
}
if (sum==a)
    printf("\nYes");
else
    printf("\nNo");
}

void perf(int a)
{
int sum=1;
for(int i=2;i<a;i++)
{
    if(a%i==0)
        sum+=i;
}
if(sum==a)
    printf("\nYes");
else
    printf("\nNo");
}

void sqr(int a)
{
    int flag=0;
for(int i=2;i<a/2;i++)
{
    if(a%i==0)
        if(a==i^2)
        flag=1;
}
if (flag==1)
    printf("\nYes");
else
    printf("\nNo");
}
