#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f,*fs;
    char ch;
    f=fopen("test.txt","r");
    if(f!=NULL)
    {
        fs=fopen("test2.txt","w");
        if(fs!=NULL)
        {
            ch=fgetc(f);
            while(ch!=EOF)
            {
                ch=fgetc(f);
                fputc(fs,ch);
            }
        }
    }
    fclose(f);
    fclose(fs);

    return 0;
}
