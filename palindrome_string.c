#include<stdio.h>
#include<string.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    char s[20];
    int f=0,m=0,n;
    scanf("%[^\n]s",s);
    n=strlen(s)-1;
    while(n>m)
    {
        if(s[m++]==s[n--])
            continue;
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("palindrome");
    else
        printf("not");

    return(0);
}
