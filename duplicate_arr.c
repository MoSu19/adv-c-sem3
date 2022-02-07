#include<stdio.h>

int main()
{
printf("Mohit Suhasaria\t19BCE2167\n");
int n,a[20];
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
if(a[j]==a[i])
a[j]=0;
printf("\n");
for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
}
