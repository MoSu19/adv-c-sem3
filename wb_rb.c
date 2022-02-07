#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    FILE *fs,*fp;
    fs=fopen("TEST.EXE","rb");
    if(fs==NULL)
        exit(1);
    else
    {
        fp=fopen("TEST2.EXE","wb");
        while(1)
        {
            ch=fgetc(fs);
            if(ch==EOF)
                break;
            else
                fputc(ch,fp);
        }
        printf("\nSuccessful");
        fclose(fs);
        fclose(fp);
    }
}
