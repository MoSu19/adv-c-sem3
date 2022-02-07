#include<stdio.h>
#include<string.h>
#include<ctype.h>

int sim( char *a, char *b )
{
    int count = 0;
    for( int i = 0; i < strlen(a); i++)
    {
        if(a[i] == b[i])
            count++;
        else
            break;
    }
    return count;
}

char* suf(char *a, int n, int in)
{
    char* s = malloc((n-in)*sizeof(char));
    for( int i = 0; i < n-in; i++)
        s[i] = a[in+i];
    return s;
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    char *str;
    int sum = 0;

    scanf("%[^\n]s",str);

    int len = strlen(str);

    for( int i = 0; i < len; i++)
    {
        char* check = suf( str, len, i);
        sum+= sim( check, str );
        printf("\nSuffix %d: %s",i+1,check);
    }

    printf("\nSum of Similarities: %d",sum);

    return 0;
}
