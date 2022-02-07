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
    puts("\nOpened Successfully in r");
    fclose(f);
    f=fopen("sample.txt","w");
    if(f==NULL)
    {
        puts("Error!");
        exit(2);
    }
    puts("\nOpened Successfully in w");
    fclose(f);
        f=fopen("sample.txt","a");
    if(f==NULL)
    {
        puts("Error!");
        exit(3);
    }
    puts("\nOpened Successfully in a");
    fclose(f);
        f=fopen("sample.dat","rb");
    if(f==NULL)
    {
        puts("Error!");
        exit(4);
    }
    puts("\nOpened Successfully in rb");
    fclose(f);
        f=fopen("sample.dat","wb");
    if(f==NULL)
    {
        puts("Error!");
        exit(5);
    }
    puts("\nOpened Successfully in wb");
    fclose(f);
}
