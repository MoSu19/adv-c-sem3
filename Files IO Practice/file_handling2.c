#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp,*ft;
    fp=fopen("test2.txt","r+");
    char ch;

        fseek(fp,0,SEEK_END);
        fputs("\nI am being appended",fp);
    rewind(fp);
    ft=fopen("test.txt","w+");
    fseek(ft,0,SEEK_SET);
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        fputc(ch,ft);
    }
    fclose(fp);
    fclose(ft);
}
