#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    int i,j,a,b,k[20][20],t[20],count=0,temp=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
        {
            scanf("%d",&k[i][j]);
            t[count]=k[i][j];
            count++;
        }
    for(i=0;i<count;i++)
        for(j=i+1;j<count;j++)
        if(t[j]==t[i])
        t[j]=0;
    for(i=0;i<a;i++)
       {
           for(j=0;j<b;j++)
        {
            k[i][j]=t[temp];
            temp++;
            printf("%d\t",k[i][j]);
        }
        printf("\n");
       }
}
