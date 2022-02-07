#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE* fp;
    fp=fopen("test2.txt","r");
    char ch;
    if(fp==NULL)
        printf("Cannot open file");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        putchar(ch);
    }
    fclose(fp);
}
