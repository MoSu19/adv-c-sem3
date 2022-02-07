#include<stdio.h>
#include<string.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    char str1[20],str2[20],temp[20];
    gets(str1);
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nstr1 is now: %s",str1);
    printf("\nstr2 is now: %s",str2);

    return 0;
}
