#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    FILE *f;
    char ch;
    int c=0,n=0,t=0,s=0;
    f=fopen("sample.txt","r");
    if(f==NULL)
    {
        puts("Error!");
        exit(1);
    }
    putchar('\n');
    while(1)
    {
        ch=fgetc(f);
        if(ch==EOF)
            break;
        putchar(ch);
        switch(ch)
        {
            case ' ':s++;
            break;

            case '\t':t++;
            break;

            case '\n':n++;
            break;

            default:c++;
            break;
        }
    }
    fclose(f);
    printf("\n\nChars: %d\nSpaces: %d\nTabs: %d\nNewlines: %d",c,s,t,n);
    return 0;
}
