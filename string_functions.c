#include<stdio.h>

int len(char *a)
{
    int count=0;
    for(a;*a;a++,count++);
    return count;
}

void cat(char *a, char *b)
{
    int lena = len(a);
    int lenb = len(b);

    for(int i=0;i<lenb;i++)
        a[lena+i]=b[i];
}

void copy(char *a, char *b)
{
    free(a);
    a=malloc(len(b)*sizeof(char));
    for(b;*b;b++,a++)
        *a=*b;
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    char *str=malloc(100*sizeof(char));

    scanf("%s",str);

    int lenstr=len(str);
    printf("\nstrlen: %d",lenstr);

    cat(str,"CAT");
    printf("\nstrcat: %s",str);

    copy(str,"Hello");
    printf("\nstrcpy: %s",str);

    free(str);
    return 0;
}
