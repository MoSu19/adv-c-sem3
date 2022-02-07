#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    char str[20];
    int flag=0;

    scanf("%s",str);
    char* s=str;
    while(*s)
    {
        for(char *p=s+1;*p!='\0';p++)
        if(*s==*p)
            {
            flag=1;
            break;
            }
        s++;
    }
    if(flag==0)
        printf("Isogram");
    else
        printf("not");
}
