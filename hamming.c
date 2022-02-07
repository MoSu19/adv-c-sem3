#include<stdio.h>
#include<math.h>

int bin(int a)
{
    long k=0;

    for(int i=0;a>0;i++)
    {
        k=k+pow(10,i)*(a%2);
        a=a/2;
    }

    return k;
}

int xor(int a, int b)
{
    if(a!=b)
        return 1;
    else
        return 0;
}

void main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    int n;
    printf("\nEnter the length of the data: ");
    scanf("%d",&n);
    int data[n];
    char* s = (char*)malloc(n*sizeof(char));
    printf("\nEnter the data: ");
    scanf("%s",s);
    printf("---------------------------------");
    for(int i=0;i<n;i++)
        data[i]=(int)s[i]-'0';
    free(s);
    int p=0;
    while(1)
    {
        if(pow(2,p)>=(n+p+1))
            break;
        else
            p++;
    }

    printf("\nNo of parity bits: %d",p);

    int code[n+p],parity[p],x=0,y=n-1;
    int a;

    for(int i=0;i<p;i++)
        parity[i]=0;

    for(int i=n+p-1;i>=0;i--)
    {
        if((n+p-1)-i==pow(2,x)-1)
        {
            for(int j=i-1;j>=0;j--)
            {
                a=bin((n+p-1)-j);
                if(a/pow(10,x+1)==1)
                    parity[x]=xor(code[j],parity[x]);
            }
            parity[x]=1;
            code[i]=parity[x];
            x++;
        }

        else
        {
            code[i]=data[y];
            y--;
        }
    }

    printf("\nParity bits are: ");
    for(int i=0;i<p;i++)
        printf("\nP%d = %d",i+1,parity[i]);

    printf("\n\nCode word: ");
    for(int i=0;i<n+p;i++)
        printf("%d",code[i]);

}
