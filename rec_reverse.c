#include<stdio.h>

void rev(char *s)
{
    if(*s)
    {
        rev(s+1);
        printf("%c",*s);
    }
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    char a[20];
    scanf("%[^\n]s",a);
    rev(a);
    return 0;
}
