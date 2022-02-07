#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    int a[10][10],b[10][10],c[10][10];
    int m,n;
    char s;
    printf("Enter dimensions: ");
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("\nEnter choice of operation(+,-,*): ");
    scanf(" %c",&s);
    printf("%c",s);

    switch(s)
    {
        case '+': for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    break;
            case '-': for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
    break;
            case '*': for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]*b[i][j];
    }
    break;
    default:printf("Error\n");break;
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
    return(0);
}
