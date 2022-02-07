#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    int n,i = 0,sp = 0, c = 0, alph[26];
    for( i = 0; i < 26; i++)
        alph[i] = 0;
    scanf("%d", &n);
    scanf("%*[\n]");

    char **inputs,ch;
    inputs = malloc(n * sizeof(char *));

    for (i = 0; i < n; i++)
       inputs[i] = malloc(100 * sizeof(char));


    for(i = 0; i < n; i++)
    {
        scanf("%*[\n]");
        scanf("%100[^\n]", inputs[i]);
    }
    printf("\n\n");

    for(i = 0; i < n; i++)
        printf("%s\n", inputs[i]);

    for(i = 0; i < n; i++)
    {
        for( int j = 0; j < strlen(inputs[i]); j++ )
        {
            ch = inputs[i][j];
            c++;
            if(ch == ' ')
                sp++;
            ch = tolower(inputs[i][j]);
            alph[ch - 'a']++;
        }
    }

    printf("\nNo. of words: %d",sp+n);
    printf("\nNo. of characters: %d",c);
    for( i = 0; i < 26 ; i++)
        printf("\n%c : %d",'a'+i,alph[i]);
    printf("\nNo. of lines: %d",n);

    return 0;
}

